#include<iostream>
using namespace std;

int main() {
    int num;
    int rem;
    int sum = 0;
    cout<<"enter the value of num:" <<endl;
    cin>>num;
    while (num > 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout<<"sum of the digts in num is: "<<sum<<endl;
    return 0;
}
