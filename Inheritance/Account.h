#pragma once
#include <iostream>
#include <string>
using namespace std;
class Account {
	friend ostream& operator<<(ostream& os, const Account& account);
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr const double def_balance = 0.0;

protected:
	string name;
	double balance;
public:
	//Account();
	Account(string name = def_name, double balance = def_balance);
	~Account();
	
	bool deposit(double amount);
	bool withdraw(double amount);
	//double get_balance() const;
};