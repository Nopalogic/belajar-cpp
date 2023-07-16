#include <stdio.h>

struct Mhs{
	char nim [8];
	int tugas, uts, uas;
};

int main(){
	int n, j;
	printf("Form Input Nilai Mahasiswa\n");
	printf("==========================\n");
	
	printf("Jumlah Mahasiswa : "); scanf ("%d", &n);
	printf("\n");
	
	struct Mhs m[n];
	for(j=0; j<n;j++){
		printf ("NIM : ");scanf("%8s",m[j].nim);
		printf ("TUGAS : ");scanf("%d",m[j].tugas);
		printf ("UTS : ");scanf("%d",m[j].uts);
		printf ("UAS : ");scanf("%d",m[j].uas);
		printf("\n");
	}
	double mean;
	printf("============================\n");
	printf("NIM\t\t Rata-Rata\n");
	printf("============================\n");
	
	for (j=0;j<n;j++){
		mean = (double)(m[j].tugas+m[j].uts+m[j].uas/3);
		printf("%s\t\t%0.2|f\n",m[j].nim,mean);
	}
	printf("=================================\n");
	
	return 0;
	
	
}
