//
//  main.cpp
//  A7830
//
//  Created by Faxin Xu on 2024/11/23.
//
#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i <n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            cout << a[i] << endl;
        }
    }
    return ;
}

int main()
{
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
