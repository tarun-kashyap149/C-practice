#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x=1,y=0;
    cout<<"Before swap: "<<endl<<"A="<<x<<endl<<"B="<<y<<endl;
    swap(x,y);
    cout<<"After swap:"<<endl<<"A="<<x<<endl<<"B="<<y;
    return 0;
}