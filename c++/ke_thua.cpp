#include <iostream>
#include <vector>
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
    void withdraw(vector<Accounts> &accounts, double amount);
    void deposit(vector<Accounts> &accounts, double amount);
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

void Accounts::withdraw(vector<Accounts> &accounts, double amount){
	for(Accounts &account : accounts){
		if (account.get_Balance() > 50) { 
    	    double newBalance = account.get_Balance() - amount - 1.50;
            account.set_Balance(newBalance); 
        }
	}
}

void Accounts::deposit(vector<Accounts> &accounts, double amount){
	for(Accounts &account : accounts){
		if (amount >= 5000) { 
    	    double newBalance = account.get_Balance() + amount + 50;
            account.set_Balance(newBalance); 
        }
        else{
        	double newBalance = account.get_Balance() + amount;
            account.set_Balance(newBalance); 
		}
	}
}

class Savings_Account : public Accounts {
public:
	double interest_rate;
public:
	static int i ;
	Savings_Account();
	Savings_Account(string name);
	Savings_Account(string name,double balance);
	Savings_Account(string name,double balance,double interest_rate);
	double get_interest_rate();
	int withdraw(vector<Savings_Account> &sav_accounts, double amount)override;
    void deposit(vector<Savings_Account> &sav_accounts, double amount)override;
  };
  
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

int Savings_Account::withdraw(vector<Savings_Account> &sav_accounts, double amount){
	if(i>0){
		for(Savings_Account &sav_account : sav_accounts){
			double temp =  sav_account.get_Balance();
			if (amount > (temp*0.2)) { 
			    cout << "each of these must be less than 20% of the account balance"<<endl;
			    return 0;
	    	}
	    	else{
	    		double newBalance = sav_account.get_Balance() - amount - 1.50;
	            sav_account.set_Balance(newBalance); 
			}
		}
	}
	else cout << "should only allow 3 withdrawals per year";
	i--;
}

void Savings_Account::deposit(vector<Savings_Account> &sav_accounts, double amount){
	for(Savings_Account &sav_account : sav_accounts){
		if (amount >= 5000) { 
    	    double newBalance = sav_account.get_Balance() + amount + 50;
            sav_account.set_Balance(newBalance); 
        }
        else{
        	double newBalance = sav_account.get_Balance() + amount;
            sav_account.set_Balance(newBalance); 
		}
	}
}

double Savings_Account :: get_interest_rate(){
	return this ->interest_rate;
}

int main() {
	Accounts Account;
    vector<Accounts> accounts;
    accounts.push_back(Accounts {"Moe", 2000} );
    accounts.push_back(Accounts {"Curly", 5000} );
    Account.withdraw(accounts,1000);
    Account.deposit(accounts,5000);
    for(Accounts account : accounts){
    	cout<<"account name: " << account.get_Name() << ", Balance: " << account.get_Balance() << endl;
	}
	Savings_Account savings_account;
	vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );
    savings_account.withdraw(sav_accounts,100);
    savings_account.deposit(sav_accounts,5000);
    for(Savings_Account sav_account : sav_accounts){
    	cout<<"sav_account name: " << sav_account.get_Name() << ", Balance: " << sav_account.get_Balance() 
		<< ", interest_rate: " << sav_account.get_interest_rate() << endl;
	}
	savings_account.withdraw(sav_accounts,100);
	savings_account.withdraw(sav_accounts,100);
	for(Savings_Account sav_account : sav_accounts){
    	cout<<"sav_account name: " << sav_account.get_Name() << ", Balance: " << sav_account.get_Balance() 
		<< ", interest_rate: " << sav_account.get_interest_rate() << endl;
	}
	savings_account.withdraw(sav_accounts,1000);// rút lần 4 báo lỗi
    return 0;
}
