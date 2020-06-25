#include "Array.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
	Array arr1(10);
	Array arr2(5);


	for (int x = 0; x < 10; x++)
	{
		if (x < (arr2.getsize()))
		{
			arr2.set(x, (3 + x));
		}
		arr1.set(x, (20 - x)); //filling the array	
	}

	arr1.print();
	std::cout << std::endl;
	arr2.print();

	//Operator Overload: +
	Array add = (arr1 + arr2);
	cout << "Add: " << endl;
	add.print();
	cout << endl;

	//Operator Overload: -
	Array subtract = arr1 - arr2;
	cout << "Subtract: " << endl;
	subtract.print();
	cout << endl;

	//Operator Overload: *
	Array multiply = arr1 * arr2;
	cout << "Multiply: " << endl;
	multiply.print();
	cout << endl;

	//Operator Overload: <<
	cout << "Array 1: " << arr1 << endl;
	cout << "Array 2: " << arr2 << endl;

	//Operator Overload: ++
	cout << "Increment: " << ++arr1 << endl;

	//Operator Overload: --
	cout << "Decrement: " << --arr2 << endl;
}