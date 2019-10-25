#include <iostream>
using namespace std;

int main(void) {

    int n[] = {1,3,5,7,9};
    int a = sizeof(n);
    int b = sizeof(n[0]);
    int c = a/b;

    cout << "Total memory space of array:  " << a << " bytes\n";
    cout << "Each memory space of array: " << b << " bytes\n";
    cout << "How many elements in an array: " << c << "\n\n";
    for (int i=0;i<c;i++) {
        cout << "n[" << i << "]=" << n[i] << "\n";
    }
#ifdef _WIN32
    system("pause");
#endif
    return 0;

}
