#pragma once
#include "Account.h"

class Saving_Account :public Account {
	friend ostream& operator<<(ostream& os, const Saving_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Saving Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;

protected:
	double int_rate;
public:
	
	Saving_Account(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	bool deposit(double amount);
	~Saving_Account();

};