#include<stdio.h>
int main(){
	int tiengoc,lai,thang;
	int tongtienlai, tienlai=0; 
	printf("moi ban nhap vao so tien ban dau");
	scanf("%d",&tiengoc);
	printf("moi ban nhap vao lai ");
	scanf("%d",&lai);
	printf("moi ban nhap vao so thang gui");
	scanf("%d",&thang);
	for(int i=1;1<=thang;i++){
		tienlai=tiengoc*lai/ 100;
		tongtienlai=tongtienlai+tienlai;
		tiengoc=tienlai+tiengoc;
		
	 
	}
	printf("tien lai:%f\n",tongtienlai);
	printf("tien nhan duoc:%f\n",tiengoc);
} 
