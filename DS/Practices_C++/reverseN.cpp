#include<iostream>
using namespace std;

int main() {
    int n;
    cin >>n;

    while (n != 0) { // while n is not equal to 0, execute the body of the loop
        int last_digit = n % 10; // get the last digit of n
        cout << last_digit; // print the last digit
        n /= 10; // remove the last digit of n
    }
    return 0;
}