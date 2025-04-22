#include<iostream>
#include<string>
using namespace std;
class Staff{
    public:
    string code;
    string name;
    void getStaffdetails(){
        cout<<"Enter staff code: ";
        cin>>code;
        cout<<"Enter the name: ";
        cin.ignore();
        getline(cin,name);

    }
    void showStaffdetails(){
        cout<<"Code: "<<code<<endl<<"Name: "<<name<<endl;

    }
};
class Teacher: public Staff{
public:
string subject;
string publication;
void getdetails(){
    cout<<"Enter Subject: ";
    getline(cin,subject);
    cout<<"Enter publication: ";
    getline(cin,publication);

}

void showdetails(){
  
    cout<<"Subject: "<<subject<<endl<<"Publication: "<<publication<<endl;
}
};


class Officer: public Staff{

    public:
    string grade;
    void getdetails(){
      
        cout<<"Enter grade: ";
        getline(cin,grade);
    }
    void showdetails(){
      
        cout<<"Grade: "<<grade<<endl;
    }
};

class Typist: public Staff{
    public:
    int speed;
    void getspeed(){
        cout<<"Enter typing speed(WPM): ";
        cin>>speed;
        cin.ignore();

    }
    void showspeed(){
        cout<<"Typing speed: "<<speed<<"WPM"<<endl;

    }

};

class Regular: public Typist{
    public:
    void getdetails(){
      
        getspeed();

    }
    void showdetails(){
        
        showspeed();
        cout<<"Type: Regular Typist "<<endl;
    }
};
class Casual: public Typist{
    public:
    float dailywages;
    void wagesdetails(){
    
        getspeed();
        cout<<"Enter daily wages: ";
        cin>>dailywages;

    }
    void showdetails(){
      
        showspeed();
        cout<<"Type: Casual Typist, Daily Wages: "<<dailywages<<"rupees"<<endl;

    }
};

int main(){
    Teacher t;
    Officer o;
    Regular r;
    Casual c;
    cout<<"Enter Teacher Details: "<<endl;
    t.getStaffdetails();
    t.getdetails();

    cout<<"Enter Officer Details: "<<endl;
    o.getdetails();
    cout<<"Enter Regular Typist Details: "<<endl;
    r.getdetails();
    cout<<"Enter Casual Typist Details: "<<endl;;
    c.wagesdetails();
    cout<<"            Teacher Info-"<<endl;
    t.showdetails();
    cout<<"            Officer Info-"<<endl;
    o.showdetails();
    cout<<"            Regular Typist Info-"<<endl;
    r.showdetails();
    cout<<"            Casual Typist info           "<<endl;
    c.showdetails();
    return 0;
}