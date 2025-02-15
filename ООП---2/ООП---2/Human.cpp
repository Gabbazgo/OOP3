#include "human.h"
#include <iostream>


using namespace std;

Human::Human() { 
	age = 0;
	weight = 0;
	height = 0;

	cout << "����� ������������ �� ��������� ������ Human : Human()" << endl;
}

Human::Human(int a, int w, int h) {
	age = a;
	weight = w;
	height = h;

	cout << "����� ������������ � ���������� ������ Human : Human(" << age << "," << weight << ","<<height<<")" << endl;
}

Human::Human(Human& black) {
	age = black.age;
	weight = black.weight;
	height = black.height;

	cout << "����� ������������ ����������� ������ Human : Human(Human& gay)" << endl;
}

void Human::Run(int w) {
	weight -= w;
	cout << "����� ������ Run (" << weight << ")" << endl;
}

void Human::Print() {
	cout << "�������� age: " << age << " // �������� weight: " << weight << " // �������� height: " << height;
}

int Human::GetAge() {
	return age;
}

int Human::GetWeight() {
	return weight;
}

int Human::GetHeight() {
	return height;
	
}

const char* Human::GetType() {
	return "Human";
}

void Human::Mode() {
	cout << "���� = " << endl;
	cin >> height;

	cout <<"��� = "<< endl;
	cin >> weight;

	cout << "������� = " << endl;
	cin >> age;
} 

Human :: ~Human() {
	cout << "����� ����������� ~Human()" << endl;
}

/* */

Man::Man() : Human(),power(0) {
	
	cout << "����� ������������ �� ��������� Man :: Man()" << endl;
}

Man::Man(int a, int w, int h, int p) : Human(a, w, h), power(p) {

	cout << "����� ������������ � ����������� Man :: Man(" << age << "," << weight << "," << height << "," << power << ")" << endl;
}

void Man::Print() {
	Human::Print();
	cout << " // �������� ����: " << " " << power;
}

Man::Man(Man& man) :Human(man) {
	power = man.power;
}

void Man::SetPower(int p) {
	power = p;
}

const char* Man::GetType() {
	return "Man";
}
void Man::Mode() {
	Human::Mode();
	cout << "���� = " << endl;
	cin >> power;
}

Man :: ~Man() {
	cout << "����� ����������� ������ Man" << endl;
}

/* */

Baby::Baby() :Man() {
	dex = 0;
	cout << "����� ������������ �� ��������� Baby :: Baby()" << endl;
}

Baby::Baby(int a, int w, int h, int p, int d) : Man(a, w, h, p) {
	dex = d;
	cout << "����� ������������ � ����������� Baby :: Baby(" << age << "," << weight << "," << height << "," << power << "," << dex << ")" << endl;
}

void Baby::Print() {
	Man::Print();
	cout << "�������� ��������" << " " << dex << endl;
}

Baby::Baby(Baby& baby) :Man(baby) {
	dex = baby.dex;
}

void Baby::SetDex(int d) {
	dex = d;
}

Baby :: ~Baby() {
	cout << "����� ����������� ������ Baby" << endl;
}

/* */

Woman::Woman() {
	param = new Human;
	cout << "����� ������������ �� ��������� ������ Woman: Woman()" << endl;
}

Woman::Woman(Woman& woman) {
	param = new Human(woman.param->GetAge(), woman.param->GetWeight(), woman.param->GetHeight());
	cout << " ����� ������������ ����������� ������ Woman: Woman(Woman& woman)" << endl;
}

Woman::Woman(Human& _param) {
	param = new Human(_param.GetAge(), _param.GetWeight(), _param.GetHeight());
	cout << "����� ������������ � ����������� ������ Woman(Human& _param)" << endl;
}

Human* Woman::GetParam() {
	return param;
}

void Woman::SetParam(Human& _param) {
	param = new Human(_param);
}

void Woman::GetVozr() {

	if (param->GetAge() < 16)
		cout << "�������" << endl;

	if (param->GetAge() > 16 && param->GetAge() < 30)
		cout << "�������" << endl;

	if (param->GetAge() > 30)
		cout << "�������" << endl;
}

Woman::~Woman() {
	cout << "����� ����������� ������ Woman" << endl;
}