#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int size = num_list.size();
    int index = 0;
    int num = 0;
    
    for (int i = 0; i < size; i++)
    {
        index = size - i - 1;
        num = num_list[index];
        
        answer.emplace_back(num);
    }
    
    return answer;
}