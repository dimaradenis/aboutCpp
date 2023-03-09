#include <stdio.h>
main(){
	int panjang , lebar , luas ;
	
	printf("PROGRAMAN MENGHITUNG LUAS PERSEAGI \n\n");
	
	printf("Masukan ukuran panjang \t : ");
	scanf("%d",&panjang); // ("%format" , &variable) <-syntax
	
	printf(" Memori %d",sizeof(int));
	
	printf("Masukan ukuran lebar \t :");
	scanf("%d", &lebar);
	
	luas = panjang*lebar;
	
	printf("\n\n Luas persegi adalah %d meter persegi",luas);
	return 0;
}