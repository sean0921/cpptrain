#include <iostream>
using namespace std;

int main(void) {

    int n[] = {1,3,5,7,9};
    int a = sizeof(n);
    int b = sizeof(n[0]);
    int c = a/b;

    cout << "array 總記憶體空間的大小: " << a << " bytes\n";
    cout << "每個陣列元素記憶體空間的大小: " << b << " bytes\n";
    cout << "array 元素個數: " << c << "\n\n";
    for (int i=0;i<c;i++) {
        cout << "n[" << i << "]=" << n[i] << "\n";
    }
#ifdef _WIN32
    system("pause");
#endif
    return 0;

}
