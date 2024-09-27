//#include<iostream>
//using namespace std;
//void main() {
//	//在数组中记录五只小猪的体重打印并找出最终的小猪体重
//
//	int arr[5];
//	int max = 0;
//	int p = 0;
//
//	cout << "输入五只小猪的体重：" << endl;
//
//	for (int i = 0;	i < 5; i++)
//	{
//		cin>>arr[i];
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		cout << "第" << j+1 << "只小猪的体重是：" << arr[j]<<endl;
//		//cout << arr[j];
//	}
//	for (int ib = 0; ib < 5-1; ib++)
//	{
//		
//		if (arr[ib]<arr[ib+1])
//		{
//			max = arr[ib + 1];
//			p = ib + 1;
//		}
//		else {
//			max = arr[ib];
//			p = ib ;
//		}
//
//	}
//	cout << "第" << p+1 << "只小猪最重，体重是：" << max << endl;
//
//}