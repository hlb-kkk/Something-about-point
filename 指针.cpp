#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{

	int a = 10;
	int b = 43;

	int* p = &a;//指针指向变量a的地址

	/* *p = 30;
	cout << a << endl;*/ //可以单独对*p进行操作，这样输出a=30；


	cout << *p << endl;//在这里*p代表的是解引用，
	cout << &a << endl;//&是取址符
	cout << p << endl;

	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;//指针型数据类型在32位操作系统下占用4字节


	int arr2[] = {1,2,3,4,5,6,7,8,9};
	int* y = arr2;//指向数组指针

	cout << "第一个元素: " << arr2[0] << endl;
	cout << "指针访问的第一个元素： " << *y << endl;
	cout << "第一个元素： " << &arr2[0] << endl;


	for (int m = 0; m < 9; m++)
	{
		cout << *y << endl;
		y++;
	}










	system("pause");
	return 0;
}