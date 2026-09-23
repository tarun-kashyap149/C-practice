#include<iostream>
using namespace std;
#define pi 3.14
float volume(float r){
    return (4/3)*pi*r*r*r;
}
int main(){
    cout<<"Calculating  Volume of a sphere."<<endl;
    float radius;
    cout<<"Enter Radius: ";
    cin>>radius;
    float volumeofsphere = volume(radius);
    cout<<"Volume is:"<<volumeofsphere;

    return 0;
}