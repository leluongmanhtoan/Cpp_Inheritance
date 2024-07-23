#pragma once
#include "Account.h"

class SavingAccount :public Account {
public:
	double int_rate;
	SavingAccount();
	~SavingAccount();
	void deposit(double amount);
	void withdraw(double amount);
};
