#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int rn;
    public:
    void enter_data(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter roll no.";
        cin>>rn;
    }
    void display(){
        cout<<" Student name:"<<name<<endl<<"Student roll no. :"<<rn<<endl;
        
    }
};
int main(){
    student s1,s2;
    s1.enter_data();
    s2.enter_data();
    s1.display();
    s2.display();
    return 0;
}