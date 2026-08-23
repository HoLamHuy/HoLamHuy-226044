#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void main()
{
	printf(" Hello world ");
	printf(" Hello C 1");
	unsigned char x = 1234;
	printf("%d \n", x);

	int n = 0;
	printf(" nhap so nguyen : ");
	scanf("%d", &n);
	printf("n:%d ", n);
	// bai 1 yc: user nhap vao ki tu bat ki
	// in ra dang thap phan ( he 10) va danh thap luc phan ( he 16)
	int u = 0.00;
	printf(" moi ban nhap so : ");
	scanf("%c", &u);
	printf("he 10: %d \n", u);

	printf("he 16: %x\n", u);
	// bai 2 yc user nhap vao mssv and diem (float)
	// in mssv and diem vua nhap ra man hinh
	int mssv = 0;
	float diem = 0;
	printf(" moi ban nhap mssv :", mssv);
	scanf("%d", &mssv);
	printf("moi ban nhap diem :", diem);
	scanf("%f", &diem);
	printf("mssv: %d\n", mssv);
	printf("diem: %f\n", diem);
	// BAI 3 : NHAP VAO 2 SO NGUYEN SAU DO IN RA TONG, HIEU, TICH, THUONG
	int a = 0;
	int b = 0;
	float tong, hieu, tich, thuong;
	printf(" nhap a: ", a);
	scanf("%d", &a);
	printf("nhap b:", b);
	scanf("%d", &b);
	tong = a + b;
	hieu = a - b;
	thuong = (float)a/b;
	tich = a * b;
	printf("tong: %f\n", tong);
	printf("hieu: %f\n", hieu);
	printf("tich: %f\n", tich);
	printf("thuong: %f\n", thuong);

	//      NHAP NHIET DO C VA DOI SANG DO F VA IN RA ( SO THUC )
	// F=C*9/5+32
	int C=0;
	float F;
	printf("nhap nhiet do C: ", C);
	scanf("%d", &C);
	F = (float)C * (9/5) + 32;
	printf("DO F LA: %.1f\n", F);
	 YC: USER NHAP SO GIAY ( SO NGUYEN) 
	IN RA SO GIO, PHUT, SO GIAY TREN MOI GIONG 
	int s = 0;
	printf(" nhap so giay:", s);
	scanf("%d", &s);
	printf("so gio: %d\n", s / 3600);
	printf(" so phut: %d\n", s % 3600/60);
	printf("so giay :%d\n", s % 60);
	// NHAP VAO KINH THUOC VA IN RA C AND S
	  int r = 0;
	  float pi;
	  pi = 3.14;
	  printf("nhap ban kinh r:");
	  scanf("%d", &r);
	  float C, S;
	  C = 2 * r * pi;
	  S = r * r * pi;

	  printf("chu vi C = %f\n", C);
	  printf("dien tich S = %f\n", S);
 }
