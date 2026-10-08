#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<" Calculating Reminder of Numbers"<<endl<<"Enter Divident:";
    cin>>x;
    cout<<"Enter devisor:";
    cin>>y;
    cout<<"Reminder of X/Y = "<<x%y<<endl;
    int a=5,b=18,c;
    c= a%b; // a%b=a if a<b.
    cout<<c<<endl;
    c=a%a; // a%a=a
    cout <<c<<endl;
    c= a%(-b); // a%(-b)= a%b.
    cout<<c<<endl;
    c = (-a)%b; // -a%b=-[a%b]
    cout<<c;
    return 0;

}