#include<iostream>
#include "stack.h"					// Stack ���� �Լ��� Header file �� �����س��� �ҷ��ͼ� �̿���.
using namespace std;

namespace ex1
{
	int a = 100;
}

namespace ex2
{
	int a = 300;
}

int main()
{
	// Basic grammar
	/*
	int num1, num2;

	std::cout << "Type num1 : ";
	cin >> num1;

	cout << "Type num2 : ";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	*/

	// Different things with C language.
	/*
	using namespace ex1;
	using namespace ex1;
	int a = 200;

	cout << "---------------Test of Name Space-------------------" <<endl;
	cout << "Local Variable : " << a << endl;
	cout << "Namespace Variable : " << ex1::a << endl;
	cout << "Namespace Variable : " << ex2::a << endl;
	cout << "Namespace Variable w using : " << a << endl;		// Local Variable �� ��µȴ�.	ex1 �� ex2 �� �浹�ɶ�, ex1(���� ��)�� ��µǴ� ��.

	cout << "\n---------------Test of Reference Variable-------------------" << endl;
	int b = 100;
	int &rb = b;
	int *pb = &b;

	cout << "Local Variable : " << b << endl;
	cout << "Reference Variable : " << rb << endl;		// Direct Access.
	cout << "Pointer Variable : " << pb << endl;
	cout << "Pointer Variable : " << *pb << endl;		// Undirect Access.

	cout << "\n---------------Test of Dynamic Allocation-------------------" << endl;
	int *pi = new int;		// ������ ������ �����Ҵ� �޴� ���̱⿡, �ּҰ��� ����ȴ�.

	cout << "Dynamic Allocation : " << pi << endl;
	cout << "Dynamic Allocation : " << *pi << endl;
	*pi = 100;
	cout << "Dynamic Allocation : " << pi << endl;		// 100�� ����Ǿ��ִ� �ּҰ��� ��µ�.
	cout << "Dynamic Allocation : " << *pi << endl;		// ����� �ּҰ��� ���� ���� 100�� ��µ�.

	int* &rpi = pi;
	cout << "Dynamic Allocation : " << rpi << endl;		// ��ư� ������������, �ܼ��� pointer type �� ���� pi �� rpi �� ���� �������ִ� ��.
	//(�翬�� pió�� �ּҰ��� �����).
	cout << "Dynamic Allocation : " << *rpi << endl;
	*/

	// Stack Using C++ (Using Struct and Pointer(link))
	/*
	int value;
	char code;

	cout << "-------------------------------The table of code----------------------------" << endl;
	cout << "P : Push      D : Pop      Q : Quit       T : Top	     	A : Print\n\n";
	while (1)
	{
		cout << "Type the code : ";
		cin >> code;

		switch (code)
		{
		case 'P':
			cout << "Type the value : ";
			cin >> value;
			Push(value);
			break;
		case 'D' :
			Pop();
			break;
		case 'Q' :
			exit(1);
			break;
		case 'T' :
			Top();
			break;
		case 'A' :
			Print();
			break;
		}
	}
	*/
} 