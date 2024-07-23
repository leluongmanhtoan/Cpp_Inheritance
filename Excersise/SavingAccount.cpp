#include "SavingAccount.h"
#include <iostream>
using namespace std;
SavingAccount::SavingAccount() : int_rate{3.0} {

}

SavingAccount::~SavingAccount() {

}

void SavingAccount::deposit(double amount) {
	cout << "Saving Account deposit called with " << amount << endl;

}

void SavingAccount::withdraw(double amount) {
	cout << "Saving Account withdraw called with " << amount << endl;

}