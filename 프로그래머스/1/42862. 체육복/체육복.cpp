#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(reserve.begin(), reserve.end());
    
    vector<bool> v(n, true);
    for (int num : lost)
        v[num - 1] = false;
    
    for (int i = reserve.size() - 1; i >= 0; --i)
    {
        for (int j = 0; j < lost.size(); ++j)
        {
            if(reserve[i] == lost[j])
            {
                reserve.erase(reserve.begin() + i);
                v[lost[j] - 1] = true;
                break;
            }
        }
    }
    
    for (int num : reserve)
    {
        --num;
        
        if(num - 1 >= 0 && v[num - 1] == false) {
            v[num - 1] = true;
            continue;
        }
        
        if(num + 1 <= n - 1 && v[num + 1] == false) {
            v[num + 1] = true;
            continue;
        }
    }
    
    int answer = 0;
    for (bool b : v)
        if (b) ++answer;
    
    return answer;
}