#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /* TestCase */
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    /* Solution */
    string s;
    bool is_pal = true;
    cin >> s;

    for(int i = 0; i < (s.size() / 2); i++){
        if(s[i] != s[s.size() - i - 1]){
            is_pal = false;
            break;
        }
    }

    cout << int(is_pal) << "\n";

    return 0;
}