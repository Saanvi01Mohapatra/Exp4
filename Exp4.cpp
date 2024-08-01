//Saanvi Mohapatra
//23070123110
//EnTC B2
//Exp-4 bitwise operator
#include <iostream>
using namespace std;
int main(){
    
    int f, v;
    cout << "\nEnter the first number for bitwise operation: ";
    cin >> f;
    cout << "Enter the second number for bitwise operation: ";
    cin >> v;
    
    cout << "f & v = " << (f & v) << endl;
    cout << "f | v = " << (f | v) << endl;
    cout << "f ^ v = " << (f ^ v) << endl;
    cout << "~(" << f << ") = " << (~f) << endl;
    cout << "~(" << v << ") = " << (~v) << endl;
    return 0;
}


