#include "DynamicArray.h"
#include<Windows.h>

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S];	
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
	cout << "Copy construct";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArray::~DynamicArray()
{
	cout << "Destruct\n";
	if (ptr != 0)
	{
		delete[] ptr;
    }
	Sleep(1000);
}
void DynamicArray::Input()
{
	
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Output()
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "--------";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout<<ptr[i] <<"\t";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "--------";
	}
	cout << endl;
}
int * DynamicArray::GetPointer() 
{
	return ptr;
}
int DynamicArray::GetSize()
{
	return size;
}

void DynamicArray::ReSize(int size_new)
{


	int* ptr_zb;
	int size_zb;
	cout << "Copy construct\n";
	size_zb = size;
	ptr_zb = new int[size_zb];
	for (int i = 0; i < size; i++)
	{
		ptr_zb[i] = ptr[i];
	}

	cout << "add Resize" ;
	size += size_new;
	ptr = new int[size];

	for (int i = 0; i < size_zb; i++)
	{
		ptr[i] = ptr_zb[i];
	}
	for (int i = size_zb; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
	delete[]ptr_zb;
}