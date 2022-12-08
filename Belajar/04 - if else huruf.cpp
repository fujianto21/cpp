#include <iostream>
#include <conio.h>

int if_else_huruf(){

	char huruf, cb;
	do
	{
		system("CLS");
		printf("\n");
		printf(" Masukan huruf : ");
		scanf(" %c", &huruf);

		if(huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O' ||
		   huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o')
		{
			printf("\n >> Huruf Vokal");
		}
		else
		{
			printf("\n >> Huruf Konsongan");
		}
		
		printf("\n \n  Coba lagi (Y/N) : ");
		scanf(" %c", &cb);
	}while(cb == 'Y' || cb == 'y');

	return 0;
	system("pause");
}