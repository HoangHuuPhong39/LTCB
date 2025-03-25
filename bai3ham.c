#include <stdio.h>
#include <stdlib.h>

    double fibonaci(n){
        if (n==0 || n==1)
            return 1;
        return fibonaci ( n-1 ) + fibonaci ( n-2 );
    }

int main(){
    int n;
    printf("Nhap vao so thu n: ");
    scanf("%d", &n);
    printf("So thu %d trong day fibonaci la: %.2lf", n, fibonaci(n));
    return 0;
}
