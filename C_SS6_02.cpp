#include <stdio.h>
int main() {
	int a,b,c,d,e;
	int count_c=0;
	int count_l=0; 
	printf("moi ban nhap vao so thu nhat");
	scanf("%d",&a);
	printf("moi ban nhap vao so thu hai");
	scanf("%d",&b);
	printf("moi ban nhap vao so thu ba");
	scanf("%d",&c);
	printf("moi ban nhap vao so thu tu");
	scanf("%d",&d);
	printf("moi ban nhap vao so thu nam");
	scanf("%d",&e);
	if(a%2==0){
		count_c++; 
	}else{
		count_l++; 
	 
	}if(b%2==0){
		count_c++; 
	} else{
		count_l++; 
		
	} if(c%2==0){
		count_c++; 
	} else{
		count_l++;
		 
	} if(d%2==0){
		count_c++; 
	} else{
		count_l++; 
		
	} if(e%2==0){
		count_c++; 
	} else{
		count_l++; 
	} 
	 
	printf(" co %d so chan\n",count_c);
	printf(" co %d so le",count_l); 
	 
}
