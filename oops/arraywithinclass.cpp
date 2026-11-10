#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int marks[3];
    void sdata(){
        cout<<"Student name: ";
        cin>>name;
        cout<<"Enter marks of 3 subjects:"<<endl;
        for(int i=0; i<3; i++){
            cout<<i+1<<" : ";
            cin>>marks[i];
        }
    }
    void dd(){
        float total=0;
        for(int i=0; i<3; i++){
             total += marks[i];
        }
        float avg=total/3;
        cout<<"Average marks:"<<avg;
    }

};
int main(){
    student s1;
    s1.sdata();
    s1.dd();
}