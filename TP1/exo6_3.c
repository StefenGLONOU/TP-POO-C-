#include <stdio.h>

int main()
{
	int x = 0, y = 100;

	while (x*x <= y)
	{
		x+=1;
	}
	printf("L'instruction x+=1 est exécutée 4 fois\n");
	return 0;
}
