#include<stdio.h>
int main(){
	// khai bao bien
	
	int x;
	printf("Nhap vao day nam bat ky:");
	scanf("%d",&x);
	
	//dieu kien
	
	if(x%4==0 && x%100!=0 ){
		printf("Day la nam nhuan");
	}else if(x%400==0){
		printf("Day la nam nhuan");
	}else{
		printf("Day khong phai la nam nhuan");
	}
	return 0;
}

