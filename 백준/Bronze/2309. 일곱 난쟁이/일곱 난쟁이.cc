#include <bits/stdc++.h>
using namespace std;

int sum = 0, idx1, idx2;
int a[9];

void find_twonumsidx() {
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum - (a[i] + a[j]) == 100){
                idx1 = i;
                idx2 = j;
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);

    /* TestCase */
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    /* Solution */
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+9);

    find_twonumsidx();

    for(int i = 0; i < 9; i++){
        if(i == idx1 || i == idx2){
            continue;
        }
        cout << a[i] << "\n";
    }

    return 0;
}