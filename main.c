#include<stdio.h>
void bt14()
{
	int mang[1000];
	int n = 0, i = 0, chan = 0, le = 0;
	printf("nhap so nguyen : ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf(" nhap mang[%d] : ", i);
		scanf_s("%d", &mang[i]);

		if (mang[i] % 2 == 0)
		{
			chan++;
		}
		else
		{
			le++;
		}
	}
	
	printf(" so phan tu chan : %d", chan);
	printf(" so phan tu le : %d", le);
}
void bt15()
{
	int mang[1000];
	int n = 0, i = 0;
	printf("nhap so phan tu mang: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("nhap phan tu mang[%d]: ", i);
		scanf_s("%d", &mang[i]);


	}
	printf("phan tu cuoi cung trong mang : %d ", mang[n-1]);
}
void main()
{
	bt14();
}


