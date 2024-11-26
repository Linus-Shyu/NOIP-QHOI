//
//  main.cpp
//  A7832
//
//  Created by Faxin Xu on 2024/11/25.
//

#include <bits/stdc++.h>

using namespace std;
using std::cin;
using std::cout;

#define endl '\n';

void solve()
{
    int n,m;
    cin >> n >> m;
    int a[m];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[j];
            cout << a[j] << " ";
        }
        cout << endl;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
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
