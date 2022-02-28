#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
    int y;
    int mass_two[3], mass_ten[3];
    for(int i=0;i<3;i++)
    {   
        int num, res=0, count=0;
        y = scanf("%d", &num);
        y;
        if (y !=1)
        {
            printf("Vvedite chislo\n");
            return 1;
        }
        mass_two[i] = num;
        for (;num != 0;num = num / 10)
        {   
            res = res + num % 10 * pow(2, count);
            count++;
        }
        mass_ten[i] = res;
    }
    for (int i = 0; i < 3; i++) { printf("%d ", mass_two[i]); }
    printf("\n");
    for (int i = 0; i < 3; i++) { printf("%d ", mass_ten[i]); }
    return 0;
}
