#include<stdio.h>
#include<stdio.h>
int main(){
	float a,b,c;
	float delta;
	float x1,x2;
	
	printf("moi ban nhap vao so thu nhat");
	scanf("%f\n",&a);
	printf("moi ban nhap vao so thu hai");
	scanf("%f\n",&b);
	printf("moi ban nhap vao so thu ba");
	scanf("%f\n",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh vo so nghiem.\n");
			}else{
				printf("phuong trinh vo nghiem.\n");
			}
			
		}else{
			printf("phuong trinh co mot nghiem la x=%.2f\n",-c/b);
		}
	} else{
		delta=b*b-4*a*c;
		if(delta>0){
			x1= (-b + sqrt (delta)) / (2 * a);
			x2= (-b - sqrt (delta)) / (2 * a);
			printf("phuong trinh co 2 nghiem phan biet:\n");
			printf("x1=%.2f",x1);
			printf("x2=%.2f",x2);
		}else if (delta==0){
			x1=-b/(2*a);
			printf("phuong trinh co nghiem kep \n");
			printf("x1=x2=%.2f",x1);
		
		}else {
			printf("phuong trinh vo nghiem.\n");
		}
	}
