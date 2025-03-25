#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, n=2, i=2, gt=1;
    float S, k, Eps;
    printf("Nhap vao 2 gia tri x va Eps: ");
    scanf("%d%f", &x, &Eps);

        S = x;
        do {
        for (i=2; i<=n ; i++)
        {
            gt=gt*i;
            if (i%2!=0)
            {
                k = pow(x,i);
                gt = gt;
                if (((i-1)/2)%2!=0)
                {
                    S = S - k/gt;
                }
                else
                {
                    S = S + k/gt;
                }
            }
        }
        n++;
        } while ( k< Eps );
        printf("gia tri cua S la: %.3f\n", S);
    return 0;
}
