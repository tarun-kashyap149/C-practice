#include<iostream>
#include<string>
using namespace std;
class account{
    private:
    int account_number;
    string holder_name;
    int balance=0;
    int password;
    public:
    void Enter_account_details(){
        cout<<"Enter account number:";
        cin>>account_number;
        cout<<"Enter account holder_name:";
        cin>>holder_name;
        cout<<"Create password:";
        cin>>password;
    }
    void deposit(){
        int i;
        cout<<"Deposite money:";
        cin>>i;
        balance= balance+i;

    }
    void withdraw(){
        int j;
        cout<<"Enter Amount to withdraw:";
        cin>>j;
        if(balance<j){
            cout<<"You dont have sufficient balance!"<<endl;
            cout<<"Total balance:"<<balance;
        }
        else{

        
        balance= balance-j;
        cout<<"Total money withdrow:"<<j<<endl<<"Remaining balance:"<<balance;
        }

    }
    // void display_account(){
    //     cout<<"Enter account number to See balance:";
        
        
    // }

};
int main(){
cout<<"Welcome to Apna paraya bank!"<<endl;
account User1;
User1.Enter_account_details();
User1.deposit();
User1.withdraw();









}