#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    int size = numbers.size();
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    
    double answer = double(sum) / double(size);
    return answer;
}