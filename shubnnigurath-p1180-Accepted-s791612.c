#include <stdio.h>

int set[] = {1, 1, 2, 2, 2, 8};
char found;

int main()
{
    int TC;
	char i;
    scanf("%d", &TC);
    while(TC--)
    {
		//los espacios los toma como saltos de linea por eso se puede hacer de 6
        for(i = 0; i < 6; i++){
            scanf("%d", &found);
            if(set[i] != found)
                printf("%d ", set[i] - found);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}