#include <stdio.h>
int main(){
	int A[5] = {12,17,10,5,15};
	int B[7] = {25,11,7,25,16,22,14};
	int C[12] = {0};
	int i, j;
	
	printf("Isi Array A: ");
	for(i = 0; i < 5; i++){
		printf("%3i", A[i]);
	}
	
	printf("\nIsi Array B: ");
	for(i = 0; i < 7; i++){
		printf("%3i", B[i]);
	}
	
	j = 0;
	for(i = 0; i < 5; i++){
		C[j] = A[i];
		j++;
	}
	
	for(i = 0; i < 7; i++){
		C[j] = B[i];
		j++;
	}
	
	printf("\nIsi Array C: ");
	for(i = 0; i < 12; i++){
		printf("%3i", C[i]);
	}
	
	return 0;
}