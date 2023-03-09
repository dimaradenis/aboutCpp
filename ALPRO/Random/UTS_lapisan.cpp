#include <stdio.h>

int main(){
	float t;
	printf("Masukkan ketinggia permukaan bumi (km) : "); scanf("%f", &t);
	
	if(t >= 0){
		printf("Nama lapisan : ");
		if(t >= 10){
			if(t >= 40){
				if(t >= 70){
					if(t >= 400){
						printf("Eksosfer");
					}else{
						printf("Termosfer");
					}
				}else{
					printf("Mesosfer");
				}
			}else{
				printf("Stratosfer");
			}
		}else{
			printf("Troposfer");
		}
	}else{
		printf("Invalid!");
	}
	
}
