#include<iostream>
using namespace std;
float simpleinterest( float p, float t, float r){
    return (p*r*t)/100;
}
int main(){
    float x,y,z;
    cout<<"Enter Principle amount:";
    cin>>x;
    cout<<"Enter Time in Years:";
    cin>>y;
    cout<<"Enter Rate:";
    cin>>z;
    float pi = simpleinterest(x,y,z);
    cout<<"Simple interest:"<<pi;   
    
}