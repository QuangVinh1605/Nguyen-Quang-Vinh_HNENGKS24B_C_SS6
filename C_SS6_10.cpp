#include<stdio.h>
int main(){
	int number;
	int count = 0;
	printf("Hay nhap 1 so nguyen bat ky: ");
	scanf("%d",&number);
	for(int i = 1;i < number;i++){
		if(number % i == 0){
			count++;
		}
	}
	if(count == 1){
		printf("%d la so nguyen to",number);
	}
	else{
		printf("%d khong phai so nguyen to",number);
	}
	
}
