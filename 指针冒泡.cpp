#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;



void bubblesort(int * arr, int len)//这里也可以用int arr[]，同样代表地址指针。
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;

			}
		}
	}
}


void arrprint(int * arr, int len)
{
	for (int u = 0; u < len; u++)
	{
		cout << arr[u]<<" "; 
	}
	cout << endl;
}


int main()
{
	//1.定义一个数组
	int arr1[10] = { 2,4,6,8,9,23,57,62,74,5 };

	cout << sizeof(arr1) << endl;
	cout << sizeof(arr1[0]) << endl;
	int len = sizeof(arr1) / sizeof(arr1[0]);



	//2.循环冒泡函数


	bubblesort(arr1, len);
	arrprint(arr1, len);
	//当数组名传入到函数作为参数时，将被退化为指向首元素的指针。



	system("pause");
	return 0;
}