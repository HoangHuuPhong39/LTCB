#include <stdio.h>

int main (){
    int t, n;
    printf("nhap thang va nam: ");
    scanf("%d%d", &t, &n);
    for (t=1; t<=12, t++){
        if (t=2){
            if (n % 400 == 0){}
            printf("thang %d nam %d co 28 ngay");
        }else printf("thang %d nam %d co 29 ngay");
        if ((t=4)||(t=6)){
            if ((t=9)||(t=11)){
                printf("thang %d nam %d co 30 ngay");
            }
            else printf("thang %d nam %d co 31 ngay");
        }
    }
    return 0;
}
