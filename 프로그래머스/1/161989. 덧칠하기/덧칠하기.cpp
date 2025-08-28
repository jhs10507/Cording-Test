#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1, temp = section[0];
    
    for (int i = 0; i < section.size(); ++i)
    {
        if (section[i] < temp + m) continue;
        else 
        {
            temp = section[i];
            answer++;
        }
    }
    
    return answer;
}