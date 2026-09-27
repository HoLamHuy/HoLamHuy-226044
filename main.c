#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<math.h>

void lt1()
{
	//int i = 0;
	//// loop for 
	////for (int i = 0; i < 5; i++)
	////for (;;)
	////{
	////	if (i > 5)break;
	////	
	////	for (int i = 0; i < 5; i++)
	////	{
	////		if (i == 2) continue;
	////	printf(" hello world : %d\n", i);
	////	i++;
	////}
	//int tong = 0;
	////for (i = 0; i <= 10; i++)
	////{
	////	tong = tong + i;
	////	printf(" tong : %d\n", tong);
	////}
	////printf(" tong : %d\n", tong);
	//int j = 0;
	//int k = 0;
	////while (k!=j)
	////{
	////	printf(" nhap j= k : ", j);
	////	scanf_s("%d", &k);
	////}
	//do
	//{
	//	printf(" nhap gia tri k bang j: ");
	//	scanf("%d", &k);

	//} while (k != j);
}
void bt1()
{
	int i = 0;
	for (i = 2;i <= 9;i++)
	{ 
		if (i == 4)continue;
		printf("bang cuu chuong: %d\n", i);
		for (int n = 1;n <= 10;n++)
		{
			printf(" %d*%d = %d\n",i, n, i*n);
		}
		printf("\n");
		
		
	}
}
// bai tap 2 nhap vao so nguyen n tuwf ban phim tinh va in ra giai thua cua n
void bt2()
{
	int n=0;
	
	int gt=1;
	printf("nhap so nguyen n: ");
	scanf_s("%d", &n);
	for ( int i = 1; i <= n; i++)
	 
		
		{ 
			gt = (i ) * gt;
		}
		

	
	printf(" giai thua cua %d = %d\n", n, gt);
}
void bt3()
{
	int n=0;
	int nt = 0;
	printf("nhap so nguyen n: ");
	scanf_s("%d", &n);
	for (int i = 3; i < n; i++)
	{
	
		nt = (n) % i;
		if (nt == 0) break;
	}
	if (nt != 0 || n==2)
	{
		printf(" %d la so  nguyen to \n", n);
	}
	else
	{
		printf(" %d ko ph la so  nguyen to \n", n);
	}
}
void bt3_1()
{

	int n = 0;
	int nt = 1;
	printf("nhap so nguyen n: ");
	scanf_s("%d", &n);
	for (int i = 2; i < n; i++)
	{
		nt = (n) % i;
		if (nt == 0) 
		{ 
			nt = 0;break;
			}
		

    }
	if (nt != 0 )
	{
		printf(" %d la so  nguyen to \n", n);
	}
	else
	{
		printf(" %d ko ph la so  nguyen to \n", n);
	}
}
//bt4 nhap vao so nguyen n dem so luong chu so cua n va in ra.
void bt4()
{
	int n=0 ;
	int nt = 1;
	int nc = 0;
	printf("nhap so nguyen n: ");
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf(" so luong so la : 1");
	}
	else
	{
	while (n!=0)
	{
			n = n / 10;
			nc++;
	}
	
	
		printf(" so luong so la : %d", nc);
	}
	}
	
	
void main()
{
	bt4();
 }
