#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int temp1=a;
    a = b;
    b = c;
    c = temp1;
    cout<<"a = "<< a <<endl;
    cout<<"b = "<< b <<endl;
    cout<<"c = "<< c <<endl;
    return 0;
}