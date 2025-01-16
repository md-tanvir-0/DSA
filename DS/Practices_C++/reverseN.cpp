#include<iostream>
using namespace std;

int main() {
    int n = 32145;
    // optionally you can take input from the user using cin >> n;

    int answer = 0; // initially the answer is 0

    while (n != 0) { // while n is not equal to 0, execute the body of the loop
        int last_digit = n % 10; // get the last digit of n
        answer = answer * 10 + last_digit; // append the last digit to the end of the answer
        n /= 10; // remove the last digit of n
    }

    cout << answer << '\n'; // print the answer
    return 0;
}