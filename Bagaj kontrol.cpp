#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	// girlen - hak > 8 mi ?
	// büyükse (girilen - normal) * 4 tl


	int default_el = 8;
	int default_normal = 15;
	
	int girilen_el;
	int girilen_normal;
	
	int ekstra_el,ekstra_normal;
	int ek_ucret1=0,ek_ucret2=0;
	int toplam;
	
	printf("El kg giriniz :");
	scanf("%d",&girilen_el);
	
	printf("Normal kg giriniz :");
	scanf("%d",&girilen_normal);
	printf("\n");
	
	ekstra_el 	  = (girilen_el - default_el) ;
	ekstra_normal = (girilen_normal - default_normal) ;
	
	if(girilen_el > 8)
	{
		ek_ucret1 = ekstra_el*4;
		printf("Ekstra ucret el icin : %d\n",ek_ucret1);
	}
	else
	{
		printf("El kg sinirini asmadiniz\n");
	}
	
	
	if(girilen_normal > 15)
	{
		ek_ucret2 = ekstra_normal*5;
		printf("Ekstra ucret normal icin : %d\n",ek_ucret2);
	}
	else
	{
		printf("Normal kg sinirini asmadiniz\n");
	}
	
	toplam = (ek_ucret1+ek_ucret2);
	printf("Toplam ucret : %d",toplam);
	
	return 0;
}
