#include <stdio.h>

int main ()
{
	int num_atual, soma;
	
	num_atual = 0;
	soma = 0;
	
	do
	{
		
		soma += num_atual;
		num_atual += 3;
		
	} while (num_atual <= 100);
	
	printf ("A soma dos multiplos de tres entre 0 e 100 e %d", soma);
	
	return 0;
}
