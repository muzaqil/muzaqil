#include <stdio.h>
int main()
{	int i, j, setir, sutun;
	scanf("%d%d", &setir, &sutun);
	for(i = 0; i < setir; i++)
	{
	 for(j = 0; j < sutun; j++) 
	 	if (i == 0 || j == 0 || i == setir-1 || j == sutun-1)
	  	printf("@ ");
	  else
	    printf("* ");
	printf("\n");
	  
	}
 return 0;
}

