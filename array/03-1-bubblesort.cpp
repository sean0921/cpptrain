#include <iostream>
using namespace std;

int main(void) {

    int n;
    cout << "請輸入要排序的數值個數：";
    cin >> n;
    float array[n], temp_variable;

    for (int i=0; i<n; i=i+1) {
        cout << "請輸入第 " << i+1 << " 個數值：";
        cin >> array[i];
    }
    
    cout << "排序前：\n";
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
    cout << "由小到大排序後：\n";

    for (int i=0; i<n; i=i+1) {
        cout << array[i] << " ";
    }
    cout << "\n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;

}
