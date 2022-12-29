#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	char devam;
	int secim = 0;
	float hesap = 0;
	
	float kahve = 4.25;
	float cay   = 2.00;
	float su    = 1.25;
	float meyve = 4.75;
	float soda  = 4.00;
	
	
menu: printf("Lutfen icecek secimi yapiniz\n\n");	
	
	printf("1-Kahve\n");	
	printf("2-Cay\n");
	printf("3-Su\n");
	printf("4-Meyve Suyu\n");
	printf("5-Soda\n");
	
	scanf("%d",&secim);
	
	if(secim == 1){
		hesap = hesap+kahve;
	}
	
	else if(secim == 2){
		hesap = hesap+cay;
	}
	
	else if(secim == 3){
		hesap = hesap+su;
	}
	
	else if(secim == 4){
		hesap = hesap+meyve;
	}
	
	else if(secim == 5){
		hesap = hesap+soda;
	}
	
	printf("Tekrar secim yapmak istiyor musunuz ? e/h");
	scanf(" %c",&devam);
	
	if(devam =='e'){
		goto menu;
		
	}
	else if(devam =='h'){
		printf("Hesap = %.2f\n",hesap);
		printf("Afiyet Olsun :)");
	}

		
	
	return 0;
}

















































