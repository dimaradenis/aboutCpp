// Penilaian Ujian Tengah Semester Gasal
// Mata Kuliah Pemrograman Lanjut
// Nama             : Denis Lizard Sambawo Dimara
// NPM              : 21081010159
// Kelas            : Algoritma Pemrograman D081
// Dosen Pengampu   : Fetty Tri Anggraeny , S.Kom,M.Kom

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Fungsi void Agar mempermudah dalam pemanggilan beberapa syntax
int count60, count65, count70, count75, count80, count85, count90 = 0;
int nilai[] = {65, 70, 85, 90, 75, 70, 75, 80, 85, 90, 75, 80, 60, 85, 90, 85, 80, 75, 75, 85, 80, 80, 90, 85, 80, 85, 70, 80, 85, 85};
int n = sizeof(nilai) / sizeof(nilai[0]);
char ulang;
int less70, more80;
int low, high;

// Fungsi pemanis atau dekorasi
void dekorasi1()
{
    cout << "============================================" << endl;
}
void dekorasi2()
{
    cout << "--------------------------------------------" << endl;
}
void newline()
{
    cout << "\n";
}
// Fungsi menampilkan Data Nilai
void datanilai()
{
    cout << "65\t70\t85\t90\t75\t70\t" << endl;
    cout << "75\t80\t85\t90\t75\t80\t" << endl;
    cout << "60\t85\t90\t85\t80\t75\t" << endl;
    cout << "75\t85\t80\t80\t90\t85\t" << endl;
    cout << "80\t85\t70\t80\t85\t85\t" << endl;
}
// Fungsi Header Tugas UTS
void header()
{
    dekorasi1();
    cout << " UTS - PEMROGRAMAN LANJUT - SORTING EXCHANGE " << endl;
    dekorasi2();
}

// Fungsi Menentukan Nilai Terbesar dan Terkecil dari Sampel Data
int HighLowValue(int nilai[], int n, int low, int high)
{
    for (int i = 0; i < n; i++)
    {
        // Nilai tertinggi dari Sampel Data
        if (nilai[i] > high)
        {
            high = nilai[i];
        }

        // Nilai terendah dari Sampel Data
        if (nilai[i] < low)
        {
            low = nilai[i];
        }
    }

    // Menampilkan
    system("CLS");
    newline();
    newline();
    header();
    newline();
    cout << " Data Nilai Ujian Bahasa Daerah Kelas V" << endl;
    newline();
    datanilai();
    newline();
    dekorasi2();
    cout << "Nilai Terendah  = " << low << endl;
    cout << "Nilai Tertinggi = " << high << endl;
    dekorasi1();
    newline();
    return 0;
}

// Fungsi Menghitung Rata-Rata Dari Sampel Data\
// Menggunakan Nilai kembali
float ratarata(int nilai[], int n)
{
    // penjumlahan nilai
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nilai[i];
    }
    return (float)sum / n;
}

// Fungsi menghitung berapa jumplah mahasiswa yang mendapatkan nilai >= 70
void ValueMoreThan80()
{
    more80 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] >= 80)
        {
            more80++;
        }
    }
    cout << more80;
}

// Fungsi menghitung berapa jumplah mahasiswa yang mendapatkan nilai < 70
void ValueLessThan70()
{
    less70 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] < 70)
        {
            less70++;
        }
    }
    cout << less70;
}

// Membuat Fungsi untung menghitung jumplah frekuensi dalam Tabel
// Menghitung Jumlah Nilai 90
void menghitungnilai90()
{
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == 90)
        {
            count90++;
        }
    }
    cout << count90;
}

// Menghitung Jumlah Nilai 85
void menghitungnilai85()
{
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == 85)
        {
            count85++;
        }
    }
    cout << count85;
}

// Menghitung Jumlah Nilai 80
void menghitungnilai80()
{
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == 80)
        {
            count80++;
        }
    }
    cout << count80;
}

// Menghitung Jumlah Nilai 75
void menghitungnilai75()
{
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == 75)
        {
            count75++;
        }
    }
    cout << count75;
}
// Menghitung Jumlah Nilai 70
void menghitungnilai70()
{
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == 70)
        {
            count70++;
        }
    }
    cout << count70;
}
// Menghitung Jumlah Nilai 65
void menghitungnilai65()
{
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == 65)
        {
            count65++;
        }
    }
    cout << count65;
}
// Menghitung Jumlah Nilai 60
void menghitungnilai60()
{
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == 60)
        {
            count60++;
        }
    }
    cout << count60;
}

