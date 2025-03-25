#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e, f, x, y;
    printf("nhap vao cac he so thuc: ");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    if ( d==0){
    y = (d*c - f*a)/(d*b-a*e);
    x = (c - b*y)/a;
    }
    else {
    y = (d*c - f*a)/(d*b-a*e);
    x = (f - e*y)/d;
    }
    printf(" nghiem cua he phuong trinh la (%f; %f)", x, y);
    return 0;
}
