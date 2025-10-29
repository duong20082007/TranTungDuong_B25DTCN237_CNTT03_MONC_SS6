#include <stdio.h>
int main(){
	int n,i;
	
	do {
		printf("Nhap mot so nguyen tu 1 den 10: ");
		scanf("%d",&n);
		
		if(n<1 || n>10){
			printf("Loi: Vui long chon so tu 1 den 10 ");
		}
	} while (n<1||n>10);
	
	printf("\nBang cuu chuong cua %d: \n",n);
	
	for(i=1;i<=10;i++){
		printf("%d*%d=%d \n",n,i,n*i);
	}
	
	return 0;
}
