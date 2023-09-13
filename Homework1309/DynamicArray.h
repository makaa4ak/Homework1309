#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int* ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();// rand
	void Output();// ����� �� �������
	int* GetPointer();
	int GetSize();
	void ReSize(int size);


		// ����������� ��������� ������:
		//void ReSize(int size);// ��������� ������� �������  Yes
		//void Sort();// ����������(����� �������� ����������)
		//int Search(int a); // ����� �������� � �������, ���������� ������ ���������� ��., ���� -1.
		//void Reverse(); // �������������� ������������������ ��������� � �������� �������, ������� 12345 -> 54321



};

