#include <iostream>
using namespace std;

int main(void) {
    string Fruit[]={"banana","apple","guava"};
    cout << "Fruit 1: " << Fruit[0] << "\n";
    cout << "Fruit 2: " << Fruit[1] << "\n";
    cout << "Fruit 3: " << Fruit[2] << "\n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;
}
