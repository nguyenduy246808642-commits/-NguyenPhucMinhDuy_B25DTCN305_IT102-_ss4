#include<stdio.h>
int main(){
	int ngay,thang,nam; 
	printf("Nhap ngay:");
	scanf("%d",&ngay);
	printf("Nhap thang:");
	scanf("%d",&thang);
	printf("Nhap nam:");
	scanf("%d",&nam);
	
	
	if(thang<1 || thang>12){
		printf("ngay thang nam khong hop le") ;
	}
	// xac dinh so ngay toi da cua thang
	int max_ngay;
	switch(thang){
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
		 max_ngay=31;
		 break;
		
		case 4 : case 6 : case 9 : case 11:
			max_ngay=30;
			break;
			
		case 2	:
			if((nam % 4==0 && nam % 100!=0) || (nam % 400==0)){
				max_ngay = 29;
				break;
			}else {
				max_ngay = 28;
				break;
		}
			
		default :
			printf("ngay thang nam khong hop le");
			return 0;
	} 
	 
	 
	
	return 0;
	
}

