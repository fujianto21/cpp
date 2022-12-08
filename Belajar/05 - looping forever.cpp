#include <iostream>
#include <conio.h>

int looping_forever(){

	int berapakaliya;
	char kata[100], cb;
	do
	{
		system("CLS");
		printf("\n");
		printf(" Masukan kata : ");
		scanf(" %[^\n]s", &kata);
		printf(" Jumlah Loop : ");
		scanf(" %d", &berapakaliya);
		
		if ( berapakaliya > 300 )
		{
			printf("\n \n  Jangan kebanyakan boss! ");
		}
		else
		{
			for(int i=0; i < berapakaliya; i++)
			{
				printf("\n >> %s \n", kata);
			}
		}

		printf("\n \n  Coba lagi (Y/N) : ");
		scanf(" %c", &cb);
	}while(cb == 'Y' || cb == 'y');;

	return 0;
	system("pause");
}