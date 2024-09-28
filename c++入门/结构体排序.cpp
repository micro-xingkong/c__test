//#include<iostream>
//#include<string>
//using namespace std;
////设计一个英雄的结构体，包括姓名、年龄，性别、；创建结构体数组，数组中存放5名英雄。
////通过冒泡排序将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
//struct hero {
//	string name;
//	int age;
//	char sex;
//};
//void paixu( struct hero arr[], int len) {
//	for (int i = 0; i < len-1; i++){
//		for (int j = 0; j < len-i-1; j++){
//			if (arr[j].age>arr[j+1].age){
//				struct hero p = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = p;
//			}
//		}
//	}
//}
//void printHero(struct hero ar[], int len) {
//	for (int i = 0; i < len; i++){
//		cout << ar[i].name << " " << ar[i].age << " " << ar[i].sex << endl;
//	}
//}
//void main() {
//	struct hero arr[5] = {{"刘备",23,'1'},{"关于",22,'1'},{"张飞",20,'1'},{"赵云",21,'1'},{"貂蝉",19,'0'}};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	paixu(arr, len);
//	printHero(arr, len);
//	
//}
//
