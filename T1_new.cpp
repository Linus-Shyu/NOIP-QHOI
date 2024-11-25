//
//  T1_new.cpp
//  ACGO挑战赛#12
//
//  Created by Faxin Xu on 2024/11/25.
//

#include <bits/stdc++.h>

using namespace std;
using std::cout;
using std::cin;

typedef long long ll;

ull x,a,res = 0;
void solve()
{
    cin >> x;
    for(int i = 1; i <= 5; i++)
    {
        cin >> a;
        res = (res + (a % x)) % x;
    }
    if(res == 0)    cout << x;
    else    cout << res;
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
