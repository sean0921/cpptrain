#include <iostream>
using namespace std;

int main(void) {
    int total=0;
    int sum=0;

    cout << "請輸入購買貨品件數：";
    cin >> total;

    int price[total];

    for(int i=0;i<total;i=i+1) {
        cout << "請輸入第 " << i+1 << " 件貨品的價格：";
        cin >> price[i];
    }

    for(int k=0;k<total;k=k+1) {
        sum = sum + price[k];
    }

    cout << "全部物品總價為：" << sum << " 元";
    cout << "\n";
#ifdef _WIN32
    system("pause");
#endif
    return 0;
}
