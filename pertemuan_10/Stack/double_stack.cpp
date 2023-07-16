/*  ========================
  ==PROGRAM DOUBLE STACK==
  ===Struktur Data dan Algoritma====
  ======================== */
#include<iostream>
#include<conio.h>
#define Max 20

using namespace std;

struct Stack
{
  char Isi[Max+1];
  unsigned int top1;
  unsigned int top2;
};

void init (Stack &S);
void Push(Stack &S, int nostack, char Data);
void baca(Stack S, int nostack);
void Pop(Stack &S, char &Hsl, int nostack);
int Full(Stack S);
int empty(int nostack);
void clear(Stack &S, int nostack);

main()
{
  char huruf;
  Stack S;
  int k, nomor;
    init(S);
    cout<<"Mengisi Stack Pertama..."<<endl<<endl;
    for(k=1;k<=5;k++)
    {
      cout<<"Masukkan Karakter :";
      cin>>huruf;
      Push(S,1,huruf);  //mengisi huruf ke Stack1
    }
    baca(S,1);  //mencetak isi Stack Pertama
    cout<<"\n\nMengisi Stack Kedua..."<<endl<<endl;
    for(k=1;k<=5;k++)
    {
      cout<<"Masukkan Karakter :";
      cin>>huruf;
      Push(S,2,huruf);  //mengisi huruf ke Stack2
    }
    baca(S,2);  //mencetak isi Stack
    cout<<"\n\nmenghapus elemen Stack Pertama..."<<endl;
    Pop(S,huruf,1);  //Menghapus elemen puncak Stack;
    cout<<"elemen Yang dihapus : "<<huruf<<endl;
    baca(S,1);  //mencetak isi Stack
    cout<<"\n\nmenghapus elemen Stack Kedua..."<<endl;
    Pop(S,huruf,2);  //Menghapus elemen puncak Stack 2
    cout<<"elemen Yang dihapus : "<<huruf<<endl;
    baca(S,2);  //mencetak isi Stack
    cout<<"\n\nMengisi Stack Kedua...\n\n";
    for(k=1;k<=3;k++)
    {
      cout<<"Masukkan Karakter :";
      cin>>huruf;
      Push(S,2,huruf);  //mengisi huruf ke Stack2
    }
    baca(S,2);  //mencetak isi Stack
    cout<<"\n\nmenghapus elemen Stack Kedua..."<<endl;
    Pop(S,huruf,2);  //Menghapus elemen puncak Stack 2
    cout<<"elemen Yang dihapus : "<<huruf<<endl;
    baca(S,2);  //mencetak isi Stack 2
    cout<<"\n\nmenghapus elemen Stack Kedua..."<<endl;
    Pop(S,huruf,2);  //Menghapus elemen puncak Stack 2
    cout<<"elemen Yang dihapus : "<<huruf<<endl;
    baca(S,2);  //mencetak isi Stack 2
    cout<<"Masukkan Karakter  : "; cin>>huruf;
    cout<<"Masukkan Nomor Stack  : "; cin>>nomor;
    Push(S,nomor,huruf);
    baca(S,nomor);
    for(k=1;k<=3;k++)
    {
      cout<<"Masukkan Karakter  : "; cin>>huruf;
      cout<<"Masukkan Nomor Stack  : "; cin>>nomor;
      Push(S,nomor,huruf);
    }
    baca(S,1);
    baca(S,2);
    getch();
}

/*  ===================
  ==Fungsi Inisiasi==
  =================== */
  
void init(Stack &S)
{
  S.top1 = 0;
  S.top2 = Max+1;
}

/*  =====================================
  ==Fungsi Memasukkan Elemen ke Stack==
  ===================================== */
void Push(Stack &S, int nostack, char Data)
{
  if(Full(S) != true)
  {
    switch(nostack)
    {
      case 1 : S.top1++;
          S.Isi[S.top1] = Data;
        break;
      case 2 : S.top2--;
          S.Isi[S.top2] = Data;
        break;
      default: cout<<"Invalid PUSH..."<<endl;
        break;
    }
  }
  else
    cout<<"Stack Over....."<<endl;
}

/*  ======================================
  ==Fungsi Menghapus Elemen dari Stack==
  ====================================== */
void Pop(Stack &S, char &Hsl, int nostack)
{
  switch (nostack)
  {
    case 1 : Hsl = S.Isi[S.top1];
          S.top1--;
        break;
    case 2 : Hsl = S.Isi[S.top2];
          S.top2++;
        break;
    default: cout<<"invalid POP...."<<endl;
        break;
  }
}

/*  =============================
  ==Fungsi Mengosongkan Stack==
  ============================= */
void clear(Stack &S, int nostack)
{
  switch(nostack)
  {
    case 1 : S.top1 = 0;
      break;
    case 2 : S.top2 = Max+1;
      break;
    default: cout<<"Nomor Stack Invalid...\n";
      break;
  }
}

/*  ===============
  ==Fungsi FULL==
  =============== */
int Full(Stack S)
{
  if(S.top1 + 1 >= S.top2) return (true);
  else return(false);
}

/*  ========================================
  ==Fungsi Membaca/Mencetak Elemen Stack==
  ======================================== */
void baca(Stack S, int nostack)
{
  int i;
  switch(nostack)
  {
    case 1 : cout<<"Isi Stack Pertama : ";
      for(i=1;i<=S.top1;i++)
        cout<<S.Isi[i];
        break;
    case 2 : cout<<endl<<"Isi Stack Kedua : ";
      for(i=Max;i>=S.top2;i--)
        cout<<S.Isi[i];
  }
    cout<<endl;
}
