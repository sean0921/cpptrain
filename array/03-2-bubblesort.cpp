#include <iostream>
using namespace std;

int main(void) {

    int a[]={20,45,98,23,85};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Before Sort: ";

    for(int i=0;i<n; i++) {
        cout << a[i] << " ";
    } 

    cout << "\n";

    int temp=0;

    for(int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if(a[i]<a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\n";

    cout << "After Sort: ";
    for(int i=0;i<n; i++) {
        cout << a[i] << " ";
    } 
    cout << "\n";

#ifdef _WIN32
    system("pause");
#endif
    return 0;

}
