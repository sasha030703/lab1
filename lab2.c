#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <malloc.h>

void PrintNames(int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%c;\n", 'a' + i);
	}
}
int main(void)
{
	int N, M;
	setlocale(0, "ru");
	printf("Введите размер матрицы\n");
	scanf("%d %d", &N, &M);
	int **Massive;
	Massive = (int**)malloc(N * sizeof(int*));
	for (int i = 0; i < N; i++)
	{
		Massive[i]=(int*)malloc(M*sizeof(int));
	}
	printf("Введите матрицу\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d",&Massive[i][j]);
		}
	}
	printf("Вывод полученного графа\n");
	if (N >= M) PrintNames(N);
	else PrintNames(M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (Massive[i][j] == 1)
			{
				printf("%c -> %c\n", 'a' + i, 'a' + j);
			}
		}
	}
	return 0;
}
