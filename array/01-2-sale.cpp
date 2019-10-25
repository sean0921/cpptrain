#include <iostream>
using namespace std;

int main(void) {
    int total=0;
    int sum=0;

    cout << "Please enter how many items you want: ";
    cin >> total;

    int price[total];

    for(int i=0;i<total;i=i+1) {
        cout << "Price " << i+1 << " : ";
        cin >> price[i];
    }

    for(int k=0;k<total;k=k+1) {
        sum = sum + price[k];
    }

    cout << "Total price is: " << sum << " ";
    cout << "\n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;
}
