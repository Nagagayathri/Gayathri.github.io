#include <iostream>
using namespace std;

int main() {
    int num;
    int ori;
    int rem;
    int rev = 0;
    cout<<"Enter the value of num:"<<endl;
    cin>>num;
    ori = num;
    while (num > 0) {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    cout<<"reverse is "<<rev<<endl;
    if (ori == rev) {
        cout<<"Is Palindrome"<<endl;
    }
    else {
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}

