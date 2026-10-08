#include<iostream>
#include<string>
using namespace std;
class account{
    private:
    int ac_nu;
    string holder_name;
    double balance;
    public:
    void create_account(){
        cout<<"Enter account number:";
        cin>>ac_nu;
        cout<<"Enter holder name:";
        cin>>holder_name;
       
    }

    void deposit(){
        double i;
        cout<<"Deposite money:";
        cin>>i;
        balance= balance+i;

    }
    void withdraw(){
        double j;
        cout<<"Enter amount to withdraw:";
        cin>>j;

        if(balance<j){
            cout<<"You dont have sufficient balance!"<<endl;
            cout<<"Total balance:"<<balance;
        }
        else{

        
        balance= balance-j;
        cout<<"Total money withdrow:"<<j<<endl<<"Remaining balance:"<<balance<<endl;
        }

    }
    void display_account(){
        cout<<"Account Number: "<<ac_nu<<endl<<"Name: "<<holder_name<<endl<<"Balance:"<<balance<<endl<<"======Thankyou for using Apna Paraya bank======";
    }
   

};
int main(){
cout<<"Welcome to Apna paraya bank!"<<endl;
account User1;
User1.create_account();
User1.deposit();
User1.withdraw();
User1.display_account();









}