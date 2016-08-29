#include <stdio.h>

int main()
{
	int variable,a,b;
	unsigned long long cont=0;
	scanf("%d",&variable);
	
	while(variable--)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		for(;a<=b;a++)
		{
			cont +=(a)*(a+1)*(a+2);
		}
		printf("%d\n",cont%100);
		cont =0;
	}
	return 0;
}