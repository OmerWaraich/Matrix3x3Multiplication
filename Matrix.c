#include <stdio.h>
void multiplyMatrix(int a[][3], int b[][3], int result[][3]);
void printMatrix(int a[][3]);
int main()
{
	int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	int result[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
	multiplyMatrix(matrix1, matrix2, result);
	printMatrix(result);
	return 1;
}

void multiplyMatrix(int a[][3], int b[][3], int result[][3])
{
	int i, j, k;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; ++k)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
void printMatrix(int a[][3])
{
	int i, j;
	for(i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%d \t", a[i][j] );
		}
		printf("\n");
	}
}
