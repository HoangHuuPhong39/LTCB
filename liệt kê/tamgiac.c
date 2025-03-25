#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, Chuvi, S, p;
    printf("Nhap vao 3 gia tri can xet: ");
    scanf("%f%f%f", &a, &b, &c);
    if( (a+b>c) && (a+c)>b &&(b+c)>a )
    {
        printf("Day la do dai 3 canh cua 1 tam giac\n");
        if ( a==b && b==c)
        {
            printf("tam giac deu\n");
        }
        else if ( a==b || b==c || c==a)
        {
            if( a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b )
            {
                printf("tam giac vuong can\n");
            }
            else
            {
                printf("tam giac can\n");
            }
        }
        else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            printf("tam giac vuong\n");
        }else {printf("tam giac thuong\n");}
        Chuvi = a+b+c;
        p=Chuvi/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Chu vi cua tam giac do la: %.2f\n", Chuvi);
        printf("Dien tich cua tam giac do la: %.2f\n", S);
    }
    else printf("Day khong phai do dai 3 canh cua 1 tam giac\n");
    return 0;
}
