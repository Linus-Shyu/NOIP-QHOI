//
//  main.cpp
//  A7831
//
//  Created by Faxin Xu on 2024/11/27.
//

#include <bits/stdc++.h>

using namespace std;
using std::cin;
using std::cout;

void solve()
{
    set <int> s;
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    for(auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    
    return ;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    while(T --)
    {
        solve();
    }
    return 0;
}
