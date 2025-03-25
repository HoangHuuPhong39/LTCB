#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y, k;
    printf("Nhap vao gia tri x va y: ");
    scanf("%f%f", &x, &y);
    k = pow (x, y);
    printf("Gia tri x^y la: %.3f", k);
    return 0;
}
