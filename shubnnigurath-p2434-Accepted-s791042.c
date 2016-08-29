#include <stdio.h>


int main(){
	long long primos [] = {1,2,3,1,5,1,7,1,1,1,11,1,13,1,1,1,17,1,19,1,1,1,23,1,1,1,1,1,29,1,31,1,1,1,1,1,37,1,1,1,41,1,43,1,1,1,47,1,1,1};
	int dato=1;
	char cont;
	
	for(cont =1;cont<50;cont++)
	{
		primos[cont] *=primos[cont-1];
	}

	while(1)
	{
		scanf("%d",&dato);
		if(dato !=0)
		{
			printf("%lld\n",primos[dato-1]);
		}else{
			return 0;
		}
	}
	return 0;
}