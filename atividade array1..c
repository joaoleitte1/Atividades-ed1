#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int x;
	int v[100];
	int cont=0;
	
	srand(time(NULL));
	
	do
	{
		printf("digite um numero\n");
		scanf(" %d", &x);   
		if (x > 0){
		for (int i = 0; i < 100; i++)
		{
			v[i]=1+rand()%20;
			printf("%d",v[i]);
			if (x == v[i])
			{
				cont++;
				printf("*");
				printf("\n");
				
			}
			printf("\n");
			
		}
			printf("o numero %d apareceu %d vezes\n",x,cont);
		
	}
		
	} while (x>0);
	
	

	
	return 0;
}

