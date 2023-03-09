#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x ;
	int y ;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf ("X awal		: %i\n\n",x);
	x++;
	
	printf(" X diluar printf	:%i\n",x);
	printf(" X			:%i \n\n",x);
	printf(" X dalam printf 	:%i\
	  \n",x++);
	printf(" X			:%i\n\n ",x);
	
	++x;
	printf(" X diluar printf	:%i\n",x);
	printf(" X			:%i \n\n",x);
	printf(" X dalam printf 	:%i\
	 \n",++x);
	printf(" X			:%i\n\n ",x);
	
	printf ("Y awal		: %i\n\n",y);
	
	y--;
	printf(" Y diluar printf	:%i\n",y);
	printf(" Y			:%i \n\n",y);
	printf(" Y dalam printf 	:%i\
	 \n",y--);
	printf(" Y			:%i\n\n ",y);
	
	--y;
	printf(" Y diluar printf	:%i\n",y);
	printf(" Y			:%i \n\n",y);
	printf(" Y dalam printf 	:%i\
	 \n",--y);
	printf(" Y			:%i\n\n ",y);
	
	
	
	
	return 0;
}
