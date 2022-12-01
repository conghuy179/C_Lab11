#include <stdio.h>
#include <stdlib.h>

void findFact (int n, int *f)
{
    int i;
    *f = 1;

    for (i = 1; i <= n; i++)
    {
        *f = *f * i;
    }
}

int main()
{
    int nhapso;
    printf("Nhap so: \n");
    scanf("%d", &nhapso);


    int tinhgiaithua;
    findFact(nhapso,&tinhgiaithua);

    printf("Giai thua cua so %d la: %d\n", nhapso, tinhgiaithua);
    return 0;
}
