#include<stdio.h>

void hoandoi(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;
    printf("Nhap vao 2 gia tri nguyen cua a va b: ");
    scanf("%d%d", &a, &b);
    hoandoi(&a, &b);
    printf("Gia tri sau khi hoan doi a=%d va b=%d ", a, b);
    return 0;
}
