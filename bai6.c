#include <stdio.h>
int main(){
	float a,b;
	int choice;
	
	printf("Nhap vao so bat ky: ");
	scanf("%f %f",&a,&b);
	
	do {
		printf("\nMenu\n");
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n"); 
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Tong = %.1f\n",a+b);
			break;
		case 2:
			printf("Hieu = %.1f\n",a-b);
			break;
		case 3:
			printf("Tich = %.1f\n",a*b);
			break;
		case 4:
			if(b!=0){
				printf("Thuong = %.1f\n",a/b);
			} else {
				printf("Khong the chia het cho 0 ");
			}
			break;
		case 5:
			printf("Thoat khoi chuong trinh\n");
		default:
			printf("Lua chon khong hop le. Vui long chon lai\n");
		}
	} while(choice!=5);
	
	return 0;
}
