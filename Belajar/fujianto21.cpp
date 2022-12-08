// fujianto21.com : Defines the entry point for the console application.
// Bismillah
// Program C++ Sederhana yang berhubungan dengan Array, Struct, Condition, Looping, Switch Case, Dll.
// Cilegon, 19 Juni 2020
#include <iostream>

int main();     // main.cpp
int if_else();
int struct_siswa_main();
int transaksi();
int transaksi2();
int if_else_huruf();
int looping_forever();

char pil;
char mn_utm;    // Pilihan Menu Utama

// KEMBALI KE MENU UTAMA
void home()
{
	printf("\n \n  Kembali ke Menu Utama (Y/N) : ");
	scanf(" %c", &mn_utm);
	if(mn_utm == 'Y' || mn_utm == 'y')
	{
		system("CLS");
		main();
	}
	else
	{
	    printf("\n  >> Terimakasih :)\n     fujianto21.com");
	}
}

// MAIN
int main()
{
	menu:
	printf(" 1. IF ELSE \n");
	printf(" 2. Struct Siswa \n");
	printf(" 3. Transaksi \n");
	printf(" 4. Huruf \n");
	printf(" 5. Loop \n");
	printf(" Masukan pilihan : ");
	scanf("%s", &pil);
	switch(pil)
	{
	case '1':
		system("CLS");
		if_else();
		home();
		break;
	case '2':
		system("CLS");
		struct_siswa_main();
		home();
		break;
	case '3':
		system("CLS");
		transaksi();
		home();
		break;
	case '4':
		system("CLS");
		if_else_huruf();
		home();
		break;
	case '5':
		system("CLS");
		looping_forever();
		home();
		break;
	default:
		printf("  >> Pilihan tidak ada");
		home();
		break;
	}

	printf("\n");
	system("pause");
}

