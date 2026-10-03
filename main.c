#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void btvn1()
{
	int i = 0, a, b;
	printf(" nhap so nguyen a: \n");
	scanf_s("%d", &a);
	printf(" nhap so nguyen b: \n");
	scanf_s("%d", &b);
	while (b != 0)
	{
		int r = 0;
		r = a % b;
		a = b;
		b = r;
	}
	printf("UCLN = %d", a);


}
void btvn2()
{
	int soht, sonhap, solan = 0;
	srand(time(NULL));
	soht = rand() % 100 + 1;

	do
	{
		printf("nhap so tu 1 den 100 : ");
		scanf("%d", &sonhap);
		solan++;
		if (sonhap > soht)
		{
			printf(" nho hon");

		}
		else if (sonhap < soht)
		{
			printf(" lon hon");
		}
		else
		{
			printf(" ban dung va so lan nhap cua ban la : %d", solan);
		} 
	} while (sonhap != soht);

}
void main()
{
	btvn2();
}