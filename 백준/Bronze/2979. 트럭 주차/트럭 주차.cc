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
    int a, b, c, t1_s, t1_e, t2_s, t2_e, t3_s, t3_e, max_time;
    int total = 0;
    
    cin >> a >> b >> c >> t1_s >> t1_e >> t2_s >> t2_e >> t3_s >> t3_e;
    b *= 2;
    c *= 3;
    max_time = max({t1_e, t2_e, t3_e});

    for(int i = 1; i <= max_time; i++){
        int t_num = 0;
        if(i >= t1_s && i < t1_e){
            t_num += 1;
        }
        if(i >= t2_s && i < t2_e){
            t_num += 1;
        }
        if(i >= t3_s && i < t3_e){
            t_num += 1;
        }

        switch(t_num){
            case 1:
                total += a;
                break;
            case 2:
                total += b;
                break;
            case 3:
                total += c;
                break;
            default:
                break;
        }
    }

    cout << total << "\n";

    return 0;
}