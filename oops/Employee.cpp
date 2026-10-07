#include<iostream>
#include<string>

using namespace std;
class employee{
    public:
    int id;
    string emp_name;
    static int total_imp;
    void enter_data(){
        cout<<"Enter Employee name:";
        cin>>emp_name;
        cout<<"Enter Employee id:";
        cin>>id;
        total_imp++;



    }
    void display_data(){
        cout<<"Employee name:"<<emp_name<<endl<<"Employee id:"<<id<<endl;
        


    }
    static void count(){

        cout<<"Total imployees:"<<total_imp;
    }
    

};
int employee::total_imp=0;
int main(){
    
    employee emp1;
    emp1.enter_data();
    emp1.display_data();
    employee emp2;
    emp2.enter_data();
    emp2.display_data();
    
    employee::count(); 
return 0;

}