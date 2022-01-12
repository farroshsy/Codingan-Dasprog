#include <stdio.h>

void output(int input);

int main(){
	int angka;
	printf("Masukkan angka : ");
	scanf("%d",&angka);
	printf("Display : \n");
	output(angka);
	
	return 0;
}

void output(int input)
{
	int i;
	if(input == 1){
		printf("*");
	}
	else{
		output(input-1);
		printf("\n");
		for(i=0;i<input;i++){
			printf("*");
		}
		printf("\n");
		output(input-1);
	}
}


