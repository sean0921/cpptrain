#include <iostream>
using namespace std;

int main(void) {
    const int n=5;
    int score[n];
    double sum=0, ave=0;
    for(int i=0; i<n; i=i+1) {
        cout << "Score of No." << i+1 << " :";
        cin >> score[i];
    }

    for(int i=0; i<n; i=i+1) {
        sum += score[i];
    }

    ave = sum/n;
    cout << "Total score is: " << sum << ".  Average score is: " << ave << "\n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;
}
