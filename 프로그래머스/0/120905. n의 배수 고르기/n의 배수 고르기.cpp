#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    int num = 0;
    
    for (int i = 0; i < numlist.size(); i++)
    {
        num = numlist[i];
        
        if (num % n == 0)
        {
            answer.emplace_back(num);
        }
    }
    
    return answer;
}