#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap canh a:");
	scanf("%d",&a);
	printf("nhap canh b:"); 
	scanf("%d",&b);
	printf("nhap canh c:");
	scanf("%d",&c);
	
	// dieu kien
	
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
		printf("La 3 canh tam giac"); 
	}else{
		printf("Khong phai la 3 canh cua tam giac");
		 
	} 
	 return 0; 
} 

