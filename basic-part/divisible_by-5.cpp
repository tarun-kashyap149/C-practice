#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number:";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<n<<" / 5  gives reminder:"<<n%5<<endl;
        cout<<n<<" : is Divisible by 5!";
    }
    else{
        cout<<n<<" / 5  gives reminder:"<<n%5<<endl;
        cout<<n<<" : Is Not divisible by 5!";
    }
    return 0;

}