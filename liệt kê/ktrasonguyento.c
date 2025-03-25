#include<stdio.h>
#include<math.h>

int main (){
    int i, n=0, a;
    printf("Nhap so: ");
    scanf("%d", &a);
    if (a<2)
        return 0;
    for ( i=1; i<=a ; i++){
        if (a%i==0){
            n=n+1;
        }
    }
    if ( n==2 ) {
        printf("So %d la so nguyen to", a);
    }else {
        printf("So %d khong phai so nguyen to", a);
    }
    return 0;
}
