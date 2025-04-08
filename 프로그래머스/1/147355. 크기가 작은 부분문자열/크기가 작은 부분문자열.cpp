#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int plen = p.length();
    long long pnum = stoll(p);
    
    for (int i = 0; i < t.length() - plen + 1; i++)
    {
        long long temp = stoll(t.substr(i, plen));
        
        if (temp <= pnum)
        {
            answer += 1;
        }
    }
    
    return answer;
}