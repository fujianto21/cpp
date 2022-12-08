#include <iostream>
#include <conio.h>

// ex:  br(1) = \n 1x 
//      br(2) = \n 2x
void br(int x)
{		
		for(int i=0; i<x; i++)
		{
			printf("\n");
		}
}

// MtoJ  = Ubah Menit ke Jam
float MtoJ(int a)
{
// MtoJ = a/b

	int b = 60; // 1 jam = 60 menit

	// jika tidak ada lebihan menit dalam setiap jam
	if(a % b == 0) // ex: 120/60 = 2 jam
	{
		int h = a/b;
		return printf(" %d JAM \n", h);
	}
	// jika ada lebihan menit dalam setiap jam
	else
	{
		// mencari fpb dari a dan b
		int fpb;
		int x = a; // a jadi x
		int y = b; // b jadi y
		fpb = x % y;
		while(fpb != 0)
		{
			x = y;
			y = fpb;
			fpb = x % y;
		}
		// hasil fpb = y

		// ex : user input 70 menit
		// ar/br , ex : 70/60
		// fpb : 5
		int a_r = a / y; // 70/5
		int b_r = b / y; // 60/5

		//ex result : ar/br = 14/12

		// jika a_r lebih besar dari b_r
		if(a_r > b_r)
		{
			//ex : 3 1/2  || 3 = left_r, 1 = up_r, 2 = down_r
			int left_r, up_r, down_r, menit_r;
			up_r = a_r % b_r;  // 14 mod 12 = 2
			left_r = (a_r - up_r) / b_r;  // (14 - 2) / 12 = 1 (jam)
			down_r = b_r; // down_r = 12
			menit_r = (up_r * b) / down_r; // (2 * 60) / 12 = 10 (menit)

			//hasil akhir dari input 70 menit ==> menjadi 1 jam 10 menit
			return printf("%d JAM %d MENIT \n", left_r, menit_r);
		}

		// jika a_r lebih kecil dari b_r, ex : 1/2, maka langsung 1/2 jam
		else
		{
			return printf("%d/%d JAM \n", a_r, b_r);
		}
	}
}

struct siswa
{
	char id[4], nama[20];
	float jarak, waktu_tempuh, kecepatan; // jarak = KM, waktu_tempuh = Menit, kecepetan = KM/JAM
};

// MAIN
int struct_siswa_oo(){
	siswa s[3];
	char siswa_tercepat[20];
	char siswa_terlama[20];

	strcpy(s[0].id, "0221");
	strcpy(s[0].nama, "FUJIANTO");
	s[0].jarak = 21; 
	s[0].waktu_tempuh = 130; 

	strcpy(s[1].id, "1104");
	strcpy(s[1].nama, "FA");
	s[1].jarak = 1200; 
	s[1].waktu_tempuh = 100;

	strcpy(s[2].id, "0212");
	strcpy(s[2].nama, "DEV");
	s[2].jarak = 40; 
	s[2].waktu_tempuh = 210;
	
	printf("\n>> Output  Struct Siswa : \n");
	for(int i=0; i<3; i++)
	{
		s[i].kecepatan = s[i].jarak / (s[i].waktu_tempuh / 60 );

		printf(" ID            : %.4s", s[i].id);
		br(1);
		printf(" Nama          : %s", s[i].nama);
		br(1);
		printf(" Jarak         : %.0f", s[i].jarak);
		printf(" KM \n");
		printf(" Waktu Tempuh  : %.0f", s[i].waktu_tempuh);
		printf(" MENIT \n");

		float wkt_tmph = s[i].waktu_tempuh;
		printf(" Waktu Tempuh  : "); MtoJ(wkt_tmph);
		printf(" Kecepatan     : %.0f", s[i].kecepatan);
		printf(" KM/JAM \n");
		br(1);

	}

	//VARIBALE
	float min_kcpt, 
		  max_kcpt, 
		  min_jrk, 
		  max_jrk;
	min_kcpt = s[0].kecepatan;
	max_kcpt = s[0].kecepatan;
	min_jrk = s[0].jarak;
	max_jrk = s[0].jarak;
	strcpy(siswa_tercepat, s[0].nama);
	strcpy(siswa_terlama, s[0].nama);


	for(int i= 0; i < 3; i++)
	{
		//MIN MAX KECEPATAN
		if(s[i].kecepatan < min_kcpt)
		{
			min_kcpt = s[i].kecepatan;
			strcpy(siswa_terlama, s[i].nama);
		}
		else if(s[i].kecepatan > max_kcpt)
		{
			max_kcpt = s[i].kecepatan;
			strcpy(siswa_tercepat, s[i].nama);
		}

		//MIN MAX JARAK
		if(s[i].jarak < min_jrk)
		{
			min_jrk = s[i].jarak;
		}
		else if(s[i].jarak > max_jrk)
		{
			max_jrk = s[i].jarak;
		}

	}

	printf(">> Kesimpulan : \n");
	printf(" Kecepatan Tercepat  : %.0f ", max_kcpt); printf(" KM/JAM \n");
	printf(" Kecepatan Terlama   : %.0f ", min_kcpt); printf(" KM/JAM \n");
	br(1);
	printf(" Jarak Terdekat      : %.0f ", min_jrk); printf(" KM \n");
	printf(" Jarak Terjauh       : %.0f ", max_jrk); printf(" KM \n"); 
	br(1);
	printf(" Siswa Tercepat      : %s ", siswa_tercepat); br(1);
	printf(" Siswa Terlama       : %s ", siswa_terlama); br(1);
	return 0;
	system("pause");
}