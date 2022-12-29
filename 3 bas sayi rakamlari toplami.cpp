#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
/*	
	// Girilen 3 bas sayinin rakalarý toplamý. 256
	
	int sayi,toplam;
	int birler,onlar,yuzler;	

	printf("Sayi :");
	scanf("%d",&sayi);
	
	yuzler = sayi/100;
	onlar  = (sayi/10)%10;
	birler = sayi%10;
	
	toplam = yuzler+onlar+birler;
	printf("Sayinin rakamlari toplami : %d\n",toplam);
	
*/	
	int sayi1,sayi2,i,j;
	int toplam = 0;
	for(i=1;;i++)
	{
		printf("Lutfen rakamlari farkli 2 sayi giriniz\n");
		printf("Sayi 1 :");
		scanf("%d",&sayi1);
	
		printf("Sayi 2 :");
		scanf("%d",&sayi2);
		
		if(sayi1 != sayi2)
		{
			break;
		}			
		
	}

for(j=sayi1;j<=sayi2;j++)
	{
	toplam =toplam+j;	
	}		
	
printf("Toplam : %d",toplam);	
	
	
//	printf("Sayi 1 : %d\n",sayi1);
//	printf("Sayi 2 : %d",sayi2);
	
	return 0;
}
