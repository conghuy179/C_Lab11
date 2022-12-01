#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int mang[n];
    int *ptr_mang = &mang;

    do
    {
        printf("Nhap vao so phan tu: \n");
        scanf("%d", &n);
    }
    while
    ( n <= 0);

    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: \n", i + 1);
        scanf("%d", (ptr_mang + i));
    }

    int max = *ptr_mang;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr_mang + i) > max)
        {
            max = *(ptr_mang + i);
        }
    }
    printf("So lon nhat trong chuoi la: %d\n", max);

    return 0;
}
