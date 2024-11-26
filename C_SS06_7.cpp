#include<stdio.h>
int main(){
	int number;
	printf("hay nhap vao so nguyen bat ki");
	scanf("%d",&number);
	for(int i=1;i<=number;i++){
		if(number%i==0){
			printf("%d\n",i); 
		} 
		
	}
}
	 

