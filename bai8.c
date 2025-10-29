#include <stdio.h>
int UCLN(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int BCNN(int a, int b) {
    return (a*b) / UCLN(a,b);
}

int main() {
    int a,b;

    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d",&a,&b);

    if (a<=0 || b<=0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 0;
    }

    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %d\n",a,b,BCNN(a,b));

    return 0;
}

