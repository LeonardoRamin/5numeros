#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1=0;
	int n2=0;
	int n3=0;
	int n4=0;
	int n5=0;
	int maior=0;
	int menor=0;
	
	printf("N1:");
	scanf("%i",&n1);
	maior=n1;
	menor=n1;
	printf("N2:");
	scanf("%i",&n2);
	printf("N3:");
	scanf("%i",&n3);
	printf("N4:");
	scanf("%i",&n4);
	printf("N5:");
	scanf("%i",&n5);
	if(n2>maior){
		maior=n2;
	}
	if(n3>maior){
		maior=n3;
	}
	if(n4>maior){
		maior=n4;
	}
	if(n5>maior){
		maior=n5;
	}
	
	if(n2<menor){
		menor=n2;
	}
	if(n3<menor){
		menor=n3;
	}
	if(n4<menor){
		menor=n4;
	}
	if(n5<menor){
		menor=n5;
	}
	printf("O maior eh o %i e o menor eh o %i",maior,menor);
	return 0;
}
