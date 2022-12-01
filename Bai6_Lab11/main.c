#include <stdio.h>
#include <stdlib.h>

int add(int *a, int *b)
{

    return (*a + *b);

}

int main()
{
    int a = 10;
    int b = 7;
    int result = add(&a,&b);

    printf("%d\n", result);
    return 0;
}
