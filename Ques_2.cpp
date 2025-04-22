#include <iostream>
using namespace std;

class Account {
protected:
    string name;
    int accNo;
    string accType;
    float balance;

public:
    // Constructor for base class
    Account(string n, int num, string type, float bal) {
        name = n;
        accNo = num;
        accType = type;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited amount: " << amount << "\nNew balance: " << balance << endl;
    }

    void accInfo() {
        cout << "\nAccount Details:\n";
        cout << "Name: " << name << "\nAccount No.: " << accNo << "\nType: " << accType << "\nBalance: " << balance << endl;
    }

    float getBalance() {
        return balance;
    }

    void setBalance(float b) {
        balance = b;
    }
};

// SavingAccount uses constructor to call base constructor
class SavingAccount : public Account {
public:
    SavingAccount(string n, int num, string type, float bal) : Account(n, num, type, bal) 
    {

    }

    void addInterest(float rate, int time) {
        float interest = (balance * rate * time) / 100;
        balance += interest;
        cout << "Interest added: " << interest << "\nNew Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance to withdraw." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn amount: " << amount << "\nNew balance: " << balance << endl;
        }
    }
};

// CurrentAccount also calls base constructor
class CurrentAccount : public Account {
    const float minBalance = 3000;
    const float penalty = 500;

public:
    CurrentAccount(string n, int num, string type, float bal) : Account(n, num, type, bal) {}

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance to withdraw." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn amount: " << amount << "\nNew balance: " << balance << endl;
        }
    }

    void checkMinBalance() {
        if (balance < minBalance) {
            balance -= penalty;
            cout << "Balance below minimum. Penalty of " << penalty << " charged.\nNew balance: " << balance << endl;
        }
    }
};

int main() {
    string name, accType;
    int accNo, choice, option;
    float initialBalance, amount;

    cout << "Enter your name: ";
    cin.ignore(); // clear newline from buffer
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accNo;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    cout << "Choose Account Type:\n1. Saving Account\n2. Current Account\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            accType = "Saving";
            SavingAccount sa(name, accNo, accType, initialBalance);

            do {
                cout << "\n--- Saving Account Menu ---\n";
                cout << "1. Deposit\n2. Withdraw\n3. Add Interest\n4. Show Info\n5. Exit\nEnter choice: ";
                cin >> option;

                switch (option) {
                    case 1:
                        cout << "Enter deposit amount: ";
                        cin >> amount;
                        sa.deposit(amount);
                        break;
                    case 2:
                        cout << "Enter withdrawal amount: ";
                        cin >> amount;
                        sa.withdraw(amount);
                        break;
                    case 3:
                        float rate;
                        int time;
                        cout << "Enter interest rate (%): ";
                        cin >> rate;
                        cout << "Enter time (years): ";
                        cin >> time;
                        sa.addInterest(rate, time);
                        break;
                    case 4:
                        sa.accInfo();
                        break;
                    case 5:
                        cout << "Exiting Saving Account..." << endl;
                        break;
                    default:
                        cout << "Invalid option!" << endl;
                }
            } while (option != 5);
            break;
        }

        case 2: {
            accType = "Current";
            CurrentAccount ca(name, accNo, accType, initialBalance);

            do {
                cout << "\n--- Current Account Menu ---\n";
                cout << "1. Deposit\n2. Withdraw\n3. Check Min Balance\n4. Show Info\n5. Exit\nEnter choice: ";
                cin >> option;

                switch (option) {
                    case 1:
                        cout << "Enter deposit amount: ";
                        cin >> amount;
                        ca.deposit(amount);
                        break;
                    case 2:
                        cout << "Enter withdrawal amount: ";
                        cin >> amount;
                        ca.withdraw(amount);
                        break;
                    case 3:
                        ca.checkMinBalance();
                        break;
                    case 4:
                        ca.accInfo();
                        break;
                    case 5:
                        cout << "Exiting Current Account..." << endl;
                        break;
                    default:
                        cout << "Invalid option!" << endl;
                }
            } while (option != 5);
            break;
        }

        default:
            cout << "Invalid account type selected!" << endl;
    }

    return 0;
}
