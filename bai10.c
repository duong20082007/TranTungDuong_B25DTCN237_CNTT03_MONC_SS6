#include <stdio.h>

int main() {
    int number,reverse=0;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d",&number);

    if (number==0) {
        printf("0");
        return 0;
    }

    int temp=number;
    while (temp>0) {
        reverse=reverse*10+temp%10;
        temp/=10;
    }

    printf("Cac chu so la: ");
    while (reverse>0) {
        printf("%d ",reverse%10);
        reverse/=10;
    }
    
    printf("\number");
    return 0;
}

