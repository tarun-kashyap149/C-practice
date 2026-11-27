#include<iostream>
using namespace std;
class sum{
    private:
    int*a;
    int*b;
    public :
    sum(){
        a= new int(1);
        b= new int(1);
        cout<<"New created!"<<endl;

    }
    void enter_data(){
        cout<<"Enter A:";
        cin>>*a;
        cout<<"Enter B:";
        cin>>*b;
        cout<<"Enter data called!"<<endl;

    }
    void display_data(){
        cout<<"Sum : "<<*a+*b<<endl;
    }
    ~sum(){
        delete a;
        delete b;
        cout<<"Distructor called!"<<endl;
    }

};
int main(){
    sum s1, s2;
    s1.enter_data();
    s1.display_data();
    s2.display_data();
}

