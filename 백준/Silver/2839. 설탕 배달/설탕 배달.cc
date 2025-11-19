#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);

    /* TestCase */
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    /* Solution */
    int n;
    int sum = 0;

    cin >> n;

    sum += (n / 5);
    n %= 5;

    while(sum > 0)
    {
        if(n % 3 == 0){
            break;
        }

        sum -= 1;
        n += 5;
    }
    
    if(n % 3 == 0){
        sum += (n / 3);
    }
    else
    {
        sum = -1;
    }

    cout << sum << "\n";

    return 0;
}