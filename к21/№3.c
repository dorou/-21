#include <stdio.h>
#include <stdlib.h>

typedef struct matrix 
{
	float value;
	int i;
	int j;
	struct matrix *next;
}matr;

int main(void)
{
	return 0;
}

matrix *create_matrix(unsigned int n, unsigned int m)
{
	matrix * p_new_matrix = (matrix *)malloc(sizeof(matrix));
	for(int a= 1; a<= m; a++)
	{
		for(int b = 1; b<= n; b++)
		{
		matr elt;
		elt.value = 0;
		elt.i = k_1;
		elt.j = k;
		elt.next = elt.next->next;
		}
	}
	return p_new_matrix;
}