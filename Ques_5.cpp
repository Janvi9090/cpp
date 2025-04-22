#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Book{
    public:
    string title, author, publisher;
    float price;
    int stock;
    Book(string t,string a, string p, float pr, int s){
        title=t;
        author = a;
        publisher=p;
        price=pr;
        stock =s;
    }
    void displaydetail(){
        cout<<"Title is "<<title<<endl;
        cout<<"Author is "<<author<<endl;
        cout<<"Publisher is "<<publisher<<endl;
        cout<<"Price is "<<price<<endl;
        cout<<"Stock is "<<stock<<endl;

    }
    bool checkavailabilityandcost(int requiredcopies){
        if(stock>=requiredcopies){
            float totalcost=price*requiredcopies;
            cout<<"Total cost for "<<requiredcopies<<" Copies is "<<totalcost<<endl;
            stock=stock-requiredcopies;
            return true;

        }else{
            cout<<"Required Copies not in stock"<<endl;
            return false;

        }
    }
};
int main(){
    int numberofbooks;
    cout<<"Enter the number of books in the inventory: ";
    cin>>numberofbooks;
    vector<Book*>inventory;
    cin.ignore();
    for(int i=0; i<numberofbooks;i++){
        string title, author, publisher;
        float price;
        int stock;
        cout<<"Enter title of book"<<i+1<<" ";
        getline(cin,title);
        cout<<"Enter author of book"<<i+1<<" ";
        getline(cin,author);
        cout<<"Enter publisher of book"<<i+1<<" ";
        getline(cin,publisher);
        cout<<"Enter price of the book"<<i+1<<" ";
        cin>>price;
        cout<<"Enter stock for book"<<i+1<<" ";
        cin>>stock;
        inventory.push_back(new Book(title, author, publisher, price, stock));
        cin.ignore();

    }
    string title, author;
    cout<<"Enter the title of the book you are looking for: ";
    getline(cin,title);
    cout<<"Enter the author of the book: ";
    getline(cin,author);
    bool found=false;
    for(Book* book: inventory){
        if(book->title==title && book->author==author){
            found=true;
            book->displaydetail();
            int copies;
            cout<<"Enter number of copies required:  ";
            cin>>copies;
            book->checkavailabilityandcost(copies);
            break;

        }
    }
    if(!found){
        cout<<"Book not found in the inventory."<<endl;

    }
    for(Book *book:inventory){
        delete book;

    }
    return 0;

}