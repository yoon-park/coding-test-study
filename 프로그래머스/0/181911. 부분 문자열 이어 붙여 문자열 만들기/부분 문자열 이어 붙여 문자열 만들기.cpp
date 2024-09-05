#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    int s = 0;
    int e = 0;
    
    for (int i = 0; i < parts.size(); i++)
    {
        s = parts[i][0];
        e = parts[i][1];
        
        answer += my_strings[i].substr(s, e - s + 1);
    }
    
    return answer;
}