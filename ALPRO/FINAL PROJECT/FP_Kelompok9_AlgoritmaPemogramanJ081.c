

#include <stdio.h>
#include <windows.h>

// Call

// Fungsi tanpa kembalian
void dekorasi1()
{
	printf("------------------------------------------------------------------ \n");
}
void dekorasi2()
{
	printf("=============================== \n");
}
void dekorasi3()
{
	printf("================================================================== \n\n");
}
void inputuang()
{
	printf("Masukkan jumlah uang : ");
}
void cekuang()
{
	printf("Jumlah uang yang Anda ");
}
void cekstatus()
{
	printf("Apakah sudah benar [Y/N]? ");
}
void berhasil()
{
	printf("Proses telah berhasil \n");
}
void salah()
{
	printf("Sesi Anda telah berakhir, masukkan kembali PIN Anda \n");
}
void ceksaldo()
{
	printf("Apakah Anda ingin mengecek saldo [Y/N]? ");
}
void inputrek()
{
	printf("Masukkan nomer rekening : ");
}
void invalidrek()
{
	printf("Nomor rekening tidak ada atau belum terdaftar \n");
}
void jumsaldo(int a)
{
	printf("Jumlah saldo Anda sekarang Rp%d", a);
}
void ulangprogram()
{
	printf("Apakah Anda ingin mengulang program [Y/N]? ");
}

// Fungsi dengan kembalian
long int transferA(long int a, long int b)
{
	a = a + b;

	return a;
}
long int transferB(long int a, long int b)
{
	a = a - b;

	return a;
}
long int transferC(long int a, long int b)
{
	a = a - b - 5000;

	return a;
}

// Deklarasi struct
struct datanasabah
{
	char *nama;
	char *bank;
	int norek;
	long int saldo;
};

