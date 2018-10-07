#include<iostream>
#include "stack.h"					// Stack 관련 함수를 Header file 에 저장해놓고 불러와서 이용함.
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
	cout << "Namespace Variable w using : " << a << endl;		// Local Variable 이 출력된다.	ex1 과 ex2 가 충돌될땐, ex1(앞의 값)이 출력되는 듯.

	cout << "\n---------------Test of Reference Variable-------------------" << endl;
	int b = 100;
	int &rb = b;
	int *pb = &b;

	cout << "Local Variable : " << b << endl;
	cout << "Reference Variable : " << rb << endl;		// Direct Access.
	cout << "Pointer Variable : " << pb << endl;
	cout << "Pointer Variable : " << *pb << endl;		// Undirect Access.

	cout << "\n---------------Test of Dynamic Allocation-------------------" << endl;
	int *pi = new int;		// 포인터 변수로 동적할당 받는 것이기에, 주소값이 저장된다.

	cout << "Dynamic Allocation : " << pi << endl;
	cout << "Dynamic Allocation : " << *pi << endl;
	*pi = 100;
	cout << "Dynamic Allocation : " << pi << endl;		// 100이 저장되어있는 주소값이 출력됨.
	cout << "Dynamic Allocation : " << *pi << endl;		// 저장된 주소값의 실제 값인 100이 출력됨.

	int* &rpi = pi;
	cout << "Dynamic Allocation : " << rpi << endl;		// 어렵게 생각하지말고, 단순히 pointer type 의 변수 pi 를 rpi 로 새로 지정해주는 것.
	//(당연히 pi처럼 주소값이 저장됨).
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