#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Card structure
struct Card {
    string color;
    int number;
    Card *next;
    Card *prev;
};

// Function untuk menampilkan kartu
void printCard(Card &card) {
    cout << card.color << " " << card.number << endl;
}

// Function untuk menginisialisasi tumpukan kartu
Card *initDeck() {
    Card *head = NULL;
    Card *tail = NULL;

    // Membuat nomor pada kartu (0-9)
    for (int i = 0; i <= 9; i++) {
        // Setiap kartu memiliki dua warna
        for (int j = 0; j < 2; j++) {
            Card *newCard = new Card{"Red", i, NULL, NULL};
            if (head == NULL) {
                head = newCard;
                tail = newCard;
            } else {
                tail->next = newCard;
                newCard->prev = tail;
                tail = newCard;
            }

            newCard = new Card{"Blue", i, NULL, NULL};
            tail->next = newCard;
            newCard->prev = tail;
            tail = newCard;

            newCard = new Card{"Green", i, NULL, NULL};
            tail->next = newCard;
            newCard->prev = tail;
            tail = newCard;

            newCard = new Card{"Yellow", i, NULL, NULL};
            tail->next = newCard;
            newCard->prev = tail;
            tail = newCard;
        }
	}
    tail->next = head;
    head->prev = tail;

    return head;
}

// Function untuk mengacak tumpukan kartu
void shuffleDeck(Card *&head){
    srand(time(NULL));

    int numberCards = 0;
    Card* temp = head;
    while (temp->next != head) {
        temp = temp->next;
        numberCards++;
    }

    for(int i = 0; i < numberCards; i++){
        int position = rand() % numberCards;
        Card *card = head;
        for(int j = 0; j < position; j++){
            card = card->next;
        }

        // Menukar kartu
        Card *tempNext = card->next;
        Card *tempPrev = card->prev;
        card->next = head->next;
        card->prev = head->prev;
        head->next->prev = card;
        head->prev->next = card;
        head->next = tempNext;
        head->prev = tempPrev;
    }
}

void play() {
    Card *deck = initDeck();
    shuffleDeck(deck);

    Card *player = NULL;
    Card *computer = NULL;

    // Deal 7 cards to each player
    for (int i = 0; i < 7; i++) {
        Card *playerCard = deck;
        deck = deck->next;

        if (player == NULL) {
            player = playerCard;
            playerCard->prev = playerCard;
            playerCard->next = playerCard;
        } else {
            playerCard->next = player;
            playerCard->prev = player->prev;
            player->prev->next = playerCard;
            player->prev = playerCard;
            player = playerCard;
        }

        Card *computerCard = deck;
        deck = deck->next;

        if (computer == NULL) {
            computer = computerCard;
            computerCard->prev = computerCard;
            computerCard->next = computerCard;
        } else {
            computerCard->next = computer;
            computerCard->prev = computer->prev;
            computer->prev->next = computerCard;
            computer->prev = computerCard;
            computer = computerCard;
        }
    }

    Card *topCard = deck;
    deck = deck->next;

    cout << "Top card: ";
    printCard(*topCard);

    // Game loop
    while (true) {
		cout << "Your turn. Choose a card: " << endl; 	    	
        cout << "Your hand: " << endl;

        int cardIndex = 1;
        Card *playerCard = player;
        do {
            cout << cardIndex << ". ";
            printCard(*playerCard);
            playerCard = playerCard->next;
            cardIndex++;
        } while (playerCard != player);

        int selectedCardIndex;
        cin >> selectedCardIndex;
        selectedCardIndex--;

        playerCard = player;
        for (int i = 0; i < selectedCardIndex; i++) {
            playerCard = playerCard->next;
        }

        // Melakukan pengecekan kartu yang dipilih
        if (playerCard->color == topCard->color || playerCard->number == topCard->number){
            cout << "Card played: ";
            printCard(*playerCard);

            topCard = playerCard;

            // Menghapus kartu dari player
            if (playerCard == player) {
                player = playerCard->next;
            }
            playerCard->prev->next = playerCard->next;
            playerCard->next->prev = playerCard->prev;

            delete playerCard;

            if (player == player->next) {
                cout << "You win!" << endl;
                break;
            }
        } else {
            cout << "Player draw." << endl;
            
            Card *newCard = deck;
            deck = deck->next;

            newCard->next = player;
            newCard->prev = player->prev;
            player->prev->next = newCard;
            player->prev = newCard;
        }

        // Computer (kartu random)
        cout << "Computer's turn." << endl;

        // Melakukan pengecekan kartu yang dipilih Computer
        Card *computerCard = computer;
        bool validCard = false;
        do {
            if (computerCard->color == topCard->color || computerCard->number == topCard->number){
                validCard = true;
                break;                                                                          
            }
            computerCard = computerCard->next;
        } while (computerCard != computer);

        if (validCard) {
            cout << "Card played by computer: ";
            printCard(*computerCard);

            topCard = computerCard;

            // Menghapus kartu dari Computer
            if (computerCard == computer) {
                computer = computerCard->next;
            }
            computerCard->prev->next = computerCard->next;
            computerCard->next->prev = computerCard->prev;

            delete computerCard;

            if (computer == computer->next) {
                cout << "Computer wins!" << endl;
                break;
            }
        } else {
            cout << "Computer draw." << endl;

            Card *newCard = deck;
            deck = deck->next;

            newCard->next = computer;
            newCard->prev = computer->prev;
            computer->prev->next = newCard;
            computer->prev = newCard;
        }
    }
}

int main(){
	int choose;
	
	while(true){
		system("cls");
		cout<< "Welcome to Uno!\n"
			<< "1. Play\n"
			<< "2. Exit\n"
			<< "Choose: ";
		cin >> choose;
		
		switch(choose){
			case 1:
				system("cls");
				play();
				break;
			case 2:
				exit(0);
		}
		system("pause");
	}	
	return 0;
}
