#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (!arr.empty()) {
        auto min_it = min_element(arr.begin(), arr.end());
        arr.erase(min_it);
        answer = arr;
    } else {
        answer = {-1};
    }
    
    return answer;
}