#include <stdio.h>
#include <stdlib.h>

	int i,sayi;
	void asal_carpanlar(int){
	
	for(i=2;sayi!=1;i++){
		
		if(sayi%i==0){
			
			sayi/=i;
			printf("%d  ",i);
			i--;
		
		}
	}
	
}

	int main(){
	
	printf("Sayiyi giriniz: ");		
	scanf("%d",&sayi);
	asal_carpanlar(sayi);

	
	return 0;
}
