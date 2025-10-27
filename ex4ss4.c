#include<stdio.h>
int main(){
	// Khai bao bien 
	int x;
	printf("Enter month here:");
	scanf("%d",&x);
	
	//Dieu kien
	 if(x==2){
	 	printf("month have 28 or 29 days");
	 }else if(x==4 || x==6 || x==9|| x==11){
	 	printf("Month have 30 days");
	 }else if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12){
	 	printf(" Month have 31 days ");
	 }else{
	 	printf("invalid month");
}
	return 0;
	 
}
