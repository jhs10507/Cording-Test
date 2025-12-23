#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    int answer = 0;
    
    auto comp = [&col](const vector<int>& v1, const vector<int>& v2) -> bool
    {
        int idx = col - 1;
        
        if (v1[idx] == v2[idx])
            return v1[0] > v2[0];
        
        else
            return v1[idx] < v2[idx];
    };
    
    sort(data.begin(), data.end(), comp);
    
    for (int i = row_begin - 1; i < row_end; ++i) {
        int s_i = 0;
        
        for (int j = 0; j < data[i].size(); ++j) {
            s_i += data[i][j] % (i + 1);
        }
        answer = answer ^ s_i;
    }
    
    return answer;
}