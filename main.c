#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<math.h>
void main()
{
	//printf(" Hello world ");
	//printf(" Hello C 1");
	//unsigned char x = 1234;
	//printf("%d \n", x);

	//int n = 0;
	//printf(" nhap so nguyen : ");
	//scanf("%d", &n);
	//printf("n:%d ", n);
	//// bai 1 yc: user nhap vao ki tu bat ki
	//// in ra dang thap phan ( he 10) va danh thap luc phan ( he 16)
	//int u = 0.00;
	//printf(" moi ban nhap so : ");
	//scanf("%c", &u);
	//printf("he 10: %d \n", u);

	//printf("he 16: %x\n", u);
	//// bai 2 yc user nhap vao mssv and diem (float)
	//// in mssv and diem vua nhap ra man hinh
	//int mssv = 0;
	//float diem = 0;
	//printf(" moi ban nhap mssv :", mssv);
	//scanf("%d", &mssv);
	//printf("moi ban nhap diem :", diem);
	//scanf("%f", &diem);
	//printf("mssv: %d\n", mssv);
	//printf("diem: %f\n", diem);
	//// BAI 3 : NHAP VAO 2 SO NGUYEN SAU DO IN RA TONG, HIEU, TICH, THUONG
	//int a = 0;
	//int b = 0;
	//float tong, hieu, tich, thuong;
	//printf(" nhap a: ", a);
	//scanf("%d", &a);
	//printf("nhap b:", b);
	//scanf("%d", &b);
	//tong = a + b;
	//hieu = a - b;
	//thuong = (float)a/b;
	//tich = a * b;
	//printf("tong: %f\n", tong);
	//printf("hieu: %f\n", hieu);
	//printf("tich: %f\n", tich);
	//printf("thuong: %f\n", thuong);

	////      NHAP NHIET DO C VA DOI SANG DO F VA IN RA ( SO THUC )
	//// F=C*9/5+32
	//int C=0;
	//float F;
	//printf("nhap nhiet do C: ", C);
	//scanf("%d", &C);
	//F = (float)C * (9/5) + 32;
	//printf("DO F LA: %.1f\n", F);
	// YC: USER NHAP SO GIAY ( SO NGUYEN) 
	//IN RA SO GIO, PHUT, SO GIAY TREN MOI GIONG 
	//int s = 0;
	//printf(" nhap so giay:", s);
	//scanf("%d", &s);
	//printf("so gio: %d\n", s / 3600);
	//printf(" so phut: %d\n", s % 3600/60);
	//printf("so giay :%d\n", s % 60);
	//// NHAP VAO KINH THUOC VA IN RA C AND S
	//  int r = 0;
	//  float pi;
	//  pi = 3.14;
	//  printf("nhap ban kinh r:");
	//  scanf("%d", &r);
	//  float C, S;
	//  C = 2 * r * pi;
	//  S = r * r * pi;

	//  printf("chu vi C = %f\n", C);
	//  printf("dien tich S = %f\n", S);
	//float a, b, c, x1=0, x2=0, D;
	//printf("Chuong trinh giai PTr Bac 2 : ax^2+bx+c=0 (dk : a != 0) \n");
	//printf(" nhap he so a : ");
	//scanf("%f", &a);
	//printf(" nhap he so b : ");
	//scanf("%f", &b);
	//printf(" nhap he so c : ");
	//scanf("%f", &c);
	//	D = b * b - 4 * a * c;
	//	if (D > 0)
	//	{
	//		x1 = (-b + sqrt(D)) / (2 * a);
	//		x2 = (-b - sqrt(D)) / (2 * a);
	//		printf(" PHUONG TRINH CO 2 NGHIEM :\n");
	//		printf("  Nghiem X1 = %.2f \n", x1);
	//		printf("  Nghiem X2 = %.2f \n", x2);

	//	}
	//	else if (D == 0)
	//	{
	//		x1 = x2 = (-b) / (2 * a);
	//		printf(" Nghiem kep X1 = X2 = %.2f\n ", x1);

	//	}
	//	else (D < 0)
	//	{
	//		printf(" PHUONG TRINH VO NGHIEM ");
	//	}
	// buoi 3 bai 2 
	// yc: nhap so bat ky
	//kiem tra la am duong hay = 0
	//float x = 0;
	//printf(" nhap so : \n");
	//scanf("%f", &x);
	//if (x > 0)
	//{
	//	printf(" so duong : %.2f\n", x);
	//}
	//else if (x == 0)
	//{
	//	printf(" so 0\n");
	//}
	//else
	//{
	//	printf(" so am : %.2f\n", x);
	//}
    // bai 3 : kiểm tra năm nhuận 
//   // nhập vào từ bàn phím số năm 
//int nam = 0;
//printf(" nhap so nam : ");
//scanf("%d", &nam);
//int x = (nam) % (4);
//int y = (nam) % (100);
//int z = nam % 400;
//if ((x==0 && y!=0)||(z==0))
//{
//	printf("%d : la nam NHUAN. \n",nam);
//}
//else
//{
//	printf("%d : KHONG phai la nam nhuan.\n",nam);
//}
// BAI 4 : nhap so tu ban phim 3 so a, b, cvaf in ra so max.
//int a, b, c;
//printf(" nhap so a: ");
//scanf("%d", &a);
//printf(" nhap so b: ");
//scanf("%d", &b);
//printf(" nhap so c: ");
//scanf("%d", &c);
//int max = a;
//if (max > b)
//{
//	max = b;
//}
//if (max > c)
//{
//	max = c;
//}
//printf(" max: %d\n",max);
//if (a > b && a > c)
//{
//	printf(" so a : %d la MAX.\n",a);
//}
//else if (b > a && b > c)
//{
//	printf(" so b : %d la MAX.\n",b);
//}
//else if (c > a && c > b)
//{
//	printf(" so c : %d la MAX.\n",c);
//}
// Bai 5: tinh tien dien sinh hoat theo 5 bac 
//int t = 0;
//float k = 0;
//printf(" nhap so dien: ");
//scanf("%f", &k);
//if (k > 0 && k <= 50)
//{
//	t = k * 1.984;
//}
//if (k >= 50 && k <= 100)
//{
//	float y = k - 50;
//	t = 50 * 1.984 + y * 2.050;
//}
//if (k > 100 && k <= 200)
//{
//	float y = k - 100;
//	t = 50 * 1.984 + 50 *2.050+y*2.380;
//}
//if (k > 200 && k <= 300)
//{
//	float y = k - 200;
//	t = 50 * 1.984 + 50 *2.050+100*2.380 +y*2.998;
//}
//if (k > 300 && k <= 400)
//{
//	float y = k - 300;
//	t = 50 * 1.984 + 50 *2.050+100*2.380 +100*2.998+y*3.350;
//}
//if (k > 400)
//{
//	float y = k - 400;
//	t = 50 * 1.984 + 50 *2.050+100*2.380 +100*2.998+100*3.350+ y*3.460;
//}
//
//printf(" tong so tien : %d\n", t);
int tb1 = 1984;
int tb2 = 2050;
int tb3 = 2380;
int tb4 = 2998;
int tb5 = 3350;
int tb6 = 3460;
int sodien = 0;
int sotien = 0;
printf("nhap so dien: ");
scanf("%d", &sodien);
if (sodien > 400)
{
	sotien = 50 * tb1 + 50 * tb2 + 100 * tb3 + 100 * tb4 + 100 * tb5 + (sodien - 400) * tb6;
}
if (sodien > 300)
{
	sotien = 50 * tb1 + 50 * tb2 + 100 * tb3 + 100 * tb4  + (sodien - 300) * tb5;
}
if (sodien > 200)
{
	sotien = 50 * tb1 + 50 * tb2 + 100 * tb3 + (sodien - 200) * tb4;
}
if (sodien > 100)
{
	sotien = 50 * tb1 + 50 * tb2 + (sodien - 100) * tb3;
}
if (sodien > 50)
{
	sotien = 50 * tb1 + (sodien - 50) * tb2;
}
if (sodien <= 50)
{
	sotien =  sodien * tb1;
}
printf(" tong so tien : %d\n", sotien);
}
 
