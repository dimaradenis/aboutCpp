#include <stdio.h>

int main(){
	float s1, s2, s3;
	printf("Program penentu segitiga\n\n");
	printf("Masukkan sisi ke-1 : "); scanf("%f", &s1);
	printf("Masukkan sisi ke-2 : "); scanf("%f", &s2);
	printf("Masukkan sisi ke-3 : "); scanf("%f", &s3);
	
	if(s1 == s2 && s1 == s3 && s2 == s3){
		printf("Segitiga Sama Sisi");
	}else if(s1 == s2 || s1 == s3 || s2 == s3){
		printf("Segitiga Sama Kaki");	
	}else{
		printf("Segitiga Sembarang");
	}
}
