/* ALGORITMA DAN PEMOGRAMAN J081
   
   KELOMPOK 9
   1. Denis Lizard Sambawo Dimara (21081010159)
   2. Dzaru Rizky Fathan Fortuna  (21081010283)

   Modul 7 (Nomer 1)
   Nomer 4 - Dengan passing parameter
*/

#include <stdio.h>

void Pembelian(int harga, int jumlah)
{
    if (harga >= 500000 && jumlah > 5)
    {
        printf("Bonus Strika");
    }
    else if (harga >= 100000 && jumlah > 3)
    {
        printf("Bonus Payung");
    }
    else if (harga >= 50000 && jumlah > 2)
    {
        printf("Bonus Pena");
    }
    else
    {
        printf("Tidak mendapatkan bonus");
    }
}

int main()
{
    int harga, jumlah;
    printf("Masukan Total Harga Pembelian : Rp");
    scanf("%d", &harga);
    
    printf("Masukan Jumlah Barang         : ");
    scanf("%d", &jumlah);
    
    printf("\n"); Pembelian(harga, jumlah); printf("\n");
    
	printf("-------------------------------------------------------\n\n");
    printf("Terima kasih telah menggunakan program kami ^_^");
    return 0;
}
