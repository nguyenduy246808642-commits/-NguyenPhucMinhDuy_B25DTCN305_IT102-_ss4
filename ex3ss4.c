#include<stdio.h>
int main(){
	// khai bao bien
	int x;
	printf("NHap vao day mot so nguyen:");
	scanf("%d",&x);
	
	//dieu kien
	if(x%3==0 && x%5==0){
		printf("So do chia het cho 3 va 5");
	}else if(x%5==0){
		printf("So do chia het cho 5");
	}else if(x%3==0 ){
		printf("So do chia het cho 3");
	}else{
		printf("So do khong chia het cho 3 va 5");
		
	}
	return 0;
}

