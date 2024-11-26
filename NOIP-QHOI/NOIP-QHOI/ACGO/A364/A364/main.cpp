//
//  main.cpp
//  A364
//
//  Created by Faxin Xu on 2024/11/24.
//

#include <iostream>

using i64 = long long;
using namespace std;
using std::cout;
using std::cin;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return ;
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T--)
    {
        solve();
    }
    return 0;
}
