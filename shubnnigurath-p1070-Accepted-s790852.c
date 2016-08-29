#include <stdio.h>

int main(){
	int dato,x;
	while(scanf("%d",&dato) !=EOF)
	{
		x = (dato)*(dato+1);
		printf("%d %d\n",(x*(2*dato+1))/6,(x*x)/4);
	}
	return 0;
}