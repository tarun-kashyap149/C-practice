#include<iostream>
using namespace std;
inline void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    cout<<"Swap by reference:"<<endl;
    int x=1,y=0;
    cout<<"Before swap: "<<"X="<<x<<endl<<"Y="<<y<<endl;
    swap(x,y);
    cout<<"After swap:"<<endl<<"X="<<x<<endl<<"Y="<<y;
    return 0;
}