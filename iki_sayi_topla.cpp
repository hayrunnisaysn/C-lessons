#include <stdio.h>
int main () {
	
	int sayi1 ;
	int sayi2 ;
	float toplam ;
	
	printf(" sayi1 giriniz = ");
	scanf("%d", &sayi1);
	printf("sayi2 giriniz = ");
	scanf("%d", &sayi2);
	toplam = sayi1 +sayi2 ;
	printf ("sonucunuz = %.2f", toplam);
	
	return 0 ;
}
