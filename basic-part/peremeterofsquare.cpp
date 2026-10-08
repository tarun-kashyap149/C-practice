#include <iostream>
using namespace std;
inline float peremeter( float side){
    return  4*side;
}
int main(){
    cout<<"calculating Peremeter of square."<<endl;
    float s;
    cout<<"Enter side:";
    cin>>s;
    float per= peremeter(s);
    cout<<"Peremeter is:"<<per;
    return 0;
}