#include<stdio.h>

struct banhang{
    int STT, Dongia, Soluong, Thanhtien, Tongtien;
    char TenHang[10];
};
typedef struct banhang banhang;

void hoandoi(banhang *a, banhang *b) {
    banhang temp = *a;
    *a = *b;
    *b = temp;
}
void sapxeptheoten(banhang a[], int n){
    for ( int i = 0; i < n - 1; i++){
        for ( int j = 0; j < n - i -1 ; j++){
            if(strcmp(a[j].TenHang, a[j+1].TenHang)>0){
                hoandoi(&a[j], &a[j+1]);
            }
        }
    }
}

int main (){
    int n, tong=0;
    printf("Nhap vao so luong hang ban duoc: ");
    scanf("%d", &n);
    banhang s[n];
    for ( int i = 0; i < n; i++){
        printf("Nhap vao thong tin san pham %d: \n", i+1);
        s[i].STT = i+1;
        printf("Nhap ten hang: ");
        scanf("%s",s[i].TenHang);
        printf("Nhap don gia: ");
        scanf("%d", &s[i].Dongia);
        printf("Nhap so luong: ");
        scanf("%d", &s[i].Soluong);
        s[i].Thanhtien = s[i].Dongia * s[i].Soluong;
        tong += s[i].Thanhtien;
    }

    sapxeptheoten(s, n);

    printf("-------------------SO LIEU BAN HANG-------------------\n");
    printf("%-5s %-15s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
    printf("------------------------------------------------------\n");
    for ( int i = 0; i < n; i++){
        printf("%-5d %-15s %-10d %-10d %-10d\n", s[i].STT, s[i].TenHang, s[i].Dongia, s[i].Soluong, s[i].Thanhtien);
        printf("\n");
    }
    printf("------------------------------------------------------\n");
    printf("%43s %d\n","Tong tien: " , tong);
    return 0;
}
