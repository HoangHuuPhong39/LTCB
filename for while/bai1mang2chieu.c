#include<stdio.h>


int main ()
{
    int a[3][3], b, i, j;
    printf("Nhap vao truong hop ban muon chay: ");
    scanf("%d", &b);
    switch (b)
    {
    case 1 :
    {
        int a[3][3]= {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
        for ( i = 0; i < 3; i++)
        {
            for (  j = 0; j < 3; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
    }
    break;
    case 2 :
    {
        for ( i = 0; i < 3; i++)
        {
            for (  j = 0; j < 3; j++)
            {
                printf("Nhap vao phan tu o hang %d va cot %d: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
    }
    for ( i = 0; i < 3; i++)
        {
            for (  j = 0; j < 3; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
    break;
    default :
        printf("chi co 2 truong hop thoi! ");
        break;
    }
    return 0;
}
