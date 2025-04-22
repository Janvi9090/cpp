#include<iostream>
using namespace std;
// Abstract RBI Class
class RBI {
public:
virtual void setInterestRate() = 0;
virtual void setMinimumBalance() = 0;
virtual void setWithdrawalLimit() = 0;
virtual ~RBI() {}
};
// Account Class
class Account {
protected:
string accNumber;
float balance;
public:
Account(string accNum, float initialBalance) {
accNumber = accNum;
balance = initialBalance;
}
void deposit(float amount) {
balance += amount;
cout<<"Deposited Rs. "<<amount<<"New Balance: Rs. "<<balance<<endl;
}
void withdraw(float amount) {
if (amount >balance) {
cout<<"Insufficient balance!"<<endl;
} else {
balance -= amount;
cout<<"Withdrawn Rs. "<<amount<<".Remaining Balance: Rs. "<<balance<<endl;
}
}
float getBalance() const {
return balance;
}
string getAccountNumber() const {
return accNumber;
}
};
// Customer Class

class Customer {
private:
string name;
int age;
Account* account;
public:
Customer(string n, int a, string accNum, float initialBalance) {
name = n;
age = a;
account = new Account(accNum, initialBalance);
}
~Customer() {
delete account;
}
void displayInfo() {
cout<<"Name: "<<name<<", Age: "<<age<<", Account No.: "<<account->getAccountNumber()<<", Balance: Rs. "<<account->getBalance()<<endl;
}
Account* getAccount() {
return account;
}
};
// SBI Class
class SBI : public RBI {
public:
void setInterestRate() override {
cout<<"SBI Interest Rate: 4.5% annually"<<endl;
}
void setMinimumBalance() override {
cout<<"SBI Minimum Balance: Rs. 1000"<<endl;
}
void setWithdrawalLimit() override {
cout<<"SBI Withdrawal Limit: Rs. 25,000/day"<<endl;
}
};
// ICICI Class
class ICICI : public RBI {
public:
void setInterestRate() override {
cout<<"ICICI Interest Rate: 5.0% annually"<<endl;
}
void setMinimumBalance() override {
cout<<"ICICI Minimum Balance: Rs. 2000"<<endl;

}
void setWithdrawalLimit() override {
cout<<"ICICI Withdrawal Limit: Rs. 30,000/day"<<endl;
}
};
// PNB Class
class PNB : public RBI {
public:
void setInterestRate() override {
cout<<"PNB Interest Rate: 4.25% annually"<<endl;
}
void setMinimumBalance() override {
cout<<"PNB Minimum Balance: Rs. 1500"<<endl;
}
void setWithdrawalLimit() override {
cout<<"PNB Withdrawal Limit: Rs. 20,000/day"<<endl;
}
};
int main() {
SBI sbi;
ICICI icici;
PNB pnb;
cout<<"--- RBI Rules for SBI ---"<<endl;
sbi.setInterestRate();
sbi.setMinimumBalance();
sbi.setWithdrawalLimit();
cout<<"\n--- RBI Rules for ICICI ---"<<endl;
icici.setInterestRate();
icici.setMinimumBalance();
icici.setWithdrawalLimit();
cout<<"\n--- RBI Rules for PNB ---"<<endl;
pnb.setInterestRate();
pnb.setMinimumBalance();
pnb.setWithdrawalLimit();
cout<<"\n--- Customer Operations ---"<<endl;
Customer cust1("Aman Sharma", 30, "SBI001", 5000);
cust1.displayInfo();
cust1.getAccount()->deposit(2000);
cust1.getAccount()->withdraw(1000);
cust1.getAccount()->withdraw(7000); // will show insufficient balance
return 0;
}