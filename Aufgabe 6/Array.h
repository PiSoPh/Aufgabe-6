#pragma once
class Array
{
public:
	Array();
	Array(int asize);
	~Array();

	int get(int index);
	void set(int index, int value);
	void resize(int asize);
	int getsize();
	void print();


	//Array* buffArr; //needed for operator overload
	Array* operator+ (Array &obj);
	Array* add(Array& other);

private:
	int arrSize;
	int* arrPtr;
	int* m_resize(int* bufferArray, int newSize);

};

