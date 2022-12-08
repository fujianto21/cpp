#include <iostream>
#include <conio.h>

//VARIABLE
	int bil;        // Bilangan
	char cb;        // Coba lagi


// GANJIL GENAP (GG)
void GG(int x)
{
	if(x == 0)
	{
		printf("   >> Bilangan yang di input adalah 0");
	}
	else
	{
		if(x % 2 == 0)
		{
			printf("  >> Bilangan Genap");
		}
		else
		{
			printf("  >> Bilangan Ganjil");
		}
	}
}

// NO GANJIL GENAP (NO_GG)
void NO_GG(int x)
{
	if(x >= 0)
	{
		printf("  >> Bilangan yang di input adalah ");
		printf("%d", x);
	}
	else
	{
		printf("  >> Bilangan Negatif yang di input adalah ");
		printf("%d", x);
	}
}

// MAIN
int if_else(){
	do
	{
		system("CLS");
		printf("\n");
		printf(" Masukan bilangan : ");
		scanf(" %d", &bil);
		
		if(bil < 0)
		{
			NO_GG(bil);
		}
		else if(bil <= 10)
		{
			GG(bil);
		}
		else if(bil <= 20)
		{
			NO_GG(bil);
		}
		else if(bil <= 30)
		{
			GG(bil);
		}
		else if(bil <= 40)
		{
			NO_GG(bil);
		}
		else if(bil <= 50)
		{
			GG(bil);
		}
		else if(bil <= 60)
		{
			NO_GG(bil);
		}
		else if(bil <= 70)
		{
			GG(bil);
		}
		else if(bil <= 80)
		{
			NO_GG(bil);
		}
		else if(bil <= 90)
		{
			GG(bil);
		}
		else if(bil <= 100)
		{
			NO_GG(bil);
		}
		else if(bil > 100)
		{
			GG(bil);
		}
	
		printf("\n \n  Coba lagi (Y/N) : ");
		scanf(" %c", &cb);
	}while(cb == 'Y' || cb == 'y');

	printf("\n");
	return 0;
	system("pause");
}