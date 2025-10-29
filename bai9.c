#include <stdio.h>

int main() {
    int a,b,c;
    int choice;
    int entered=0; 

    do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("Nhap 3 so nguyen: ");
                scanf("%d %d %d",&a,&b,&c);
                entered=1;
                break;
                
            case 2:
                if (entered==0)
                    printf("Vui long nhap 3 so truoc\n");
                else
                    printf("Tong 3 so = %d\n",a+b+c);
                break;
                
            case 3:
                if (entered==0)
                    printf("Vui long nhap 3 so truoc\n");
                else
                    printf("Trung binh cong = %.2f\n",(a + b + c) / 3.0);
                break;

            case 4:
                if (entered==0)
                    printf("Vui long nhap 3 so truoc\n");
                else {
                    int min=a;
                    if (b<min) min=b;
                    if (c<min) min=c;
                    printf("So nho nhat = %d\n",min);
                }
                break;
                
            case 5:
                if (entered==0)
                    printf("Vui long nhap 3 so truoc\n");
                else {
                    int max=a;
                    if (b>max) max=b;
                    if (c>max) max=c;
                    printf("So lon nhat = %d\n",max);
                }
                break;
                
            case 6:
                printf("Thoat chuong trinh\n");
                break;
                
            default:
                printf("Lua chon khong hop le. Vui long nhap lai\n");
        }

    } while (choice != 6);

    return 0;
}

