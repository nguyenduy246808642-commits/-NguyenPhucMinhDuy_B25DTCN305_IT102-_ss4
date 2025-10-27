#include<stdio.h>
int main(){
	int nam_sinh,tuoi;
	float hoc_luc ;
	printf("Nhap nam sinh:");
	scanf("%d",&nam_sinh);
	printf("Nhap diem trung binh:");
	scanf("%f",&hoc_luc); 
	 
		if(nam_sinh<1900 || nam_sinh>2025){
	 	printf("Nam sinh khong hop le \n");
	 	return 0; 
	 } 
	

	 printf("\n\n -----Thong tin sinh vien -----\n\n");
			printf("Nam sinh:%d \n\n",nam_sinh);
	
	 tuoi=2025-nam_sinh;
	 printf("Tuoi:%d \n\n",tuoi);
	 
	 // kiem tra xem co du 18 tuoi hay khong
	 
	 if("tuoi<=18"){
	 	printf("Du 18 tuoi \n"); 
	 } else{
	 	printf("Khong du 18 tuoi \n"); 
	 } 
    // xep loai hoc lucc 
	if(hoc_luc<5){
		printf("\nHoc luc:yeu\n");
	}else if(hoc_luc>=5 && hoc_luc<=6.4){
		printf("\nHoc luc:trung binh\n");
	}else if(hoc_luc>=6.5 && hoc_luc<=7.9){
		printf("\nHoc luc:kha");
	}else if(hoc_luc>=8){
		printf("\nHoc luc:gioi\n");
	}
	
return 0;

}
	

