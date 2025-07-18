#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int LCM(int a, int b) {
    if (b == 0) {
        return a;
    }
    return (a * b) / GCD(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int temp1 = GCD(n, m);
    int temp2 = LCM(n, m);
    
    answer.push_back(temp1);
    answer.push_back(temp2);
    
    return answer;
}