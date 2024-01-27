#include <bits/stdc++.h> 
using namespace std;

void bubble_sort(int *ptr, int size);
void re_bubble_sort(int *ptr, int size);
void list_ptr(int *ptr, int size);

int main()
{
	int size;
	
	cin >> size;
	
	int ptr[size];
	
	for(int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
	
	bubble_sort(ptr, size);
	list_ptr(ptr, size);
	cout<<endl;
	
	//best case
	int b_case = 1;
	for(int i = 0; i <size; i++)
	{
		if(ptr[i] < 60)
		{
			b_case = ptr[i];
		}
	}
	if(b_case == 1)
	{
		cout << "best case" << endl;
	}
	else
	{
		cout << b_case << endl;
	}
	
	//worst case
	re_bubble_sort(ptr, size);
	int w_case = 1;
	for(int i = 0; i <size; i++)
	{
		if(ptr[i] >= 60)
		{
			w_case = ptr[i];
		}
	}
	if(w_case == 1)
	{
		cout << "worst case" << endl;
	}
	else
	{
		cout << w_case << endl;	
	}
}

void bubble_sort(int *ptr, int size)
{
	int temp;
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - 1 - i; j++)
		if(ptr[j] > ptr[j + 1])
		{
			temp = ptr[j];
			ptr[j] = ptr[j + 1];
			ptr[j + 1] = temp;
		}
	}
}

void re_bubble_sort(int *ptr, int size)
{
	int temp;
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - 1 - i; j++)
		if(ptr[j] < ptr[j + 1])
		{
			temp = ptr[j];
			ptr[j] = ptr[j + 1];
			ptr[j + 1] = temp;
		}
	}
}

void list_ptr(int *ptr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
}
