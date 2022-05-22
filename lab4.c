#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(void)
{	
	int m, n;

	scanf("%d %d", &n, &m);
	int** massive = (int**)malloc(n * sizeof(int*));
	printf("  ");
	for (int i = 0; i < max(n, m); i++)
	{
		printf("%c ", 'a' + i);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{	
		printf("%c ", 'a' + i);
		massive[i] = (int*)malloc(m * sizeof(int));
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &massive[i][j]);
		}
	}
	int k;
	scanf("%d", &k);
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < m; j++)
		{
			if (massive[i][j] != 0)
			{
				count++;
			}
		}
		if (k == count) printf("%c ",'a'+i);
	}
	return 0;
}
