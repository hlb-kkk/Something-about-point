#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;


void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "交换后的值" << endl;
	cout << "a = " << a << endl;
	cout << "b= " << b << endl;


}

void swap2(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "交换后的值" << endl;
	cout << "a = " << *p1 << endl;
	cout << "b= " << *p2 << endl;
}
int main()
{

	int a = 23;
	int b = 65;

	swap1(a, b);
	swap2(&a, &b);

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;



	system("pause");
	return 0;
}