#include <stdio.h>
int main(){
	int i,j;
	
	for(i=1;i<=9;i++){
		printf("\nBang cuu chuong cua %d:\n",i);
		for(j=1;j<=10;j++){
			printf("%d*%d= %d\n",i,j,j*i);
		}
	}
	
	return 0;
}
