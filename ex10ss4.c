#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap so thu nhat:");
	scanf("%d",&a);
	printf("nhap so thu hai:"); 
	scanf("%d",&b);
	printf("nhap so thu ba:");
	scanf("%d",&c);
	
	// dieu kien
	int temp;
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}else if(a>c){
		temp=a;
		a=c;
		c=temp;
	}else if(b>c){
		temp=b;
		b=c;
		c=temp;
		return 0 ;
	}
	printf("thu tu tang dan la : %d %d %d ",a,b,c);
	return 0; 
	
} 



