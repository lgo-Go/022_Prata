/*Возвращает количество включенных битов в аргументе типа int*/

#include <stdio.h>

int included_bits(int dec);

int main(void)
{	printf("%i\n", included_bits(73));
	return 0;
}

int included_bits(int dec)
{
	int ost, n = 1 ,i = 0;
	char bin[n];
	int amount = 0;

	while(dec != 0)
	{
		ost = dec % 2;
		if(ost == 0)
			bin[i] = '0';
		else
			bin[i] = '1';
		dec = (dec - ost) / 2;
		n++;
		i++;
	}
	bin[n - 1] = '\0';

	for(int j = 0; j <= (n - 2); ++j)
	{
		if(bin[j] == '1')
			++amount;
	}

	return amount;
}