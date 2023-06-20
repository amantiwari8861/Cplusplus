#include<iostream>
using namespace std;

class ClassG {
public:
    static int get_x() { return x;}
    static int x;
};

int ClassG::x = 6;

int main() {

    int gx1 = ClassG::x;
    int gx2 = ClassG::get_x();
    cout<<" gx1 = "<<gx1<<" gx2 = "<<gx2;
}