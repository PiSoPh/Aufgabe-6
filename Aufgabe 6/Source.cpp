#include "Array.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
	Array* arr1 = new Array(10);
	Array* arr2 = new Array(5);
	Array* arr3 = new Array(50);


	for (int x = 0; x < 10; x++)
	{
		if (x < (arr2->getsize()))
		{
			arr2->set(x, (3 + x));
		}
		arr1->set(x, (20 - x)); //filling the array	
	}

	arr1->print();
	std::cout << std::endl;
	arr2->print();

	//arr3 = arr2->add(*arr1);

	std::cout << (arr2+arr1);
	arr3 = (arr1 + (int)arr2);

	arr3->print();


}