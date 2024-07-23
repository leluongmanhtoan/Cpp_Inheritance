#pragma once
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;
void display(const vector<Account>& accounts);
void deposit(vector<Account>& accounts, double amount);
void withdraw(vector<Account>& accounts, double amount);

//Overloading Utility helper function for Saving Account class
void display(const vector<Saving_Account>& accounts);
void deposit(vector<Saving_Account>& accounts, double amount);
void withdraw(vector<Saving_Account>& account, double amount);

void display(const vector<Checking_Account>& accounts);
void deposit(vector<Checking_Account>& accounts, double amount);
void withdraw(vector<Checking_Account>& account, double amount);

void display(const vector<Trust_Account>& accounts);
void deposit(vector<Trust_Account>& accounts, double amount);
void withdraw(vector<Trust_Account>& account, double amount);
