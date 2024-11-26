#include <stdio.h>
int main(){
	int a,b,c,d;
	int sum=0; 
	printf("moi ban nhap vao so thu nhat");
	scanf("%d",&a);
	printf("moi ban nhap vao so thu hai");
	scanf("%d",&b);
	printf("moi ban nhap vao so thu ba");
	scanf("%d",&c);
	printf("moi ban nhap vao so thu tu");
	scanf("%d",&d);
	if(a%2!=0){
		sum+=a; 
		
	}if(b%2!=0){
		sum+=b; 
	}if(c%2!=0){
		sum+=c; 
	}if(d%2!=0){
		sum+=d; 
	} 
	printf("tong cua cac so le la %d",sum);
	 
} 

