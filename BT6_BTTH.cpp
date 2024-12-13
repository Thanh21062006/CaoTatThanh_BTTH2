#include <stdio.h>

int main(){
	int n, a = 2, b, save = 1, check;
	printf("Moi ban nhap vao n so nguyen to can tim: ");
	scanf("%d", &n);
	
	while(save <= n){
		b = 2;
		check = 1;
		while( b < a){
			if(a % b == 0){
				check += 1 ;
				break;
			}
			b++;
		}
			if(check < 2){
				printf("%d ", a);
				save++;	
		}
		a++;
}
	
	return 0;
}
