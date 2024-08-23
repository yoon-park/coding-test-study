#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    int size = array.size();
    
    for (int i = 0; i < size; i++)
    {
        if (array[i] > height)
        {
            answer += 1;
        }
    }
    
    return answer;
}