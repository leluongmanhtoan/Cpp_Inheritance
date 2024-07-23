#include <iostream>
#include <vector>
#include "Saving_Account.h"
#include "Account_Util.h"
using namespace std;

int main() {
	cout.precision(2);
	cout << fixed;

	cout << "\n---------------- Account Class ----------------------\n";
	vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{"Toan"});
	accounts.push_back(Account{"Van Anh", 2000});
	accounts.push_back(Account{"Gia Man", 5000});

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);
	cout << "\n------------- Saving Account Class -------------------\n";
	vector<Saving_Account> sav_accounts;
	sav_accounts.push_back(Saving_Account{});
	sav_accounts.push_back(Saving_Account{ "Trung",5000,30 });
	sav_accounts.push_back(Saving_Account{ "Phong",0,20 });
	sav_accounts.push_back(Saving_Account{ "Vinh" ,1000,10});
	sav_accounts.push_back(Saving_Account{ "Long",3000,30 });
	
	display(sav_accounts);
	deposit(sav_accounts, 1000);
	withdraw(sav_accounts, 2000);
	
	cout << "\n------------ Checking Account Class -------------------\n";
	vector<Checking_Account> check_accounts;
	check_accounts.push_back(Checking_Account{});
	check_accounts.push_back(Checking_Account{ "Trang"});
	check_accounts.push_back(Checking_Account{ "Tin", 2000 });
	check_accounts.push_back(Checking_Account{ "Nhu" , 5000 });
	check_accounts.push_back(Checking_Account{ "Nam",3000});

	display(check_accounts);
	deposit(check_accounts, 500);
	withdraw(check_accounts, 1200);

	cout << "\n-------------- Trust Account Class --------------------\n";
	vector<Trust_Account> trust_accounts;
	trust_accounts.push_back(Trust_Account{});
	trust_accounts.push_back(Trust_Account{ "Vu", 2000,2.0 });
	trust_accounts.push_back(Trust_Account{ "Son", 10000,5.0 });
	trust_accounts.push_back(Trust_Account{ "Phuc" , 20000,4.0 });
	trust_accounts.push_back(Trust_Account{ "Tung",30000 });

	display(check_accounts);
	deposit(check_accounts, 1000);
	withdraw(check_accounts, 3000);

	for (int i = 0; i < 5; ++i) {
		withdraw(trust_accounts, 1000);
	}
	
	return 0;
}