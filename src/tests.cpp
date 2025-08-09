#include <iostream>
using namespace std;

class GFG {
    string name;
    int roll;
public:
    // Default constructor
    GFG() {
        name = "Unknown";
        roll = -1;
        cout << "Default constructor called\n";
    }


    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    GFG s1;               // Calls default constructor
    s1.display();
    
    return 0;
}