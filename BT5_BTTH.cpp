#include <stdio.h>

int main(){
	int numb, i, count=1;
	printf("Moi ban nhap vao mot so bat ki de kiem tra: ");
	scanf("%d", &numb);
	
	for(i=2;i<=numb;i++){
		if(numb%i==0)
		count += 1;	
	}
	if(count==2)
		printf("%d la so nguyen to",numb );
	else
		printf("%d khong phai la so nguyen to",numb );
	return 0;
}
