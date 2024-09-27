//#include<iostream>
//
//
//using namespace std;
//void main() {
//
//	int arr[5] = { 1,2,3,4,5 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//	cout << endl;
//
//	int start = 0;
//	int end = sizeof(arr)/sizeof(arr[0])-1;
//
//	while (start<end)
//	{
//		int t = arr[start];
//		arr[start] = arr[end];
//		arr[end] = t;
//
//		start++; end--;
//
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//
//}
//
