#pragma once

class Human { //����� Human
protected:
	int age, weight, height;

public:
	Human();
	Human(int a, int w, int h);
	Human(Human& Black);

	void Run(int w);
	virtual void Print();
	int GetAge();
	int GetWeight();
	int GetHeight();
	virtual const char* GetType();
	virtual void Mode();

	virtual ~Human();

};

class Man : public Human { // ��������� Human
protected:
	int power;
public:
	Man();
	Man(int a, int w, int h, int p);
	Man(Man& Black);

	void Print();
	void SetPower(int p);
		 const char* GetType();
	 void Mode();
	~Man() override;

};

class Baby : public Man { // ��������� Man
protected:
	int dex;
public:
	Baby();
	Baby(int a, int w, int h, int p, int d);
	Baby(Baby& Black);

	void Print();
	void SetDex(int d);

	~Baby() override;

};

class Woman { // ��������� ����� Woman ��� ���������� �������

private:
	Human* param;

public:
	Woman();
	Woman(Human& age1);
	Woman(Woman& woman);

	void GetVozr();
	Human* GetParam();
	void SetParam(Human& _param);

	~Woman();
};
