#include<stdio.h>
int main(){
	// khai bao bien 
	int x;
	printf("Nhap mot so nguyen:");
	scanf("%d",&x);
	
	// dieu kien
	if(x%2==0){
		printf("Day la so chan"); 
	} else{
		printf("Day la so le"); 
	} 
	 return 0; 
} 

