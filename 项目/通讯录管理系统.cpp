#include<iostream>
#include<string>
#include "通讯录管理系统.h"
using namespace std;

#define MAX 1000

//联系人
struct People {
	string name;
	int sex;
	int age;
	string Phone;
	string Addr;
};
//通讯录
struct TongXunLu {
	//联系人
	struct People arr[MAX];
	//联系人个数
	int Num;
};


//添加
void AddPeople(struct TongXunLu abs[]) {

	//判断是否能添加
	if (abs->Num >= MAX)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	else
	{
		//姓名
		string Name;
		cout << "请输入姓名：" << endl;
		cin >> Name;
		abs->arr[abs->Num].name = Name;

		//性别
	flage:
		cout << "请输入性别：" << endl;
		cout << "1 ———— 男" << endl;
		cout << "2 ———— 女" << endl;

		int sex = 0;
		//年龄输入有误
	
		
		cin >> sex;
		/*sex = cin.get()*/;

		/*switch (sex)
		{
		case 1:
			abs->arr[abs->Num].sex = 1;
			break;
		case 2:
			abs->arr[abs->Num].sex = 2;
			break;
		default:
			goto flage;
			
		}*/
		
		if ((int)sex == 1 || (int)sex == 2)
		{
			abs->arr[abs->Num].sex = (int)sex;
		}
		else {
			cout << "您输入有误" << endl;
			cin.clear();
			cin.ignore();
			goto flage;
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->arr[abs->Num].age = age;

		//电话
		cout << "请输入电话：" << endl;
		string phone = {};
		cin >> phone;
		abs->arr[abs->Num].Phone = phone;


		//地址
		cout << "清除输入地址" << endl;
		string Adder = {};
		cin >> Adder;
		abs->arr[abs->Num].Addr = Adder;
		//更新人数
		abs->Num++;
		system("cls");
	}


}

void shouMenu() {
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

int main() {

	//创建通讯录结构体变量
	struct TongXunLu abs;
	//初始化通讯录中的人
	abs.Num = 0;

	int in = 0;
	while (true)
	{

		shouMenu();

		cin >> in;

		switch (in)
		{
		case 1:		//1、添加联系人
			AddPeople(&abs);
			break;
		case 2:		//2、显示联系人

			break;
		case 3:		//3、删除联系人

			break;
		case 4:		//4、查找联系人

			break;
		case 5:		//5、修改联系人

			break;
		case 6:		//6、清空联系人	

			break;
		case 0:		//0、退出通讯录

			cout << "欢迎使用通讯录管理系统" << endl;

			exit(1);
			break;
		}
	}
	return 0;
}