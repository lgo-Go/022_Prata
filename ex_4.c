/*Проверяет включён бит в данной позиции или нет*/

#include <stdio.h>

int test_bite(int dec, int k);

int main(void)
{
	printf("%i\n", test_bite(73, 2));
	return 0;
}

int test_bite(int dec, int k)
{
	int ost, n = 1 ,i = 0;
	char bin[n];
	int value = 0;

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

	if(bin[k] == '1')
		++value;

	return value;

}