void TabelFrekuensi()
{
    cout << "---------------------------------" << endl;
    cout << "|  Nilai\t|  Frekuensi\t|  " << endl;
    cout << "---------------------------------" << endl;
    cout << "|  60\t\t|  ";
    menghitungnilai60();
    cout << "\t\t|" << endl;
    cout << "|  65\t\t|  ";
    menghitungnilai65();
    cout << "\t\t|" << endl;
    cout << "|  70\t\t|  ";
    menghitungnilai70();
    cout << "\t\t|" << endl;
    cout << "|  75\t\t|  ";
    menghitungnilai75();
    cout << "\t\t|" << endl;
    cout << "|  80\t\t|  ";
    menghitungnilai80();
    cout << "\t\t|" << endl;
    cout << "|  85\t\t|  ";
    menghitungnilai85();
    cout << "\t\t|" << endl;
    cout << "|  90\t\t|  ";
    menghitungnilai90();
    cout << "\t\t|" << endl;
    cout << "---------------------------------" << endl;
}

// Fungsi Untuk memberi delay pada terminal sebelum mengeksekusi syntax selanjutnya
void delay(unsigned int secs)
{

    unsigned int ret_time = time(0) + secs;
    while (time(0) < ret_time)
        ;
}

// Fungsi untuk menukar Nilai
void tukar(int a, int b)
{
    int t;
    t = nilai[b];
    nilai[b] = nilai[a];
    nilai[a] = t;
}

// Fungsi untuk menampilkan nilai
void tampilkannilai()
{
    for (int i = 0; i < n; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << endl;
}

// Fungsi Sorting Exchange secara Ascending
void ExchangeSortAscending()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (nilai[i] > nilai[j])
                tukar(i, j);
        }
    }
    cout << endl;
}

// Fungsi Sorting Exchenge secara Descending
void ExchangeSortDescending()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (nilai[i] < nilai[j])
                tukar(i, j);
        }
    }
    cout << endl;
}

// Fungsi Menampilkan Biodata Saya
void biodata()

{
    cout << "====================================" << endl;
    cout << "           BIODATA MAHASISWA        " << endl;
    cout << "====================================" << endl;
    cout << "Nama\t:Denis Lizard Sambawo Dimara" << endl;
    cout << "NPM\t:21081010159" << endl;
    cout << "Prodi\t:S-1 Informatika" << endl;
    cout << "------------------------------------" << endl;
}

