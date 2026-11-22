 /* bu program harmonik ortalamayý hesaplar.*/
 
 #include <stdio.h>
 int main() 
 {
 	int sayi1;
 	int sayi2;
 	float harmonikOrt;
 	
 	printf("Lutfen sayi1 giriniz.");
 	scanf("%d", &sayi1);
 	printf("Lutfen sayi2 giriniz.");
 	scanf("%d", &sayi2);
 	harmonikOrt = ( 2.0 *sayi1 * sayi2 ) / ( sayi1 + sayi2 ) ;
 	printf("harmonik Ortalama = %,2f", harmonikOrt) ;
 	
 	return 0 ;
 }
