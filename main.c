#include<stdio.h>n tro
	//
void main()
{
	//int x = 0x1234;
	//int* px = &x;
	//printf(" gia tri bien x : %x\n", *px);
	//*px = 0x78;
	//*(px + 1) = 0x56;
	//printf(" gia tri bien x : %x\n", *px);
	//// toan tu cong coprintf(" gia tri bien x : %x\n", *(px+1));
	//short x = 0x1234;
	//char* px = &x;
	//printf(" byte thap %x\n", *px);
	//printf(" byte cao %x\n", *(px+1));
	//int arr[] = { 1,2,3,4,5,6 };
	//int* px = arr;
	//printf("px lan1 : %x, \n", px);
	//px = &arr[0];
	//printf("px lan2 : %x, \n", px);
	//printf("px lan3 : %x, \n", *(px+1));
	//for (int i = 0; i < 6; i++)
	//{
	//	printf("arr[%d]: %d\n", i, *(px + i));
	//}
	////string trong C chinh la mang ki tu char ket thuc bang
	//// ky ut dat biet '\0'
	//// ki tự được lưu theo bản mã ASCII 
	//// ví dụ a la 97, b la 98 
	//// sẽ sử dụng 1 byte để lưu kí tự, //
	//// the hiện kí tự bằng cách chứa trong cặp nháy đơn ''
	//// cú pháp khai báo : 
	//char str[6] = { 'h','e','l','l','o',0 };
	//char str1[]= { 'h','e','l','l','o',0 };
	//// ngan gon hon 
	//char str2[]="hello";
	//// ngoai ra trong language C khi chua string trong cap dau"" 
	//// thi no se tra ve dia chi string do
	//printf("string: %s\n", "hello");
	//// suy ra ta co cach khai bao thu 2 la dung con tro de chua
	//// bat dau cua string
	//char* str3 = "hello";// dạng hằng số
	//printf("string: %s\n", str3);
	//// can luu y khi khai bao string bang con tro 
	//// thì cái string đó là hằng số và không thể thay đổi giá trị 
	//str2[4] = 'y';
	//printf("string1: %s\n", str2);
	////str3[4] = 'y'; khong thể ghi giá trị vào hăngf số string3
	////printf("string: %s\n", str3);
	//bt1: viết hàm trả ra độ dài string nhận vào 1 string và trả ra
	// độ dai cua string đó.

	//char str1[] = "lap tring ccpp";
	//int len_str1 = str_len(str1);
	//printf("len_str1 %d\n", len_str1);
	// viet ham arr_sum nhan vao 1 mang so nguyen va kich thuoc 
	// ham tra ve tong cac phan tu trong mang
	//int arr[] = { 1,2,3,4,5,6 };
	//int n = sizeof(arr) / sizeof(0);
	//int sum = arr_sum(arr,n);
	//printf("sum arr : %d", sum);
	// 
	/**
	    *@brief hàm dùng để tính tổng các phân tử trong mảng số nguyên 
		* @param int* : địa chỉ bắt đầu của mảng số nguyên
		*  @param int: kich thuoc cua mảng 
		* return 
		* /
	//bt3 viết hàm str-upper nhận vào 1 cái chuỗi string 
	//và chuyển chuỗi đó thành chuỗi in hoa.
	// kiểm tra ký tự từ a tới z nếu đúng thì trừ đi 32.
	char str[] = "lap trinh ccpp";
	str_upper(str);

	printf("str upper: %s \n", str);
	/**
	* @brief hàm in hoa chuỗi string
	* @param char*: địa chỉ bắt đầu của chuỗi
	*/
}