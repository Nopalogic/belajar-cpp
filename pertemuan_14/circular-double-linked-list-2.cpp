#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

struct Mahasiswa{
	char nim[15];
	char nama[30];
	float ipk;
};

struct Elemen{
	Mahasiswa mhs;
	Elemen *next;
};

struct List{
	Elemen *first;
	Elemen *last;
};

void addFirst(char nim[], char nama[], float ipk, List *L);
void addAfter(Elemen *prev, char nim[], char nama[], float ipk, List *L);
void addLast(char nim[], char nama[], float ipk, List *L);

void deleteFirst(List *L);
void deleteAfter(Elemen *prev, List *L);
void deleteLast(List *L);

void showData(List *L);

Elemen *searchData(char nim[],  List *L);
Mahasiswa inputMahasiswa();
char *searchNim();

int main(){
	char option;
	
	List L;
	L.first = NULL;
	
	Mahasiswa data;
	Elemen *prev;
	
	int menu = 0;
	int pos = 0;
	
	do {
		system("cls");
		printf("+++ Circular Linked List +++\n");
		printf("1. Input Data (Depan)\n");
		printf("2. Input Data (Setelah)\n");
		printf("3. Input Data (Akhir)\n");
		printf("4. Hapus Data (Depan)\n");
		printf("5. Hapus Data (Setelah)\n");
		printf("6. Hapus Data (Akhir)\n");
		printf("7. Tampilkan Data\n");
		printf("8. Search Data\n");
		printf("9. Exit Data\n");
		
		printf("Pilih Menu: ");
		scanf("%d", &menu);
//		fflush(stdin)
		
		switch(menu){
			case 1:
				data = inputMahasiswa();
				addFirst(data.nim, data.nama, data.ipk, &L);
				break;
			case 2:
				prev = searchData(searchNim(), &L);
				if(prev != NULL){
					data = inputMahasiswa();
					addAfter(prev, data.nim, data.nama, data.ipk, &L);
				}
				break;
			case 3:
				data = inputMahasiswa();
				addLast(data.nim, data.nama, data.ipk, &L);
				break;
			case 4:
				deleteFirst(&L);
				break;
			case 5:
				prev = searchData(searchNim(), &L);
				if(prev != NULL){
					deleteAfter(prev, &L);
				}
				break;
			case 6:
				deleteLast(&L);
				break;
			case 7:
				showData(&L);
				break;
			case 8:
				searchData(searchNim(), &L);
				break;
			case 9:
				printf("Keluar Program!!");
				break;
			default:
				printf("Invalid Input!!");
				break;
		}
		printf("\n");
		
		printf("Press any key to continue...\n");
		getch();
	} while(menu != 9);
	return 0;
}

void addFirst(char nim[], char nama[], float ipk, List *L){
	Elemen *baru = new Elemen;
	
	strcpy(baru->mhs.nim, nim);
	strcpy(baru->mhs.nama, nama);
	baru->mhs.ipk = ipk;
	
	if(L->first == NULL){
		L->first = baru;
		baru->next = NULL;
		L->last = baru;
	} else {
		baru->next = L->first;
		L->first = baru;
	}
	
	baru = NULL;
	printf("\nBerhasil ditambahkan!");
}

void addAfter(Elemen *prev, char nim[], char nama[], float ipk, List *L){
	Elemen *baru = (Elemen) malloc (sizeof(Elemen));
	
	strcpy(baru->mhs.nim, nim);
	strcpy(baru->mhs.nama, nama);
	baru->mhs.ipk = ipk;
	
	if(baru->next == NULL){
		L->last = baru;
	}
	
	baru = NULL;
	printf("\nBerhasil ditambahkan!!");
}

void addLast(char nim[], char nama[], float ipk, List *L){
	Elemen *baru = (Elemen) malloc (sizeof(Elemen));
	
	strcpy(baru->mhs.nim, nim);
	strcpy(baru->mhs.nama, nama);
	baru->mhs.ipkk= ipk;
	
	if(L->first == NULL){
		L->first = baru;
		L->last = baru;
		baru->next = NULL;
	} else {
		L->last->next = baru;
		L->last = baru;
		baru->next = NULL;
	}
	
	baru = NULL;
	printf("\nBerhasil ditambahkan!!");
}