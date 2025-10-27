#include<stdio.h>
int main(){
	//khai bao bien
	int x;
	 
	
	printf("Nhap mot so nguyen bat ky :");
	scanf("%d",&x);
	
	  // kiem tra dieu kien
	if(x>0){
		printf("So vua nhap la so duong");
	}else if(x==0){
		printf("Day la so 0"); 
	} else{
	printf(" So vua nhap la so am");
}
return 0; 
}