int main()
{
    // dekalarasi variable
    int pilihan, pilihan1;
    char ulang;

    // Menampilkan Biodata Sebelum Melanjutkan ke Menu Program
    system("CLS");
    biodata();
    newline();
    printf("Lets See Program..!!\n");
    printf("Press ENTER key to Continue\n");
    getchar();

// Tampilan Awal Sebuah Program
menu:
    system("CLS");
    newline();
    header();
    newline();
    cout << " Data Nilai Ujian Bahasa Daerah Kelas V" << endl;
    newline();
    datanilai();
    dekorasi2();
    newline();
    newline();

    // Menu Program yang tersedia sesuai soal UTS ya..
    cout << " Menu Informasi Program " << endl;
    newline();
    cout << " 1. Sorting Data ( Metode Exchange )" << endl;
    cout << " 2. Tabel Data Frekuensi " << endl;
    cout << " 3. Rata Rata Nilai Ulangan " << endl;
    cout << " 4. Nilai Terendah dan Tertinggi " << endl;
    cout << " 5. Jumlah Siswa dengan nilai < 70 " << endl;
    cout << " 6. Jumlah Siswa dengan nilai >= 80" << endl;
    cout << " 7. Exit " << endl;
    newline();
    newline();
    cout << "Pilih Menu yang diinginkan :";
    cin >> pilihan;

    // Proses selanjutnya setelah user menginputkan pilihan menu
    switch (pilihan)
    {
    case 1:
    ulangcase1:
        system("CLS");
        header();
        datanilai();
        newline();
        cout << "Menu  Sorting " << endl;
        cout << "1. Ascending " << endl;
        cout << "2. Descending " << endl;
        cout << "Pilih Menu ( 1 / 2 ): ";
        cin >> pilihan1;
        if (pilihan1 == 1)
        {
            /* code */
            system("CLS");
            header();
            newline();
            newline();
            dekorasi1();
            cout << "       SORTING EXCHANGE ASCENDING         " << endl;
            dekorasi2();
            cout << "BEFORE SORTING " << endl;
            tampilkannilai();
            ExchangeSortAscending();
            cout << "AFTER SORTING " << endl;
            tampilkannilai();
            getchar();
            newline();
            cout << "Apakah anda ingin mengulang Program ? [Y/N]  :";
            cin >> ulang;
            if (ulang == 'Y' || ulang == 'y')
            {
                goto menu;
            }
        }
        else if (pilihan1 == 2)
        {
            system("CLS");
            header();
            newline();
            newline();
            dekorasi1();
            cout << "       SORTING EXCHANGE DESCENDING         " << endl;
            dekorasi2();
            cout << "BEFORE SORTING " << endl;
            tampilkannilai();
            ExchangeSortDescending();
            cout << "AFTER SORTING " << endl;
            tampilkannilai();
            getchar();
            newline();
            cout << "Apakah anda ingin mengulang Program ? [Y/N]  :";
            cin >> ulang;
            if (ulang == 'Y' || ulang == 'y')
            {
                goto menu;
            }
        }
        // jika salah menginputkan pilihan  akan error dan sistem akan meminta user untuk menginputkan ulang
        else
        {
            system("CLS");
            newline();
            cout << "Menu Tidak tersedia !!" << endl;
            cout << "Silahkan Pilih Menu yang tersedia " << endl;
            delay(3);
            goto ulangcase1;
        }
        break;

    case 2:
        system("CLS");
        header();
        newline();
        TabelFrekuensi();
        newline();

        cout << "Apakah anda ingin mengulang Program ? [Y/N]  :";
        cin >> ulang;
        if (ulang == 'Y' || ulang == 'y')
        {
            goto menu;
        }

        break;
    case 3:
        // Program Rata Rata Dari Sampel Tabel
        system("CLS");
        header();
        newline();
        cout << " Data Nilai Ujian Bahasa Daerah Kelas V" << endl;
        dekorasi2();
        newline();
        datanilai();
        dekorasi2();
        newline();
        newline();
        cout << "RATA RATA DARI SAMPEL DIATAS ADALAH :" << ratarata(nilai, n) << endl;
        newline();
        newline();
        cout << "Apakah anda ingin mengulang Program ? [Y/N]  :";
        cin >> ulang;
        if (ulang == 'Y' || ulang == 'y')
        {
            goto menu;
        }
        break;
    case 4:
        // menentukan data terbesar dan terkecil dari sampel
        low = nilai[0];
        high = nilai[0];
        HighLowValue(nilai, n, low, high);
        newline();
        newline();
        cout << "Apakah anda ingin mengulang Program ? [Y/N]  :";
        cin >> ulang;
        if (ulang == 'Y' || ulang == 'y')
        {
            goto menu;
        }
        break;

    case 5:
        // Syntax Banyak Nilai < 70
        system("CLS");
        header();
        newline();
        cout << " Data Nilai Ujian Bahasa Daerah Kelas V" << endl;
        newline();
        datanilai();
        dekorasi2();
        newline();
        newline();
        cout << "Banyak siswa yang nilainya di bawah 70 : ";
        ValueLessThan70();
        cout << " Anak " << endl;
        newline();
        newline();
        cout << "Apakah anda ingin mengulang Program ? [Y/N]  :";
        cin >> ulang;
        if (ulang == 'Y' || ulang == 'y')
        {
            goto menu;
        }
        break;
    case 6:
        // Syntax Banyak Nilai >= 80
        system("CLS");
        header();
        newline();
        cout << " Data Nilai Ujian Bahasa Daerah Kelas V" << endl;
        newline();
        datanilai();
        dekorasi2();
        newline();
        newline();
        cout << "Banyak siswa yang nilainya di lebih dari sama dengan 80 : ";
        ValueMoreThan80();
        cout << " Anak" << endl;
        newline();
        cout << "Apakah anda ingin mengulang Program ? [Y/N]  :";
        cin >> ulang;
        if (ulang == 'Y' || ulang == 'y')
        {
            goto menu;
        }
        break;
    case 7:
        system("CLS");
        newline();
        newline();
        newline();
        newline();
        newline();
        newline();
        dekorasi1();
        cout << "      Terima Kasih dan Sehat Selalu      " << endl;
        dekorasi1();
        newline();
        newline();
        cout << "    Program by Denis L.S.D - 21081010159" << endl;
        newline();
        newline();
        newline();
        newline();
        exit(0);
        break;
    default:
        system("CLS");
        newline();
        newline();
        newline();
        newline();
        dekorasi2();
        cout << " Inputan Invalid " << endl;
        cout << " Program akan mengulang " << endl;
        cout << " Tunggu beberapa detik..." << endl;
        dekorasi2();
        delay(5);
        goto menu;
        break;
    }
    // Penutup Program
    system("CLS");
    newline();
    newline();
    newline();
    newline();
    newline();
    newline();
    dekorasi1();
    cout << "      Terima Kasih dan Sehat Selalu      " << endl;
    dekorasi1();
    newline();
    newline();
    cout << "    Program by Denis L.S.D - 21081010159" << endl;
    newline();
    newline();
    newline();
    newline();
    return 0;
}