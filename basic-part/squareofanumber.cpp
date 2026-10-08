#include<iostream>
using namespace std;
float square(float n){
    return n*n;
}
int main(){
    cout<<"Calculating Square of a number."<<endl<<"Enter number: ";
    float number;
    cin>>number;
    float sq = square(number);
    cout<<"Square is:"<<sq;
    
    return 0;
}