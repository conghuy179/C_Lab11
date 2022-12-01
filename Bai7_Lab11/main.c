#include <stdio.h>
#include <stdlib.h>

int swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return a, b;
}

int main()
{
    int a = 1;
    int b = 3;
    printf("Truoc khi hoan doi:\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan doi:\na = %d\nb = %d\n", a, b);
    return 0;
}
