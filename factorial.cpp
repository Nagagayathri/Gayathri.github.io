#include <iostream>
using namespace std;

int main() {
    int num;
    int fact = 1;
    cout<<"Enter the value of num: "<<endl;
    cin>>num;
    while (num > 0) {
        fact = fact * num;
        num--;
    }
    cout<<"factorial is "<<fact;
    return 0;
}

