#include <stdio.h>
int main(){
	int year;
	int month;
	int days;
	printf("moi ban nhap vao nam\n");
	scanf("%d",&year);
	printf("moi ban nhap vao thang\n");
	scanf("%d",&month);
	if(month==2){
		if((year%4==0&&year%100!=0)||(year%400==0)){
			days=29;
		}else{
			days=28;
		}
	}else if(month==4||month==6||month==9||month==11){
		days=30;
	} else {
		days=31;
	}
	printf("thang %d nam %d co %d ngay.",month,year,days);
}
    
