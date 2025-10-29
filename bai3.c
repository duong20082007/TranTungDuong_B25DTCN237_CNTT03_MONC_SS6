#include <stdio.h>
int main(){
	int N,i,sum=0;
	
	printf("Nhap vao so nguyen duong N: ");
	scanf("%d",&N);
	
	if(N<=0){
		printf("N phai la so nguyen duong ");
	} 
	
	for(i=1;i<=N;i++){
		sum += i;
	}

	printf("Tong = %d\n",sum3);

	return 0;
}
