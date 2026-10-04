#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "lib.h"

// Hàm
// - Hàm dùng để miêu tả 1 công việc hoặc hành động nào đó
// vd:  hàm printf dùng để in ra màn hình console,
//		hàm scanf dùng để scan dữ liệu từ bàn phím
// - khi xây dựng hàm thì cần xác định:
//	+ chức năng của hàm: hàm dùng để làm gì
//  + input: hàm cần truyền cái gì vào
//  + output: hàm cần trả ra cái gì
// - cú pháp khai báo hàm:
// <kiểu_dữ_liệu_trả_về> tên_hàm (<các biến chứa input>) 
// {
//		// viết code
// }
// vd: xây dựng hàm cộng 2 số nguyên
//  + chức năng của hàm: cộng 2 số nguyên
//  + input: 2 số nguyên cần cộng
//  + output: kết quả của phép cộng 2 số đó
// vd: xây dựng hàm kiểm tra số nguyên tố
//  + chức năng của hàm: dùng để kiểm tra số nguyên tố
//  + input: 1 số nguyên
//  + output: 1 nếu đúng, 0 nếu sai

//
//int add(int a, int b)
//{
//	int tong = a + b;
//	return tong;
//}



void main()
{
	//char x = kiem_tra_so_nguyen_to(15);
	//// in ra tất cả số nguyên tố từ 1 -> 100;

	//for (int i = 1; i <= 100; i++)
	//{
	//	if (kiem_tra_so_nguyen_to(i)) {
	//		printf("%d la so nguyen to \n", i);
	//	}
	//}

	//// khai báo(lib.h) và xây dựng hàm tìm ucln của 2 số nguyên (lib.c)

	//int ucln1 = tim_ucln(12, 20); // return 4
	//printf("ucln1: %d \n", ucln1);

	//int ucln2 = tim_ucln(30, 45); // return 15
	//printf("ucln2: %d \n", ucln2);

	//// khai báo(lib.h) và xây dựng hàm tìm bcnn của 2 số nguyên (lib.c)

	//int bcnn1 = tim_bcnn(3, 4); // return 12
	//printf("bcnn1: %d \n", bcnn1);

	//int bcnn2 = tim_bcnn(30, 45); // return 90
	//printf("bcnn2: %d \n", bcnn2);
	int arr[10] = { 3,4,5,6,7,8,9,23,34,45 };
	//int tong = 0;
	//for (int i = 0; i < 10; i++)
	//{
	//	tong = tong + arr[i];

	//}
	//printf("tong = %d \n", tong);
	int max = arr[0];
	int min = arr[0];
	int locate_min = 0;
	int locate_max = 0;
	for (int i = 1; i <10; i++)
	{
	
		
		if (arr[i] > max)
		{
			max = arr[i];
			locate_max = i;

		}
		if (arr[i] < min )
		{
			min = arr[i];
			locate_min = i;
		}
	}

	printf("max = %d\n", max);
	printf("locate =%d\n",locate_max );
	printf("min = %d\n", min);
	printf("locate %d\n", locate_min);

	printf("max = %d\n", max);
	printf("locate =%d\n",locate_max );
	printf("min = %d\n", min);
	printf("locate %d\n", locate_min);

	int arr1[] = { 3,4,5,6,7,8,9,23,34,45 };
	int length = sizeof(arr1) / sizeof(arr1[0]);
	for (int j = 0; j < length; j++)
	{
		printf("j[%d] : %d \n", j, arr1[j]);
		printf("j[%d] : %d \n", j, arr1[j]);
	}
}