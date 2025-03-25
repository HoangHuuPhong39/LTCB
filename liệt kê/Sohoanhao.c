#include<stdio.h>

int main (){
    int a, i, S=0;
    printf("Nhap vao so can xet: ");
    scanf("%d", &a);
    for (i=1; i<=a; i++)
    {
        if (a%i==0)
        {
            S=S+i;
        }
    }
    if (S==2*a) printf("So %d la 1 so hoan hao", a);
    else printf("So %d khong phai 1 so hoan hao", a);
    return 0;
}
