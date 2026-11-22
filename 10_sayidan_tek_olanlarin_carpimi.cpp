#include <stdio.h>
int main ()
{
	//girilen 10 sayýdan tek olanlarýn çarpýmý //
	int girilen_sayi ;
	int i;
	int carpim=1;
	
	
	
	for (i=1 ; i<=10; i ++) {
		printf("%d sayi giriniz : ", i);
		scanf("%d", &girilen_sayi);
		
		if (girilen_sayi %2 != 0) {
			carpim = carpim * girilen_sayi;
		
		}	
		
	}
	printf("girilen tek sayilarin carpimi : %d\n" ,carpim);
	
	return 0 ;
	
	
	
}
