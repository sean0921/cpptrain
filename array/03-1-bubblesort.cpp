#include <iostream>
using namespace std;

int main(void) {

    int n;
    cout << "How many numbers you want to sort: ";
    cin >> n;
    float array[n], temp_variable;

    for (int i=0; i<n; i=i+1) {
        cout << "No. " << i+1 << ": ";
        cin >> array[i];
    }
    
    cout << "Before sort: \n";
    for (int i=0; i<n; i=i+1) {
        cout << array[i] << " ";
    }

    //bubble sort
    for (int i=0; i<n; i=i+1) {
        for (int j=0; j<n; j++) {
            if (array[i] < array[j]) {
                temp_variable = array[i];
                array[i] = array[j];
                array[j] = temp_variable;
            }
        }
    }
    cout << "\n";
    cout << "Sorted from small to large: \n";

    for (int i=0; i<n; i=i+1) {
        cout << array[i] << " ";
    }
    cout << "\n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;

}
