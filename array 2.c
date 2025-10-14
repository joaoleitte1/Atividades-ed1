#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	
	float n;
	int v[6];
	int c1=0;
	int c2=0;
	int c3=0;
	int c4=0;
	int c5=0;
	int c6=0;
	
	srand(time(NULL));
	
	printf("quantas vezes deseja jogar o dado\n");
	scanf(" %f",&n);
	
	for (int i = 0; i < n; i++)
	{
		v[i]=1+rand()%6;
		
		if (v[i]==1)
		{
			c1++;
		}
		if (v[i]==2)
		{
			c2++;
		}
		if (v[i]==3)
		{
			
			c3++;
		}
		if (v[i]==4)
		{
			c4++;
		}
		if (v[i]==5)
		{
			c5++;
		}
		if (v[i]==6)
		{
			c6++;
			
	
		}	
	}
	
		printf("o numero 1 apareceu %d\n",c1);
			printf("a porcentagen de vezes que o numero 1 caiu foi %.2f%%\n",(float)(c1/n)*100);
			
		printf("o numero 2 apareceu %d\n",c2);
			printf("a porcentagen de vezes que o numero 2 caiu foi %.2f%%\n",(float)(c2/n)*100);

		printf("o numero 3 apareceu %d\n",c3);
			printf("a porcentagen de vezes que o numero 3 caiu foi %.2f%%\n",(float)(c3/n)*100);

		printf("o numero 4 apareceu %d\n",c4);
			printf("a porcentagen de vezes que o numero 4 caiu foi %.2f%%\n",(float)(c4/n)*100);

		printf("o numero 5 apareceu %d\n",c5);
			printf("a porcentagen de vezes que o numero 5 caiu foi %.2f%%\n",(float)(c5/n)*100);

		printf("o numero 6 apareceu %d\n",c6);
			printf("a porcentagen de vezes que o numero 6 caiu foi %.2f%%\n",(float)(c6/n)*100);

		
		
	
	
	return 0;
}

