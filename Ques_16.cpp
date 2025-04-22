#include <iostream>
using namespace std;
class RBI {
public:
virtual void setInterestRate() = 0;
virtual void setMinimumBalance() = 0;
virtual void setWithdrawalLimit() = 0;
virtual ~RBI() {}
};
class SBI : public RBI {
public:
void setInterestRate() override {
cout<<"SBI Interest Rate: 4.5% annually"<<endl;
}
void setMinimumBalance() override {
cout<<"SBI Minimum Balance: Rs. 1000"<<endl;
}
void setWithdrawalLimit() override {
cout<<"SBI Withdrawal Limit: Rs. 25,000 per day"<<endl;
}
};
class ICICI : public RBI {
public:
void setInterestRate() override {
cout<<"ICICI Interest Rate: 5% annually"<<endl;
}
void setMinimumBalance() override {
cout<<"ICICI Minimum Balance: Rs. 2000"<<endl;
}
void setWithdrawalLimit() override {
cout<<"ICICI Withdrawal Limit: Rs. 30,000 per day"<<endl;
}
};
class HDFC : public RBI {
public:
void setInterestRate() override {
cout<<"HDFC Interest Rate: 4.75% annually"<<endl;
}

void setMinimumBalance() override {
cout<<"HDFC Minimum Balance: Rs. 1500"<<endl;
}
void setWithdrawalLimit() override {
cout<<"HDFC Withdrawal Limit: Rs. 35,000 per day"<<endl;
}
};
int main() {
RBI* bank;
SBI sbi;
ICICI icici;
HDFC hdfc;
cout<<"--- SBI Bank Rules ---"<<endl;
bank = &sbi;
bank->setInterestRate();
bank->setMinimumBalance();
bank->setWithdrawalLimit();
cout<<"\n--- ICICI Bank Rules ---"<<endl;
bank = &icici;
bank->setInterestRate();
bank->setMinimumBalance();
bank->setWithdrawalLimit();
cout<<"\n--- HDFC Bank Rules ---"<<endl;
bank = &hdfc;
bank->setInterestRate();
bank->setMinimumBalance();
bank->setWithdrawalLimit();
return 0;
}