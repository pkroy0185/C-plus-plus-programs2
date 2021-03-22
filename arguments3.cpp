#include<iostream>
#include<cstring>
using namespace std;
class book
{  private:
          int    pages;
          float  price;
          string   name,author;
   public:
          void GetData(string ,string ,int ,float );
          void DisplayData();
};
void book::GetData(string n, string a,int p,float amount)
{
     name=n;
     author=a;
     pages=p;
     price=amount;
}
void book::DisplayData()
{
     cout<<"\nDisplaying Details of book :\n"<<endl;
     cout<<"    NAME : "<<name<<endl;
     cout<<"    AUTHOR : "<<author<<endl;
     cout<<"    PAGES : "<<pages<<endl;
     cout<<"    PRICE : "<<price<<endl;
}
int main()
{
    book b1;
    string n,a;
    int p;
    float amount;
    cout<<"This program takes input about details of a book and displays it.....\n";
    cout<<"Enter Details of book :\n"<<endl;
    cout<<"NAME : ";
    getline(cin,n);
    cout<<"AUTHOR : ";
    getline(cin,a);
    cout<<"PAGES : ";
    cin>>p;
    cout<<"PRICE : ";
    cin>>amount;
    b1.GetData(n,a,p,amount);
    b1.DisplayData();
    return 0;
}