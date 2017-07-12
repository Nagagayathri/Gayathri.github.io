#include <iostream>
using namespace std;
int main() {
    int num;
    int rem;
    int rev = 0;
    cout <<"enter the value of num:" <<endl;
    cin >>num;
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout <<"reverse of num is :" << rev << endl;
    return 0;
}
