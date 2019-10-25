#include <iostream>
using namespace std;

int main() {
    int Score[]={12,34,56};
    cout << "First  Score: " << Score[0] << " dollars\n";
    cout << "Second Score: " << Score[1] << " dollars\n";
    cout << "Third  Score: " << Score[2] << " dollars\n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;
}
