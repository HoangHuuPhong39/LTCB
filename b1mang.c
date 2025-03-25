#include <stdio.h>

int main()
{
    int i, n, S=0;
    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);
    int A[n];

    printf("Nhap vao so nguyen: ");
    for (i=1; i<=n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Day so vua nhap la: \n");
    for (i=1; i<=n ; i++)
    {
        printf(" %d", A[i]);
    }

    printf("\nDay so dao nguoc la: \n");
    for (i=n; i>0; i--)
    {
        printf(" %d", A[i]);
    }
    return 0;
}
