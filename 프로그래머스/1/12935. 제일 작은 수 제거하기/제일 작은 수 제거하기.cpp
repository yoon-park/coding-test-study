#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    sort(arr.begin(), arr.end());
    
    for (auto it = answer.begin(); it != answer.end(); ++it)
    {
        if (*it == *(arr.begin()))
        {
            answer.erase(it);
            break;
        }
    }
    
    if (answer.empty() == true)
    {
        answer.push_back(-1);
    }
    
    return answer;
}