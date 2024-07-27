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
	virtual	~Account() = default;
	
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	//double get_balance() const;
};