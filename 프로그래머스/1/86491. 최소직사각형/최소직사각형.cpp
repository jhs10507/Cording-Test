#include <string>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int width_max = 0;
    int height_max = 0;
    
    for (const auto& size : sizes) {
        int width = max(size[0], size[1]);
        int height = min(size[0], size[1]);
        width_max = max(width_max, width);
        height_max = max(height_max, height);
    }
    
    answer = width_max * height_max;
    
    return answer;
}