#include <stdio.h>

int main(){
    int n, gt=1, i=1;
    float S=0;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);
    while(i<=n){
        gt = gt * i;
        S = S + (float)1/gt;
        i++;
    }
    printf("Gia tri cua S la: %.2f", S);
    return 0;
}
