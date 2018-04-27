/*Демонстрация ~, &, |, ^*/

#include <stdio.h>
#include <math.h>

void logical_operations(char bin_1[], char bin_2[]);
int perevod(char bin[]);

int main(void)
{
	logical_operations("00000001", "00000011");
	return 0;
}

void logical_operations(char bin_1[], char bin_2[])
{
	int dec_1 = perevod(bin_1);
	int dec_2 = perevod(bin_2);
	printf("~: %i\n   %i\n", ~dec_1, ~dec_2);
	printf("&: %i\n", dec_1 & dec_2);
	printf("&: %i\n", dec_1 | dec_2);
	printf("&: %i\n", dec_1 ^ dec_2);
}

int perevod(char bin[])
{
	int dec;
	int bin_i[8];

	for(int i = 0; i <= 7; ++i)
	{
		if(bin[i] == '1')
			bin_i[i] = 1;
		else bin_i[i] = 0;
	}

	dec = bin_i[0] * pow(2,7) + bin_i[1] * pow(2,6)
		+ bin_i[2] * pow(2,5) + bin_i[3] * pow(2,4)
		+ bin_i[4] * pow(2,3) + bin_i[5] * pow(2,2)
		+ bin_i[6] * pow(2,1) + bin_i[7] * pow(2,0);

	return dec;
}