#include <stdio.h>

int main()
{
    char name[50];
    //Mendeklarasikan sebuah variable
    int qty_buku, qty_bulpen, qty_pensil, qty_penghapus, qty_kotakpensil; // deklarasi variable untuk qty per barang
    int ttl_buku, ttl_bulpen, ttl_pensil, ttl_penghapus, ttl_kotakpensil; // deklarasi variable untuk total per item
    int grand_total;
	
	//Tampilan Awal Gunakan Printf sebagai output
    printf("--------------------------------------- \n");
    printf("== SELAMAT DATANG DI STATIONERY STORE == \n");
    printf("--------------------------------------- \n");

	//Input dari  User
    printf("Masukkan Nama Anda : ");
    fgets(name, 50, stdin); // isi variabel name

    printf("\nHai Selamat Datang %s\n", name);
    printf("Daftar pemesanan (0 jika tidak ingin memesan) :\n");

    printf("Buku \t\t Rp. 5.000  \t: ");
    scanf("%d", &qty_buku);

    printf("Bulpen \t\t Rp. 2.000 \t: ");
    scanf("%d", &qty_bulpen);

    printf("Pensil \t\t Rp. 1000 \t: ");
    scanf("%d", &qty_pensil);

    printf("Penghapus \t Rp. 500 \t: ");
    scanf("%d", &qty_penghapus);

    printf("Kotak Pensil \t Rp. 10.000 \t: ");
    scanf("%d", &qty_kotakpensil);

    printf("\n\n ----------  Rincian Pembelian Anda ---------------\n");
	
	//Menginisialisasi value variable
    ttl_buku = 5000 * qty_buku;
    ttl_bulpen = 2000 * qty_bulpen;
    ttl_pensil = 1000 * qty_pensil;
    ttl_penghapus = 500 * qty_penghapus;
    ttl_kotakpensil = 10000 * qty_kotakpensil;

    grand_total = ttl_buku + ttl_pensil + ttl_bulpen + ttl_penghapus + ttl_kotakpensil;

	//Tampilan Akhir 
	
    printf("Buku\t\t\t: %d = Rp. %d \n", qty_buku, ttl_buku);
    printf("Bulpen\t\t\t: %d = Rp. %d \n", qty_bulpen, ttl_bulpen);
    printf("Pensil\t\t\t: %d = Rp. %d \n", qty_pensil, ttl_pensil);
    printf("Penghapus\t\t: %d = Rp. %d \n", qty_penghapus, ttl_penghapus);
    printf("Kotak Pensil\t\t: %d = Rp. %d \n", qty_kotakpensil, ttl_kotakpensil);

    printf("\nTotal Pembelian \t: Rp. %d\n\n", grand_total);
    printf("Terima kasih telah berbelanja di Toko Kami.....\n");
    
    system("pause");

    return 0;
}
