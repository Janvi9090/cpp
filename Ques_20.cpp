#include<iostream>
using namespace std;
class AddAmount{
    private:
    int amount;
    public:
    AddAmount(){
        amount=50;
    }
    AddAmount(int add){
        amount = 50+add;
}
void displayAmount(){
    cout<<"Final Amount in Piggie Bank: $"<<amount<<endl;
}
};
int main(){
    AddAmount A1;
    A1.displayAmount();
    AddAmount A2(30);
    A2.displayAmount();
    return 0;
}