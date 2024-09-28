#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//		学校正在做毕设，每个老师带领5个学生，总共有三名老师，
// 需求如下，设计学生和老师的结构体，其中在老师的结构体中，有老师的名字和
//一个存放有五名学生的数组作为成员。
//学生成员有姓名、考试分数，创建数组存放老师，通过函数给每个老师及所带的学生赋值，
// 最终打印出老师数据以及老师学生的数据。

struct student {
	string name;
	int score;
};

struct teacher {
	string name;
	struct student stdname[5];
};

void fuzhi(struct teacher * arr,int length) {

	
	//设置名字种子
	string NameSeed = "ABCDEFJ";
	//老师循环
	for (int i = 0; i < length; i++)
	{
		//设置老师的名字
		arr[i].name = "Teacher_";
		arr[i].name += NameSeed[i];
		for (int j = 0; j < 5; j++)
		{
			
			//设置学生的名字
			arr[i].stdname[j].name = "Student_";
			arr[i].stdname[j].name += NameSeed[j];
			//通过随机数设置学生的分数
			arr[i].stdname[j].score = (rand() % 40 + 60);

		}
	}


}

void PrintData(struct teacher  a[], int len) {
	
	for (int i = 0; i < len; i++)
	{
		cout << "第" << i + 1 << "个老师的名字是" << a[i].name<<"学生是：" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t" << a[i].stdname[j].name << " ";
			cout << a[i].stdname[j].score << endl;
		}
	}


}



void main() {
	//设置随机数种子
	srand((unsigned)time(0));

	struct teacher arr[3];

	int len = sizeof(arr) / sizeof(arr[0]);

	fuzhi(arr, len);

	PrintData(arr, len);
}
