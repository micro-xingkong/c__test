#include<iostream>
#include<string>

using namespace std;

#define MAX 1000

//��ϵ��
struct People {
	string name;
	int sex;
	int age;
	string Phone;
	string Addr;
};
//ͨѶ¼
struct TongXunLu {
	//��ϵ��
	struct People arr[MAX];
	//��ϵ�˸���
	int Num;
};


//���
void AddPeople(struct TongXunLu abs[]) {

	//�ж��Ƿ������
	if (abs->Num >= MAX)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else
	{
		//����
		string Name;
		cout << "������������" << endl;
		cin >> Name;
		abs->arr[abs->Num].name = Name;

		//�Ա�
	flage:
		cout << "�������Ա�" << endl;
		cout << "1 �������� ��" << endl;
		cout << "2 �������� Ů" << endl;

		int sex = 0;
		//������������


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
			cout << "����������" << endl;
			cin.clear();
			cin.ignore();
			goto flage;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->arr[abs->Num].age = age;

		//�绰
		cout << "������绰��" << endl;
		string phone = {};
		cin >> phone;
		abs->arr[abs->Num].Phone = phone;


		//��ַ
		cout << "��������ַ" << endl;
		string Adder = {};
		cin >> Adder;
		abs->arr[abs->Num].Addr = Adder;
		//��������
		abs->Num++;
		system("cls");
	}


}


void ShowPeople(struct TongXunLu abs[]) {
	for (int i = 0; i < abs->Num; i++)
	{
		cout << "������" << abs->arr[i].name << " �Ա�" << abs->arr[i].sex
			<< " ���䣺" << abs->arr[i].age << " �绰��" << abs->arr[i].Phone
			<< " ��ַ��" << abs->arr[i].Addr << endl;
	}
}

void shouMenu() {
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

int main() {

	//����ͨѶ¼�ṹ�����
	struct TongXunLu abs;
	//��ʼ��ͨѶ¼�е���
	abs.Num = 0;

	int in = 0;
	while (true)
	{

		shouMenu();

		cin >> in;

		switch (in)
		{
		case 1:		//1�������ϵ��
			AddPeople(&abs);
			break;
		case 2:		//2����ʾ��ϵ��
			ShowPeople(&abs);
			break;
		case 3:		//3��ɾ����ϵ��

			break;
		case 4:		//4��������ϵ��

			break;
		case 5:		//5���޸���ϵ��

			break;
		case 6:		//6�������ϵ��	

			break;
		case 0:		//0���˳�ͨѶ¼

			cout << "��ӭʹ��ͨѶ¼����ϵͳ" << endl;

			exit(1);
			break;
		}
	}
	return 0;
}