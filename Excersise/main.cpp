#include <iostream>
#include "Account.h"
#include "SavingAccount.h"
using namespace std;
/*	Inheritance	

class Person {
private:
	string name;
	Account account;
public:
	Person();
	~Person();
};

class Account {

};
class Employee : public Person {

};

class Student : public Person {

};

class Faculty : public Employee {

};

class Staff : public Employee {

};

class Administrator :public Employee {

};

*/

/*class Base {
public:
	int a{ 0 };
	void display(){
		cout << a << " " << b << " " << c << endl;
	}
private:
	int b{ 0 };
protected:
	int c{ 0 };
};

class Derived : public Base {
public:
	void access_base_members() {
		a = 100;
		c = 100;
	}
};*/

class Base {
private:
	int value;
public:
	Base() : value { 0 }{
		cout << "Base Constructor! with value: "<< value << endl;
	}
	Base(int v) : value{ v } {
		cout << "Base Constructor with value: " << value << endl;
	}


	~Base() {
		cout << "Base Deconstructor!" << endl;
	}
};

class Derived : public Base {
private:
	int double_value;
public:
	Derived() :Base{}, double_value{ 0 } {
		cout << "Derived Constructor!" << endl;
	}
	Derived(int x) : Base{x},double_value{ x*2 } {
		cout << "Derived (int) overloaded constructor" << endl;
	}

	~Derived() {
		cout << "Derived Deconstructor!" << endl;
	}
};

Derived::Derived(const Derived& other) : Base(other),
{

}

int main() {
	/*cout << "\n----------------Account-------------------\n";
	Account acc{};
	acc.deposit(500);
	acc.withdraw(2000);
	cout << endl;

	Account* p_acc{ nullptr };
	p_acc = new Account();
	(*p_acc).deposit(1000);
	(*p_acc).withdraw(600);
	delete p_acc;

	cout << "\n----------------Saving Account-------------------\n";
	SavingAccount acc2{};
	acc2.deposit(2000);
	acc2.withdraw(500);
	cout << endl;

	SavingAccount* p_acc2{ nullptr };
	p_acc2 = new SavingAccount();
	p_acc2->deposit(1000);
	p_acc2->withdraw(700);
	delete p_acc2;*/


	//Base base;
	//base.a = 100;
	//base.b = 100;
	//base.c = 100;

	//Derived drv;
	//drv.access_base_members();

	//Base a{5};
	Derived b{1000};
	Derived c = b;
}