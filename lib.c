int str_len(char* str)
{
	int count = 0;
	int i;
	while (*str != 0)
	{
		count++;
		str++;
	}
	//tinh toan count 
	return count;

}
int arr_sum(int*arr, int n)
{int sum=0;
	for (int i = 0; i < n; i++)
	{

		sum = sum + *(arr+i);

	}
	return sum;
}
void str_upper(char* str)
{
while(*str !=0)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;

		}
		str++;
	}
}

	
	
