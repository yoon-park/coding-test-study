#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int size = numbers.size();
    
    for (int i = 0; i < size; i++)
    {
        answer.push_back(numbers[i] * 2);
    }
    
    return answer;
}