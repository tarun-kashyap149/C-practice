#include<iostream>
#include<string>
using namespace std;
float si(float p, float t, float r=8.25){
    return (p*r*t)/100;
}
int main(){
    float principle, time, rate;
    cout<<"calculate Simple Interest:"<<endl<<"Enter Principle:";
    cin>>principle;
    cout<<"Enter time in years:";
    cin>>time;
    cout<<"Want to Enter rate(yes/No):";
    string choose;
    cin>>choose;
    if(choose=="yes" || choose=="YES" || choose=="Yes"){
        cout<<"Enter rate:";
        cin>>rate;
         
         cout<<"Simple interest= "<<si(principle, time, rate);

    }
    else{
        cout<<"Simple interest= "<<si(principle, time);
    }

    return 0;
}