#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int drink = k - n / 10;
    int answer = n * 12000 + drink * 2000;
    return answer;
}