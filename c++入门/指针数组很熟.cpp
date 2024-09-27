#include<iostream>
using namespace std;


void maopao(int * arr,int length) {

	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length-j-1; j++)
		{
			
			if (*arr<*arr)
			{
				int t = *arr;
				*arr = *(arr++);
				*(arr++) = t;
			}
		}
	}

	

}


void main() {

	int a[10] = { 0,5,8,4,6,7,2,9,3,1 };

	int * arr = a;
	cout<< a[0] <<" " << *arr << " " << *arr  << endl;

	maopao(a, 10);
	for (int h = 0; h < 10; h++)
	{
		cout << a[h] << " ";
	}
}