#include <stdio.h>
int main(){
	int pass_corect= 1605;
	int pass_input;
	printf("hay nhap mat khau");
	scanf("%d",&pass_input);
	if(pass_corect==pass_input){
		printf("mat khau chinh xac");
	}else{
		printf("mat khau khong chinh xac");
	}   
} 
