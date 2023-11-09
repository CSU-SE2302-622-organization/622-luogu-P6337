# 622-luogu-P6337
622计算机算法邀请赛 23/11/9 https://www.luogu.com.cn/problem/P6337
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)cout << 2 << endl;
    else if (n % 2 == 0)cout << (n/2+1)* (n / 2 + 1) << endl;
    else cout <<((n+1)/2+1)*((n-1)/2+1)<< endl;
    return 0;
}