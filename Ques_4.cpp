#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int code;
    void getpersoninfo(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter code: ";
        cin>>code;

    }
    void displaypersoninfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;

    }
};

class Account: virtual public person{
    public:
    float pay;
    void getaccountinfo(){
        cout<<"Enter Pay: ";
        cin>>pay;

    }
    void displayaccountinfo(){
        cout<<"Pay: "<<pay<<endl;

    }

};
class Admin: virtual public person{
    public:
    int experience;
    void getadmininfo(){
        cout<<"Enter Experience(in years): ";
        cin>>experience;

    }
    void displayadmininfo(){
        cout<<"Experience: "<<experience<<"years"<<endl;

    }
};
class Master: public Account, public Admin{
    public:
    void getinfo(){
        getpersoninfo();
        getaccountinfo();
        getadmininfo();

    }
    void displayinfo(){
        cout<<"         Master Record "<<endl;
        displaypersoninfo();
        displayaccountinfo();
        displayadmininfo();

    }

    void updateinfo(){
        cout<<"\nUpdate Master Data: ";
        getinfo();

    }
};

int main(){
    Master m;
    cout<<"Enter master Data: "<<endl;
    m.getinfo();
    cout<<"\n Displaying Master data: "<<endl;
    m.displayinfo();
    char choice;
    do{
        cout<<"Do you want to update the information?(y/n): ";
        cin>>choice;
        if(choice=='y'||choice=='Y'){
            m.updateinfo();
            cout<<"Updated Master Data: "<<endl;
            m.displayinfo();
        }
    }while(choice!='n'&&choice!='N');
    return 0;


}