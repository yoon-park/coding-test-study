#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int size = numbers.size();
    int num1 = 0;
    int num2 = 0;
    
    sort(numbers.begin(), numbers.end());
    num1 = numbers[size - 1];
    num2 = numbers[size - 2];
    
    answer = num1 * num2;
    
    return answer;
}