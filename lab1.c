#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{ int k;
  scanf("%d", &k);
    int y;
    int mass_two[k], mass_ten[k];
    for(int i=0;i<k;i++)
    {   
        int num, res=0, count=0;
         y=scanf("%d", &num);
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
    for (int i = 0; i < k; i++) { printf("%d ", mass_two[i]); }
    printf("\n");
    for (int i = 0; i < k; i++) { printf("%d ", mass_ten[i]); }
    return 0;
}
