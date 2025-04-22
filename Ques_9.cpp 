#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Book {
private:
int classMark;
string title;
string author;
bool isCheckedOut;

public:
Book(int cm, string t, string a) : classMark(cm), title(t), author(a), isCheckedOut(false) {}
int getClassMark() const { return classMark; }
string getTitle() const { return title; }
string getAuthor() const { return author; }
bool getStatus() const { return isCheckedOut; }

void checkOut() {
if (!isCheckedOut) {
isCheckedOut = true;
cout<<"The book "<<title<<" has been checked out successfully."<<endl;
} else {
cout<<"Sorry, the book "<<title<<" is already checked out."<<endl;
}
}
void reserve() {
if (isCheckedOut) {
cout<<"The book "<<title<<" is currently checked out. You have reserved it."<<endl;
} else {
cout<<"The book "<<title<<" is available. No need to reserve it."<<endl;
}
}
void inquireStatus() const {
if (isCheckedOut) {
cout<<"The book "<<title<<"is currently checked out."<<endl;
} else {
cout<<"The book "<<title<<"is available."<<endl;
}
}
void displayDetails() const {
cout<<"Class Mark: "<<classMark<<"\nTitle: "<<title<<"\nAuthor: "<<author<<"\nStatus: ";
if (isCheckedOut) {
cout<<"Checked out"<<endl;
} else {

cout<<"Available"<<endl;
}
}
};
void displayLibrarySummary(const vector<Book>& library) {
cout<<"\nLibrary Summary:\n";
for (const auto& book : library) {
book.displayDetails();
cout<<"-------------------------------\n";
}
}

int main() {
vector<Book> library = {
Book(101,"The Great Gatsby", "F. Scott Fitzgerald"),
Book(102,"1984", "George Orwell"),
Book(103, "To Kill a Mockingbird", "Harper Lee"),
Book(104, "The Catcher in the Rye", "J.D. Salinger")
};

int choice;
do {
cout<<"\nLibrary System Menu:\n";
cout<<"1. Check out a book\n";
cout<<"2. Reserve a book\n";
cout<<"3. Inquire about a book\n";
cout<<"4. View library summary\n";
cout<<"5. Exit\n";

cout<<"Enter your choice: ";
cin>>choice;

int classMark;
bool found = false;
switch (choice) {
case 1:
cout<<"Enter class mark of the book to check out: ";
cin>>classMark;
for (auto& book : library) {
if (book.getClassMark() == classMark) {
book.checkOut();
found = true;
break;
}
}
if (!found) {
cout<<"Book not found.\n";
}
break;

case 2:
cout<<"Enter class mark of the book to reserve: ";
cin>>classMark;
for (auto& book : library) {
if (book.getClassMark() == classMark) {
book.reserve();
found = true;

break;
}
}
if (!found) {
cout<<"Book not found.\n";
}
break;

case 3:
cout<<"Enter class mark of the book to inquire: ";
cin>>classMark;
for (auto& book : library) {
if (book.getClassMark() == classMark) {
book.inquireStatus();
found = true;
break;
}
}
if (!found) {
cout<<"Book not found.\n";
}
break;
case 4:
displayLibrarySummary(library);
break;

case 5: // Exit
cout<<"Thank you for using the library system.\n";

break;

default:
cout<<"Invalid choice. Please try again.\n";
}

} while (choice != 5);

return 0;
}