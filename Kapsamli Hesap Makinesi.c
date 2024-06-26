#include <stdio.h>
#include <stdlib.h>


int main() {
	int secim,b,c,d,faktoriyel,i,f;
	float pi;
	pi=3.14;
	faktoriyel=1;
	
	printf("*****Kapsamli Hesap Makinesi*****\n\n");
	printf("1- Toplama\n");
	printf("2- Cikarma\n");
	printf("3- Carpma\n");
	printf("4- Bolme\n");
	printf("5- Bolumunden Kalanini Bulma\n");
	printf("6- Dikdortgenin Cevresini Bulma\n");
	printf("7- Dikdortgenin Alanini Bulma\n");
	printf("8- Dairenin Cevresini Bulma\n");
	printf("9- Dairenin Alanini Bulma\n");
	printf("10- Sayinin Faktoriyelini Bulma\n");
	printf("11- Sayinin Istenilen Kuvvete Kadar Kuvvetlerini Bulma\n\n");
	
	while(secim<12)
	{
		printf("Yapmak Istediginiz Islemin Numarasi: ");
		scanf("%d",&secim);
		switch(secim)
	{
		case 1:
			printf("1. sayi: ");
			scanf("%d",&b);
			printf("2. Sayi: ");
			scanf("%d",&c);
			d=c+b;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 2:
			printf("1. sayi: ");
			scanf("%d",&b);
			printf("2. Sayi: ");
			scanf("%d",&c);
			d=b-c;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 3:
			printf("1. sayi: ");
			scanf("%d",&b);
			printf("2. Sayi: ");
			scanf("%d",&c);
			d=b*c;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 4:
			printf("1. sayi: ");
			scanf("%d",&b);
			printf("2. Sayi: ");
			scanf("%d",&c);
			d=b/c;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 5:
			printf("1. sayi: ");
			scanf("%d",&b);
			printf("2. Sayi: ");
			scanf("%d",&c);
			d=b%c;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 6:
			printf("Dikdortgenin Uzun Kenari: ");
			scanf("%d",&b);
			printf("Dikdortgenin Kisa Kenari: ");
			scanf("%d",&c);
			d=(b+c)*2;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 7:
			printf("Dikdortgenin Uzun Kenari: ");
			scanf("%d",&b);
			printf("Dikdortgenin Kisa Kenari: ");
			scanf("%d",&c);
			d=c*b;
			printf("Sonucunuz: %d\n\n",d);
			break;		
		case 8:
			printf("Dairenin Yaricapi: ");
			scanf("%d",&b);
			d=2*b*pi;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 9:
			printf("Dairenin Yaricapi: ");
			scanf("%d",&b);
			d=(b*b)*pi;
			printf("Sonucunuz: %d\n\n",d);
			break;
		case 10:
			printf("Faktoriyelini Bulmak Istediginiz Sayi: ");
			scanf("%d",&b);
			while(b>1)
			{
				faktoriyel=faktoriyel*b;
				b--;
			}
			printf("Sonucunuz: %d\n\n",faktoriyel);
			break;	
		case 11:
			printf("Kuvvetini Bulmak Istediginiz Sayi: ");
			scanf("%d",&b);
			printf("Bulmak Istediginiz Kuvveti: ");
			scanf("%d",&c);
			d=1;
			for(i=1;i<=c;i++)
			{
				d=d*b;
				printf("%d sayisinin %d. kuvveti: %d\n",b,i,d);
			}
			break;
		default: printf("Sen Biraz Aptalsin Sanirim Yanlis Islem Numarasi Girdin.");	
	}
	}
	return 0;
}
