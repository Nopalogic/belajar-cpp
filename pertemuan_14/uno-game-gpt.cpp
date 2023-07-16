#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Colors
enum class Color {
    RED,
    BLUE,
    GREEN,
    YELLOW
};

// Card structure
struct Card {
    Color color;
    int number;
    Card* next;
    Card* prev;
};

// Function to print card
void printCard(const Card& card) {
    string color;
    switch (card.color) {
        case Color::RED:
            color = "Red";
            break;
        case Color::BLUE:
            color = "Blue";
            break;
        case Color::GREEN:
            color = "Green";
            break;
        case Color::YELLOW:
            color = "Yellow";
            break;
    }
    cout << color << " " << card.number << endl;
}

// Function to initialize the deck
Card* initDeck() {
    Card* head = nullptr;
    Card* tail = nullptr;

    // Add numbered cards (0-9)
    for (int i = 0; i <= 9; i++) {
        // Each color has two cards (except 0)
        for (int j = 0; j < 2; j++) {
            Card* newCard = new Card{Color::RED, i, nullptr, nullptr};
            if (head == nullptr) {
                head = newCard;
                tail = newCard;
            } else {
                tail->next = newCard;
                newCard->prev = tail;
                tail = newCard;
            }

            newCard = new Card{Color::BLUE, i, nullptr, nullptr};
            tail->next = newCard;
            newCard->prev = tail;
            tail = newCard;

            newCard = new Card{Color::GREEN, i, nullptr, nullptr};
            tail->next = newCard;
            newCard->prev = tail;
            tail = newCard;

            newCard = new Card{Color::YELLOW, i, nullptr, nullptr};
            tail->next = newCard;
            newCard->prev = tail;
            tail = newCard;
        }
    }

    // Add action cards (skip, reverse, draw two)
    for (int i = 0; i < 2; i++) {
        Card* newCard = new Card{Color::RED, -1, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;

        newCard = new Card{Color::BLUE, -1, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;

        newCard = new Card{Color::GREEN, -1, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;

        newCard = new Card{Color::YELLOW, -1, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;
    }

    // Add wild cards (wild, draw four)
    for (int i = 0; i < 4; i++) {
        Card* newCard = new Card{Color::RED, -2, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;

        newCard = new Card{Color::BLUE, -2, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;

        newCard = new Card{Color::GREEN, -2, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;

        newCard = new Card{Color::YELLOW, -2, nullptr, nullptr};
        tail->next = newCard;
        newCard->prev = tail;
        tail = newCard;
    }

    // Close the circular loop
    tail->next = head;
    head->prev = tail;

    return head;
}

// Function to shuffle the deck
void shuffleDeck(Card*& head) {
    srand(static_cast<unsigned>(time(nullptr)));

    int numCards = 0;
    Card* temp = head;
    while (temp->next != head) {
        temp = temp->next;
        numCards++;
    }

    for (int i = 0; i < numCards; i++) {
        int pos = rand() % numCards;
        Card* card = head;
        for (int j = 0; j < pos; j++) {
            card = card->next;
        }

        // Swap cards
        Card* tempNext = card->next;
        Card* tempPrev = card->prev;
        card->next = head->next;
        card->prev = head->prev;
        head->next->prev = card;
        head->prev->next = card;
        head->next = tempNext;
        head->prev = tempPrev;
    }
}

int main() {
    Card* deck = initDeck();
    shuffleDeck(deck);

    Card* playerHand = nullptr;
    Card* computerHand = nullptr;
    Card* topCard = deck;

    // Deal 7 cards to each player
    for (int i = 0; i < 7; i++) {
        Card* playerCard = deck;
        deck = deck->next;

        if (playerHand == nullptr) {
            playerHand = playerCard;
            playerCard->prev = playerCard;
            playerCard->next = playerCard;
        } else {
            playerCard->next = playerHand;
            playerCard->prev = playerHand->prev;
            playerHand->prev->next = playerCard;
            playerHand->prev = playerCard;
            playerHand = playerCard;
        }

        Card* computerCard = deck;
        deck = deck->next;

        if (computerHand == nullptr) {
            computerHand = computerCard;
            computerCard->prev = computerCard;
            computerCard->next = computerCard;
        } else {
            computerCard->next = computerHand;
            computerCard->prev = computerHand->prev;
            computerHand->prev->next = computerCard;
            computerHand->prev = computerCard;
            computerHand = computerCard;
        }
    }

//    Card* topCard = deck;
    deck = deck->next;

    cout << "Welcome to Uno!" << endl;
    cout << "Top card: ";
    printCard(*topCard);

    // Game loop
    while (true) {
        cout << "Your turn. Choose a card to play: " << endl;
        cout << "Your hand: " << endl;

        int cardIndex = 1;
        Card* playerCard = playerHand;
        do {
            cout << cardIndex << ". ";
            printCard(*playerCard);
            playerCard = playerCard->next;
            cardIndex++;
        } while (playerCard != playerHand);

        int selectedCardIndex;
        cin >> selectedCardIndex;
        selectedCardIndex--;

        playerCard = playerHand;
        for (int i = 0; i < selectedCardIndex; i++) {
            playerCard = playerCard->next;
        }

        // Check if the selected card can be played
        if (playerCard->color == topCard->color || playerCard->number == topCard->number ||
            playerCard->number == -1 || playerCard->number == -2) {
            cout << "Card played: ";
            printCard(*playerCard);

            // Update the top card
            topCard = playerCard;

            // Remove the card from the player's hand
            if (playerCard == playerHand) {
                playerHand = playerCard->next;
            }
            playerCard->prev->next = playerCard->next;
            playerCard->next->prev = playerCard->prev;

            delete playerCard;

            // Check if the player has won
            if (playerHand == playerHand->next) {
                cout << "Congratulations! You won!" << endl;
                break;
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }

        // Computer's turn (play a random card)
        cout << "Computer's turn." << endl;

        // Check if the computer has a valid card to play
        Card* computerCard = computerHand;
        bool validCard = false;
        do {
            if (computerCard->color == topCard->color || computerCard->number == topCard->number ||
                computerCard->number == -1 || computerCard->number == -2) {
                validCard = true;
                break;
            }
            computerCard = computerCard->next;
        } while (computerCard != computerHand);

        if (validCard) {
            cout << "Card played by computer: ";
            printCard(*computerCard);

            // Update the top card
            topCard = computerCard;

            // Remove the card from the computer's hand
            if (computerCard == computerHand) {
                computerHand = computerCard->next;
            }
            computerCard->prev->next = computerCard->next;
            computerCard->next->prev = computerCard->prev;

            delete computerCard;

            // Check if the computer has won
            if (computerHand == computerHand->next) {
                cout << "Computer wins!" << endl;
                break;
            }
        } else {
            cout << "Computer draws a card." << endl;

            Card* newCard = deck;
            deck = deck->next;

            newCard->next = computerHand;
            newCard->prev = computerHand->prev;
            computerHand->prev->next = newCard;
            computerHand->prev = newCard;
        }
    }

    // Clean up memory
    while (deck != nullptr && deck != topCard) {
        Card* temp = deck;
        deck = deck->next;
        delete temp;
    }

    return 0;
}
