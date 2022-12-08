#include <iostream>

int struct_siswa_oo();
int struct_siswa_io();
char pil_sm;

int struct_siswa_main()
{
	menu_siswa:
	printf(" 1. Output Only \n");
	printf(" 2. Input Output \n");
	printf(" Masukan pilihan : ");
	scanf(" %c", &pil_sm);
	switch(pil_sm)
	{
	case '1':
		system("CLS");
		struct_siswa_oo();
		break;
	case '2':
		system("CLS");
		struct_siswa_io();
		break;
	default:
		printf("  >> Pilihan tidak ada");
		break;
	}

	printf("\n");
	return 0;
	system("pause");
}