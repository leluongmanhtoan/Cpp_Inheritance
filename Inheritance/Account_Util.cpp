#include "Account_Util.h"

void display(const vector<Account>& accounts) {
	cout << "\n-------------------- Accounts -----------------------" << endl;
	for (const auto& acc : accounts) {
		cout << acc << endl;
	}
}

void deposit(vector<Account>& accounts, double amount) {
	cout << "\n--------------- Deposit to Account ------------------" << endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount)) {
			cout << "Deposited " << amount << " to " << acc << endl;
		}
		else {
			cout << "Failed deposit of " << amount << " to " << acc << endl;
		}
	}
}

void withdraw(vector<Account>& accounts, double amount) {
	cout << "\n------------- Withdrawing from Account ---------------" << endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << acc << endl;
		}
		else {
			cout << "Failed withdrawal of " << amount << " from " << acc << endl;
		}
	}
}

void display(const vector<Saving_Account>& accounts) {
	cout << "\n----------------- Saving Accounts --------------------" << endl;
	for (const auto& acc : accounts) {
		cout << acc << endl;
	}
}

void deposit(vector<Saving_Account>& accounts, double amount) {
	cout << "\n------------ Deposit to Saving Account ---------------" << endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount)) {
			cout << "Deposited " << amount << " to " << acc << endl;
		}
		else {
			cout << "Failed deposit of " << amount << " to " << acc << endl;
		}
	}
}

void withdraw(vector<Saving_Account>& accounts, double amount) {
	cout << "\n--------- Withdrawing from Saving Account ------------" << endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << acc << endl;
		}
		else {
			cout << "Failed withdrawal of " << amount << " from " << acc << endl;
		}
	}
}

void display(const vector<Checking_Account>& accounts) {
	cout << "\n--------------- Checking Accounts -------------------" << endl;
	for (const auto& acc : accounts) {
		cout << acc << endl;
	}
}

void deposit(vector<Checking_Account>& accounts, double amount) {
	cout << "\n---------- Deposit to Checking Account --------------" << endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount)) {
			cout << "Deposited " << amount << " to " << acc << endl;
		}
		else {
			cout << "Failed deposit of " << amount << " to " << acc << endl;
		}
	}
}

void withdraw(vector<Checking_Account>& accounts, double amount) {
	cout << "\n-------- Withdrawing from Checking Account ----------" << endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << acc << endl;
		}
		else {
			cout << "Failed withdrawal of " << amount << " from " << acc << endl;
		}
	}
}

void display(const vector<Trust_Account>& accounts) {
	cout << "\n--------------- Checking Accounts -------------------" << endl;
	for (const auto& acc : accounts) {
		cout << acc << endl;
	}
}

void deposit(vector<Trust_Account>& accounts, double amount) {
	cout << "\n----------- Deposit to Trust Account ----------------" << endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount)) {
			cout << "Deposited " << amount << " to " << acc << endl;
		}
		else {
			cout << "Failed deposit of " << amount << " to " << acc << endl;
		}
	}
}

void withdraw(vector<Trust_Account>& accounts, double amount) {
	cout << "\n--------- Withdrawing from Trust Account -----------" << endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount)) {
			cout << "Withdrew " << amount << " from " << acc << endl;
		}
		else {
			cout << "Failed withdrawal of " << amount << " from " << acc << endl;
		}
	}
}