int main()
{
	// Deklarasi variabel pada macam2 tipe data
	int cekpin, loop, pilayanan, piltransfer, norek, pilbank;
	long int jumtarik, jumsetor, jumtransfer;
	char validasi, infosaldo, valtransfer;

	// Deklarasi variabel pada fungsi struct
	struct datanasabah dn1, dn2, dn3, dn4;

	// Database Nasabah
	dn1.nama = "Rizky Fortuna";
	dn1.bank = "BNI";
	dn1.norek = 2102830000;
	dn1.saldo = 2500000;

	dn2.nama = "Rudi Budiman";
	dn2.bank = "BCA";
	dn2.norek = 2101590000;
	dn2.saldo = 5500000;

	dn3.nama = "Universitas Kita Bersama";
	dn3.bank = "BNI";
	dn3.norek = 1071590000;
	dn3.saldo = 10000000;

	dn4.nama = "Dennis Ritchie";
	dn4.bank = "BRI";
	dn4.norek = 102008070;
	dn4.saldo = 0;

	// Mengubah warna tampilan command prompt
	system("color F1");

// Fungsi nantinya untuk program kembali ke awal
ulang:

	// Judul Program
	dekorasi1();
	printf("|\t\t ANJUNGAN TUNAI MANDIRI SEDERHANA                |\n");
	dekorasi1();

	// For Loop ---- > Kesempatan memasukkan PIN Nasabah
	for (loop = 3; loop > 0; loop--)
	{
		printf("\n");
		printf("Masukkan PIN Anda : ");
		scanf("%d", &cekpin);

		// IF Else -----> Nasabah hanya dapat memasukkan PIN dengan jumlah 6 digit angka
		if (cekpin > 999999 || cekpin < 100000)
		{
			if (loop == 1)
			{
				// Jika nasabah salah memasukkan PIN sebanyak 3 kali maka program memblokir kartu ATM Nasabah
				goto blokir;
			}
			printf("Nomor PIN terdiri dari 6 digit \n");
		}
		else
		{
			if (cekpin == 123456)
			{
				//  Jika PIN benar maka pengulangan berhenti
				break;
			}
			else
			{
				if (loop == 1)
				{
				blokir:
					// Jika nasabah salah memasukkan PIN sebanyak 3 kali maka program memblokir kartu ATM Nasabah
					dekorasi1();
					printf("\a\n");
					printf("Kartu ATM Anda terblokir \n");
					printf("Silahkan hubungi call center kami");
					exit(0);
				}
				else
				{
					// Jika PIN salah maka program memberikan kesempatan 3 kali
					printf("Sisa kesempatan Anda mencoba %d kali lagi \n", loop - 1);
				}
			}
		}
	}

	dekorasi1();
	printf("\n");
	printf("Selamat datang Nasabah ^_^ \n");
	dekorasi1();
	printf("\n");

	// Fitur - Fitur Layanan ATM
	printf("Menu Pilihan Layanan \n");
	dekorasi2();
	printf("1. Setor tunai \n");
	printf("2. Tarik tunai \n");
	printf("3. Transfer uang \n");
	printf("4. Informasi saldo \n");
	dekorasi2();
	printf("\n");
	printf("Pilihan Layanan : ");
	scanf("%d", &pilayanan);
	dekorasi1();

	// Setor Tunai
	if (pilayanan == 1)
	{
		// For Loop ---- > Kesempatan memasukkan jumlah nominal uang
		for (loop = 1; loop < 4; loop++)
		{
			inputuang();
			scanf("%d", &jumsetor);
			printf("\a \n");
			// Mengeluarkan jumlah nominal uang yang akan disetorkan
			cekuang();
			printf("setor Rp%d \n\n", jumsetor);

			cekstatus();
			scanf("%c %c", &validasi, &validasi);
			dekorasi1();

			// If --- > Memastikan apakah jumlah uang yang disetor nominalnya sudah benar apa belum
			if (validasi == 'y' || validasi == 'Y')
			{
				// jika nominal setor uang sudah benar maka pengulangan berhenti
				berhasil();
				break;
			}

			// If ---> Jika nasabah salah memasukkan nominal uang yang akan disetor sebanyak 3 kali
			if (loop == 3)
			{
				printf("\n");
				salah();
				dekorasi3();
				// Program mengulang dari awal
				goto ulang;
			}
		}

		printf("\n");
		ceksaldo();
		scanf("%c %c", &infosaldo, &infosaldo);

		// If ----> Memberikan kesempatan pada nasabah untuk melihat jumlah saldo pada rekeningnya setelah menyetorkan uang
		if (infosaldo == 'Y' || infosaldo == 'y')
		{
			printf("\n");
			dekorasi1();
			printf("\a");
			// Memanggil fungsi dengan kembalian untuk menghitung pada rumus yang telah ditetapkan
			jumsaldo(transferA(dn3.saldo, jumsetor));
			printf("\n");
		}
	}

	// Tarik Tunai
	else if (pilayanan == 2)
	{
		for (loop = 1; loop < 4; loop++)
		{
			inputuang();
			scanf("%d", &jumtarik);
			printf("\a \n");
			// Mengeluarkan jumlah nominal uang yang akan ditarik
			cekuang();
			printf("tarik Rp%d \n\n", jumtarik);
			cekstatus();
			scanf("%c %c", &validasi, &validasi);
			dekorasi1();

			// If --- > Memastikan apakah jumlah uang yang ditarik nominalnya sudah benar apa belum
			if (validasi == 'Y' || validasi == 'y')
			{
				// jika nominal tarik uang sudah benar maka pengulangan berhenti
				berhasil();
				break;
			}

			// Jika nasabah salah memasukkan nominal uang yang akan ditarik sebanyak 3 kali
			if (loop == 3)
			{
				printf("\n");
				salah();
				dekorasi3();
				// Program mengulang dari awal
				goto ulang;
			}
		}
		printf("\n");
		ceksaldo();
		scanf("%c %c", &infosaldo, &infosaldo);

		// If ----> Memberikan kesempatan pada nasabah untuk melihat jumlah saldo pada rekeningnya setelah menarik uang
		if (infosaldo == 'Y' || infosaldo == 'y')
		{
			printf("\n");
			dekorasi1();
			printf("\a");
			// Memanggil fungsi dengan kembalian untuk menghitung pada rumus yang telah ditetapkan
			jumsaldo(transferB(dn3.saldo, jumtarik));
			printf("\n");
		}
	}

	// Transfer Uang
	else if (pilayanan == 3)
	{
		// Fitur - Fitur untuk layanan Transfer
		printf("\n");
		printf("Pilihan Menu Transfer \n");
		dekorasi2();
		printf("1. Transfer sesama bank \n");
		printf("2. Transfer antar bank \n");
		dekorasi2();
		printf("\n");
		printf("Pilihan transfer : ");
		scanf("%d", &piltransfer);

		// Transfer sesama bank
		if (piltransfer == 1)
		{
		verRek1:
			dekorasi1();
			printf("\n");
			inputrek();
			scanf("%d", &norek);

			// If Else ----> mengecek nomor rekening yang akan ditransfer, apakah ada atau tidak?
			if (norek == dn1.norek)
			{
				printf("\n");
				// Mengeluarkan profil nasabah yang akan ditransfer
				printf("%s - %d - %s \n\n", dn1.bank, dn1.norek, dn1.nama);
				cekstatus();
				scanf("%c %c", &valtransfer, &valtransfer);

				// If -----> Jika profil nasabah yang keluar tidak sesuai tujuan yang akan ditransfer
				if (valtransfer != 'y' && valtransfer != 'Y')
				{
					// Kembali ke fungsi verRek1 agar nasabah dapat menginputkan nomor rekening kembali
					goto verRek1;
				}

				// For Loop ---- > Kesempatan memasukkan jumlah nominal uang
				for (loop = 1; loop < 4; loop++)
				{
					dekorasi1();
					printf("\n");
					inputuang();
					scanf("%d", &jumtransfer);
					printf("\n");
					// Mengeluarkan jumlah nominal uang nasabah yang akan ditransfer
					cekuang();
					printf("transfer Rp%d \n\n", jumtransfer);

					cekstatus();
					scanf("%c %c", &validasi, &validasi);

					// If --- > Memastikan apakah jumlah uang yang dimasukkan nominalnya sudah benar apa belum
					if (validasi == 'Y' || validasi == 'y')
					{
						dekorasi1();
						berhasil();

						// jika nominal transfer uang sudah benar maka pengulangan berhenti
						break;
					}

					// Jika Nasabah salah memasukkan nominal uang yang akan ditransfer sebanyak 3 kali
					if (loop == 3)
					{
						dekorasi1();
						printf("\n");
						salah();
						dekorasi3();
						// Program mengulang dari awal
						goto ulang;
					}
				}
				printf("\n");
				ceksaldo();
				scanf("%c %c", &infosaldo, &infosaldo);

				// If ----> Memberikan kesempatan pada nasabah untuk melihat jumlah saldo pada rekeningnya setelah melakukan transfer
				if (infosaldo == 'Y' || infosaldo == 'y')
				{
					printf("\n");
					dekorasi1();
					printf("\a");
					// Memanggil fungsi dengan kembalian untuk menghitung pada rumus yang telah ditetapkan
					jumsaldo(transferB(dn3.saldo, jumtransfer));
					printf("\n");
				}
			}
			// Jika nomer rekening yang dimasukkan tidak ada pada program
			else
			{
				printf("\n");
				invalidrek();
				goto verRek1;
			}
		}

		// Transfer antar bank
		else if (piltransfer == 2)
		{
			// Pilihan Bank
			dekorasi1();
			printf("\n");
			printf("Daftar Pilihan Bank \n");
			dekorasi2();
			printf("1. BCA \n");
			printf("2. BRI \n");
			dekorasi2();
			printf("\n");
			printf("Pilihan bank : ");
			scanf("%d", &pilbank);

			if (pilbank == 1 || pilbank == 2)
			{
			verRek2:
				dekorasi1();
				printf("\n");
				inputrek();
				scanf("%d", &norek);

				// Jika nasabah memasukkan nomor rekening benar (BCA/BRI)
				if (norek == dn2.norek || norek == dn4.norek)
				{
					printf("\n");

					// Nomor Rekening BCA
					if (pilbank == 1 && norek == dn2.norek)
					{
						printf("%s - %d - %s", dn2.bank, dn2.norek, dn2.nama);
					}
					// Nomor Rekening BRI
					else if (pilbank == 2 && norek == dn4.norek)
					{
						printf("%s - %d - %s", dn4.bank, dn4.norek, dn4.nama);
					}
					// Jika nasabah memasukkan nomor rekening tidak sesuai pada asal banknya
					else
					{
						invalidrek();
						goto verRek2;
					}

					printf("\n\n");
					cekstatus();
					scanf("%c %c", &valtransfer, &valtransfer);

					// If -----> Jika profil nasabah yang keluar tidak sesuai tujuan yang akan ditranfer
					if (valtransfer != 'y' && valtransfer != 'Y')
					{
						// Kembali ke fungsi verRek2 agar nasabah dapat menginputkan nomor rekening kembali
						goto verRek2;
					}

					// For Loop ---- > Kesempatan memasukkan jumlah nominal uang
					for (loop = 1; loop < 4; loop++)
					{
						dekorasi1();
						printf("\n");
						inputuang();
						scanf("%d", &jumtransfer);
						printf("\n");
						// Mengeluarkan jumlah nominal uang nasabah yang akan ditransfer
						cekuang();
						printf("transfer Rp%d \n\n", jumtransfer);

						cekstatus();
						scanf("%c %c", &validasi, &validasi);

						// If --- > Memastikan apakah jumlah uang yang ditransfer nominalnya sudah benar apa belum
						if (validasi == 'Y' || validasi == 'y')
						{
							dekorasi1();
							// jika nominal transfer uang sudah benar maka pengulangan berhenti
							berhasil();
							break;
						}

						// Jika Nasabah salah memasukkan nominal uang yang akan ditransfer sebanyak 3 kali
						if (loop == 3)
						{
							dekorasi1();
							printf("\n");
							salah();
							dekorasi3();
							printf("\n");
							// Program mengulang dari awal
							goto ulang;
						}
					}
					printf("\n");
					ceksaldo();
					scanf("%c %c", &infosaldo, &infosaldo);

					// If ----> Memberikan kesempatan pada nasabah untuk melihat jumlah saldo pada rekeningnya setelah melakukan transfer
					if (infosaldo == 'Y' || infosaldo == 'y')
					{
						printf("\n");
						dekorasi1();
						printf("\a");
						// Memanggil fungsi dengan kembalian untuk menghitung sesuai rumus yang telah ditetapkan
						jumsaldo(transferC(dn3.saldo, jumtransfer));
						printf("\n");
					}
				}

				// Jika nasabah memasukkan nomor rekening yang tidak ada pada program
				else
				{
					printf("\n");
					invalidrek();
					goto verRek2;
				}
			}

			// Jika user menginput pilihan layanan antar Bank (pilbank < 1 || pilbank > 2)
			else
			{
				printf("Maaf pilihan Bank yang Anda pilih, kami belum melayani \n");
			}
		}

		// Jika user menginput pilihan layanan transfer ATM (piltransfer < 1 || piltransfer > 2)
		else
		{
			printf("Pilihan layanan transfer yang Anda masukkan, kamu belum melayani \n\n");
			ulangprogram();
			scanf("%c %c", &validasi, &validasi);
			if (validasi == 'Y' || validasi == 'y')
			{
				printf("\n");
				dekorasi3();
				// Program mengulang dari awal
				goto ulang;
			}
		}
	}

	// Informasi Saldo
	else if (pilayanan == 4)
	{
		jumsaldo(dn3.saldo);
		printf("\n");
	}

	// Jika user menginput pilihan layanan ATM (pilayanan < 1 || pilayanan > 4)
	else
	{
		printf("Maaf pilihan layanan yang Anda pilih, kami belum melayani \n\n");
		ulangprogram();
		scanf("%c %c", &validasi, &validasi);

		// Memberi kesempatan pada nasabah agar dapat melakukan ulang ATM
		if (validasi == 'Y' || validasi == 'y')
		{
			printf("\n");
			dekorasi3();
			// Program mengulang dari awal
			goto ulang;
		}
	}

	// Program selesai
	dekorasi1();
	printf("\n");
	printf("Terima kasih telah menggunakan layanan kami");
	return 0;
}
