#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Accounts {
private:
    string name;
    double balance;
public:
	Accounts();
    Accounts(string name);
    Accounts(string name,double balance);
    string get_Name();
    double get_Balance();
    void set_Balance(double);
    virtual void withdraw(double amount) = 0;
    virtual void deposit(double amount) = 0;
};

Accounts :: Accounts(){
}

Accounts :: Accounts(string name){
	this -> name = name;
}

Accounts :: Accounts(string name,double balance){
	this -> name = name;
	this -> balance = balance;
}

string Accounts::get_Name (){
	 return this -> name;
}

double Accounts::get_Balance (){
	return this -> balance;
}

void Accounts::set_Balance (double balance){
	this -> balance = balance;
}

class Savings_Account : public Accounts {
private:
    double interest_rate;
    static int withdrawals_this_year;
public:
	static int i ;
	Savings_Account();
	Savings_Account(string name);
	Savings_Account(string name,double balance);
	Savings_Account(string name,double balance,double interest_rate);
    double get_interest_rate();
    void withdraw(double amount) override;
    void deposit(double amount) override;
};

int Savings_Account::withdrawals_this_year = 0;
int Savings_Account :: i = 3;

Savings_Account :: Savings_Account(){
}

Savings_Account :: Savings_Account(string name) : Accounts(name){
}

Savings_Account :: Savings_Account(string name,double balance) : Accounts(name,balance){
}

Savings_Account :: Savings_Account(string name,double balance,double interest_rate) : Accounts(name,balance){
	this -> interest_rate = interest_rate;
}

double Savings_Account :: get_interest_rate(){
	return this ->interest_rate;
}

void Savings_Account::withdraw(double amount) {
	if (amount > 0.2 * get_Balance()) {
        cout << "Each withdrawal must be less than 20% of the account balance." << endl;
        return;
    }
    set_Balance(get_Balance() - amount - 1.50);
}

void Savings_Account::deposit(double amount) {
    if (amount >= 5000) {
        set_Balance(get_Balance() + amount + 50);
    } 
	else {
        set_Balance(get_Balance() + amount);
    }
}

int main() {
    Savings_Account sav_account;
    vector<Savings_Account*> sav_accounts;
    sav_accounts.push_back(new Savings_Account("Batman", 2000));
    sav_accounts.push_back(new Savings_Account("Wonderwoman", 5000, 5.0));

    for (auto& sav_account : sav_accounts) {
        sav_account->withdraw(100);
        sav_account->deposit(3000);
        cout << "Savings account name: " << sav_account->get_Name() << ", Balance: "
             << sav_account->get_Balance() << ", Interest rate: " << sav_account->get_interest_rate() << endl;
    }

    return 0;
}
