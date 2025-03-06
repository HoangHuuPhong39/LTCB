#include <stdio.h>

int UCLN(int a, int b)
{
    while (b != 0)
    {
        int tg = b;
        b = a % b;
        a = tg;
    }
    return a;
}
int BCNN(int a, int b)
{
    return (a*b) / UCLN(a, b);
}

int main ()
{
    int a, b;
    printf("Nhap vao tu ban phim 2 so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    printf("UCLN cua %d va %d la: %d\n", a, b, UCLN(a, b));
    printf("BCNN cua %d va %d la: %d\n", a, b, BCNN(a, b));
    return 0;
}
