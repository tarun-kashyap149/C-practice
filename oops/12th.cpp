#include<iostream>
using namespace std;
class rectangle{
    private:
        int lan;
        int wid;
        public:
        rectangle(){
            lan=4;
            wid=3;

        }
        rectangle(int a, int b){
            lan=a;
            wid=b;
        }
        rectangle( const rectangle &c){
            lan= c.lan;
            wid=c.wid;
        }
        void enter_data(){
            cout<<"Enter langht:";
            cin>>lan;
            cout<<"Enter width:";
            cin>>wid;

        }
        void display_data(){
            int arr=lan*wid;
            cout<<"Area of rectangle:"<<arr<<endl;
        }

};
int main()
{
    rectangle a,b(5,6);
    rectangle d=b;
    a.display_data();
    b.display_data();
    d.display_data();
    return 0;
}
