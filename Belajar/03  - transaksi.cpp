#include <iostream>
#include <conio.h>

struct barang
{
	char nama_barang[40];
	float harga, qty, sub_total, total, bayar, kembali;
};

float diskon_calc(int jml, int total)
{
	if(jml <= 10)
	{
		float disc10;
		disc10 = (10 * total)/100;
		return disc10;
	}
	else if(jml <= 20)
	{
		float disc20;
		disc20 = (20 * total)/100;
		return disc20;
	}
	else if(jml <= 30)
	{
		float disc30;
		disc30 = (30 * total)/100;
		return disc30;
	}
	else if(jml <= 40)
	{
		float disc40;
		disc40 = (40 * total)/100;
		return disc40;
	}
	else if(jml <= 50)
	{
		float disc50;
		disc50 = (50 * total)/100;
		return disc50;
	}
	else
	{
		float disc75;
		disc75 = (75 * total)/100;
		return disc75;
	}

}
float diskon(int jml, int total)
{
	if(jml <= 10)
	{
		float disc10;
		disc10 = (10 * total)/100;
		return printf("%.0f \n", disc10);
	}
	else if(jml <= 20)
	{
		float disc20;
		disc20 = (20 * total)/100;
		return printf("%.0f \n", disc20);
	}
	else if(jml <= 30)
	{
		float disc30;
		disc30 = (30 * total)/100;
		return printf("%.0f \n", disc30);
	}
	else if(jml <= 40)
	{
		float disc40;
		disc40 = (40 * total)/100;
		return printf("%.0f \n", disc40);
	}
	else if(jml <= 50)
	{
		float disc50;
		disc50 = (50 * total)/100;
		return printf("%.0f \n", disc50);
	}
	else
	{
		float disc75;
		disc75 = (75 * total)/100;
		return printf("%.0f \n", disc75);
	}

}
float hadiah(int jml)
{
	if(jml <= 100000)
	{
		return printf("Sendok Cantik");
	}
	else if(jml <= 300000)
	{
		return printf("Piring Cantik");
	}
	else
	{
		return printf("Kulkas Cantik");
	}
}

int pil_brg;

int transaksi()
{
	barang b[999];

	/* DATA LIST BARANG */
	strcpy(b[0].nama_barang, "Keyboard");
	b[0].harga = 75000;

	strcpy(b[1].nama_barang, "Mouse");
	b[1].harga = 45000;

	strcpy(b[2].nama_barang, "Flashdisk");
	b[2].harga = 95000;

	strcpy(b[3].nama_barang, "Monitor");
	b[3].harga = 750000;
	
	/* END DATA LIST BARANG */

	printf("List Barang : \n");
	for(int i=0; i<4; i++)
	{
		printf(" %d. %s \n", (i+1), b[i].nama_barang);
	}
	printf("Pilih barang : ");
	scanf(" %d", &pil_brg);

	int x = pil_brg - 1; // Menyesuaikan array mulai dari 0
	printf("\n >> Barang yang dipilih : \n");
	printf(" Nama barang  : %s \n", b[x].nama_barang);
	printf(" Harga        : Rp. %.0f \n", b[x].harga);
	printf(" Qty          : "); scanf(" %f", &b[x].qty);

	b[x].sub_total = b[x].harga * b[x].qty;
	printf(" Sub Total    : Rp. %.0f \n", b[x].sub_total);
	
	printf(" Diskon       : Rp. "); diskon(b[x].qty, b[x].sub_total);
	
	b[x].total = b[x].sub_total - diskon_calc(b[x].qty, b[x].sub_total);
	printf(" Total        : Rp. %.0f \n", b[x].total);
	
	printf(" Bayar        : Rp. "); scanf(" %f", & b[x].bayar);

	if(b[x].bayar < b[x].total)
	{
		printf(" >> Maaf uang tidak cukup, pembayaran tidak bisa di proses \n");
	}
	else
	{
		b[x].kembali = b[x].bayar - b[x].total;
		printf(" Kembalian    : Rp. %.0f \n", b[x].kembali);
		printf(" Hadiah       : "); hadiah(b[x].total);
	}

	return 0;
	system("pause");
}