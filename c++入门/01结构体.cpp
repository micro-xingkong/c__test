#include<iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};
int main() {


	struct Student s = { "张三",20,80 };
	
	Student* p = &s;

	cout << p->age;


}