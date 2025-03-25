#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;
    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);
    int A[n], tong=0, t1=0, t2=0;

    printf("Nhap so nguyen: ");
    for (int i=0; i<n; i++){
        scanf("%d", &A[i]);
        tong += A[i];
        if (A[i]>0){
            t1 += A[i];
        }else t2 += A[i];
    }
    printf("Tong cua mang do la: %d\n", tong);
    printf("Tong cua cac so duong la: %d\n", t1);
    printf("Tong cua cac so âm la: %d\n", t2);
    printf("TBC cua mang do la: %.2f"\n, (float)tong/2);
    printf("TBC cua cac so duong la: %.2f\n", (float)t1/2);
    printf("TBC cua cac so am la: %.2f\n", (float)t2/2);
    return 0;

}
