#include<stdio.h>

int main()
{
	int d,e,f,c;
	scanf("%d",&d);
	while(d--)
	{
		scanf("%d",&e);
		scanf("%d",&f);
		scanf("%d",&c);
		
		if(c!=1)
		{
			e +=f;
			f=0;
			while((e -=c)>=0)
			{
				e++;
				f++;
			}
			
			printf("%d\n",f);
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}