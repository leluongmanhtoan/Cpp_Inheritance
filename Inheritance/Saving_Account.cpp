#include "Saving_Account.h"

Saving_Account::Saving_Account(string name, double balance, double int_rate)
	:Account{name, balance }, int_rate{ int_rate } {

}

bool Saving_Account::deposit(double amount) {
	amount += (amount * int_rate/100);
	return Account::deposit(amount);
}

bool Saving_Account::withdraw(double amount) {
	return Account::withdraw(amount);
}
ostream& operator<<(ostream& os, const Saving_Account& account) {
	os << "Saving Account balance: " << account.name << " : " << account.balance << " - Interest rate: " << account.int_rate << "%" << endl;
	return os;
}

