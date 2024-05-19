#include <iostream>
using namespace std;
int main(){
    int h;
    cout<< "Enter the height of the cylinder: ";
    cin>> h;
    int r;
    cout<< "Enter the radius of the cylinder: ";
    cin>> r;
    float v;
    v = 3.14*r*r*h;
    cout<< "Volume of the cylinder is : "<< v;
    return 0;
}