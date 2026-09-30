#include <iostream>
#include <stack>
using namespace std;

int main() {
    int num, temp, digit;
    stack<int> s;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Push each digit into the stack
    while (temp > 0) {
        digit = temp % 10;
        s.push(digit);
        temp /= 10;
    }

    temp = num;

    // Compare digits with stack elements
    while (temp > 0) {
        digit = temp % 10;

        if (digit != s.top()) {
            cout << num << " is not a palindrome." << endl;
            return 0;
        }

        s.pop();
        temp /= 10;
    }

    cout << num << " is a palindrome." << endl;

    return 0;
}