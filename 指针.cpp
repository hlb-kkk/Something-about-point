#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{

	int a = 10;
	int b = 43;

	int* p = &a;//ָ��ָ�����a�ĵ�ַ

	/* *p = 30;
	cout << a << endl;*/ //���Ե�����*p���в������������a=30��


	cout << *p << endl;//������*p������ǽ����ã�
	cout << &a << endl;//&��ȡַ��
	cout << p << endl;

	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;//ָ��������������32λ����ϵͳ��ռ��4�ֽ�


	int arr2[] = {1,2,3,4,5,6,7,8,9};
	int* y = arr2;//ָ������ָ��

	cout << "��һ��Ԫ��: " << arr2[0] << endl;
	cout << "ָ����ʵĵ�һ��Ԫ�أ� " << *y << endl;
	cout << "��һ��Ԫ�أ� " << &arr2[0] << endl;


	for (int m = 0; m < 9; m++)
	{
		cout << *y << endl;
		y++;
	}










	system("pause");
	return 0;
}