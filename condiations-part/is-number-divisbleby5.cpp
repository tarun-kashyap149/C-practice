#include<iostream>
using namespace std;
int main(){
    cout<<"Check if an Integer is Divisible by 5."<<endl<<"Enter value: ";
   int n;
    cin>>n;
    if(n%5==0){
        cout<<n<<" : is divisible by 5.";
    }
    else{
        cout<<n<<" : is not divisible by 5.";
    }
    return 0;
}