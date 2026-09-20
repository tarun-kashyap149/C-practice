#include<iostream>
using namespace std;
#define  pi 3.14
int main(){
    cout<<"Area of Circle.\n";
    float r,ar;
    cout<<"Enter Radius:";
    cin>>r;
    ar = pi*r*r;
    cout<<"Area of Circle:"<<ar<<endl<<"Formula: Pi*R^2";

    return 0;
}