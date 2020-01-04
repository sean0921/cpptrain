#include <iostream>
using namespace std;
int main () {
    int n=10;
    int *p = &n;
    cout << "value of variable n: "   <<  n << endl;
    cout << "address of variable n: " << &n << endl;
    cout << "value of pointer p: "    <<  p << endl;
    cout << "address of pointer p: "  << *p << endl;
    return 0;
}
