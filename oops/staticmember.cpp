#include<iostream>
using namespace std;
class totalcount{
    private:
    int acc;
    static int total;
    public:
    void enter_data(){
        cout<<"Enter age:";
        cin>>acc;
        total++;
    }
    // void dispaly(){
    //     cout<<"count:"<<total;
    // }
    static void no(){
        cout<<"count:"<<total;
    }


};
int totalcount::total=0;
int main(){
    totalcount s1, s2, s3;
    s1.enter_data();
    s2.enter_data();
    s3.enter_data();
    totalcount::no();


}