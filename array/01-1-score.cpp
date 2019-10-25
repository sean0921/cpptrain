#include <iostream>
using namespace std;

int main(void) {
    const int n=5;
    int score[n];
    double sum=0, ave=0;
    for(int i=0; i<n; i=i+1) {
        cout << "請輸入第 " << i+1 << " 位選手的成績：";
        cin >> score[i];
    }

    for(int i=0; i<n; i=i+1) {
        sum += score[i];
    }

    ave = sum/n;
    cout << "全隊總成績為：" << sum << " 分，平均為" << ave << " 分 \n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;
}
