#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class book_data{
    public:
    int book_id;
    int price;
    string b_name;
    public:
    void enter_data(){
        cout<<"Enter book name:";
        cin.ignore();
        getline(cin, b_name);

        cout<<"Enter book id:";
        cin>>book_id;
        cout<<"Enter price in ruppes:";
        cin>>price;
        cout<<"======================"<<endl;
    }
    void display_data(){
        cout<<"Book name:"<<b_name<<endl<<"Book ID: "<<book_id<<endl<<" Book Price : "<<price<<endl<<"========================="<<endl;
    }


};
int main(){
  
    cout<<"Enter book details:"<<endl;
    book_data data[5];
    for(int i=0; i<5; i++){
        cout<<"Book "<<i+1<<" "<<endl;
        data[i].enter_data();
    }
   float thershold;
   cout<<"Enter Thershold price:";
   cin>>thershold;
   cout<<"========================="<<endl;
    cout << "Loading";
    for(int i=0; i<10; i++){
        cout << ".";
        Sleep(300); // 0.3 sec ruke
    }
    cout<<endl;

   for(int i=0; i<5; i++){
    if(data[i].price>thershold){
        
            data[i].display_data();
            Sleep(300);
            
    }
    
   }
  

   
    

    }
