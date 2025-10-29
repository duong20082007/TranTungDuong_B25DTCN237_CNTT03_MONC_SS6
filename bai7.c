#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);

    if (a<=0 || b<=0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 0;
    }

    int x = a, y = b;

    while (x!=y) {
        if (x>y)
            x -= y;
        else
            y -= x;
    }
    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n",a,b,x);

    return 0;
}

