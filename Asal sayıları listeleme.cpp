#include<stdio.h>
#include<stdlib.h>


int main(){
	
	
	// 0 dan 1000 e kadar asal sayýlarý listeleme.
	
	 // 2 3 5 7 11 13 17 19 23 29 ...
	

	
	int i,j,sayac;
	
	for(i=2; i<=1000; i++)
	{		
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				sayac++;
			}
										
		}
		
		if(sayac==2)
		{
			printf("%d asaldir\n",i);
			sayac = 0;
		}
				
		else
		{
			sayac = 0;
		}
		
	}
	
	
	
	
	return 0;
}
