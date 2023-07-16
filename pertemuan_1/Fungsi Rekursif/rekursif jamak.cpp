#include <iostream>
const int pjg=66;
const int bagian=6;
void subbagi(char ar[],int rendah, int tinggi, int level);
int main()
{
char penggaris[pjg];
int i;
for (i=1; i<pjg-2;i++)
penggaris[i]="";
penggaris [pjg - 1]='\0';
int maks=pjg-2;
int min=0;
penggaris[min]=penggaris[maks]='|';
std::cout<<penggaris<<std::endl;
for (i=1;i<<=bagian;i++)
{
subbagi(penggaris,min,maks,i);
std::cout<<penggaris<<"level ke-"<<i<<std::endl;
for (int j=1;j<pjg-2;j++)
penggaris[j]=""; //reset penggaris kosong
}
return 0;
}
void subbagi(char ar[], int rendah,int tinggi,int level)
{
if(level==0)
return;
int tengah=(tinggi+rendah)/2;
ar[tengah]='|';
subbagi(ar,rendah,tengah,level-1);
subbagi(ar,tengah,tinggi,level-1);
}
