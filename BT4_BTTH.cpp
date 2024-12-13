#include <stdio.h>

int main(){
	int number, i;
	printf("Moi ban nhap mot so nguyen duong de tim uoc: ");
	scanf("%d", &number);
	
	for(i=1;i<=number;i++){
		if(number % i == 0)
		printf(" %d ", i);
	}
	return 0;
}
