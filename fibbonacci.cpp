#include <iostream>
using namespace std;

int main() {
    int limit;
    int a = 0;
    int b = 1;
    int temp;
    cout<<"Enter the limit"<<endl;
    cin>>limit;
    cout<<"0 1";
    while(b < limit) {
        temp = a + b;
        a = b;
        b = temp;
        cout<<"  "<<temp;
    }
    cout<< "\n";
    return 0;
}

