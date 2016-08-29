#include <stdio.h>

int main(){
	int cont,numero,chamacos,dulces,res=0;
	scanf("%d",&numero);
	//printf("\n");
	while(numero--){
		scanf("%d",&chamacos);
		for(cont=0;cont<chamacos;cont++)
		{
			scanf("%d",&dulces);
			res += dulces;
			
		}
		//printf("%d\n",res);
		if (res%chamacos == 0)
			printf("YES\n");
		else
			printf("NO\n");
		
		res=0;
	}
	return 0;

}