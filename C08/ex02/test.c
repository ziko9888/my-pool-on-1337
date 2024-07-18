#include <stdio.h>
#include "ft_abs.h"

int main()
{
	int i = -5;
	while(i < 5)
	{
		printf("without abs i = %d , with abs i = %d\n" , i , ABS(i));
		i++;
	}
}
