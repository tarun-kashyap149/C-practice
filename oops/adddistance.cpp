#include <iostream>
using namespace std;

class Distance {
public:
    int feet;
    int inches;

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // takes another Distance as argument, returns new Distance object
    Distance addDistance(Distance d2) {
        Distance temp;
        temp.feet = feet + d2.feet;
        temp.inches = inches + d2.inches;

        // convert inches > 12 to feet
        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp; // returning object
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "\nEnter second distance:\n";
    d2.input();

    d3 = d1.addDistance(d2);
    cout <<endl<< "Sum = ";
    d3.display();

    return 0;
}