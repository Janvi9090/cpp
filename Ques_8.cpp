#include<iostream>
#include<string>
using namespace std;
class Performance {
    string time;
    int totalSeats;
    int bookedSeats;
    public:
    Performance(string t, int total){
        time = t;
        totalSeats = total;
        bookedSeats = 0;
}
void bookSeats(int seats) {
    if (bookedSeats + seats<= totalSeats)
    {
        bookedSeats += seats;
        cout<<"Successfully booked"<<seats<<"seat(s) for" <<"time"<<"show." <<endl;

    }else{
        cout<<"Not enough available seats for"<< time <<"show. Only"<<(totalSeats - bookedSeats)<<"seat(s) left."<<endl;
}
}

void showAvailableSeats() {
        cout<<"Available seats for"<<time<<"show: "<<(totalSeats - bookedSeats)<<endl;
}
};
int main() {
Performance show1("1:00 PM", 100);
Performance show2("5:00 PM", 100);
Performance show3("8:30 PM", 100);
int choice, seats;
do {
    cout<<"\nCinema Booking System\n";
    cout<<"1. Book Seats\n";
    cout<<"2. Show Available Seats\n";
    cout<<"3. Exit\n";
    cout<<"Enter your choice:";
    cin>>choice;
    if (choice == 1 || choice == 2) {
        cout<<"Choose show:\n";
        cout<<"1. 1:00 PM\n2. 5:00 PM\n3. 8:30 PM\n";
        int showChoice;
        cin>>showChoice;

    if (showChoice<1 || showChoice>3) {
        cout<<"Invalid show choice.\n";
        continue;
}
    Performance* selectedShow = nullptr;
        if (showChoice == 1) selectedShow = &show1;
        else if (showChoice == 2) selectedShow = &show2;
        else selectedShow = &show3;
        if (choice == 1) {
    cout<<"Enter number of seats to book: ";
    cin>>seats;
    selectedShow->bookSeats(seats);
}else{
    selectedShow->showAvailableSeats();
}
}
}
while(choice != 3);
    cout<<"Thank you for using the Cinema Booking System!"<<endl;
return 0;
}