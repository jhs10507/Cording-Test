#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);  // 결과 vector를 0으로 초기화
    
    map<string, int> id_idx_map;     // 각 맴버의 index를 Map에 저장
    
    map<string, set<string>> report_map; // [신고된ID, 신고한ID]를 저장할 Map 생성
    
    for (auto i = 0; i < id_list.size(); ++i) //각 맴버의 index를 Map에 저장
    {
        id_idx_map[id_list[i]] = i;
    }
    
    for (auto rep : report) // [신고된ID, 신고한ID]를 Map 에 저장
    {
        stringstream ss(rep); // 문자열 형태의 각 신고 정보를 parsing
        string from, to;
        ss >> from >> to;
        
        report_map[to].insert(from); // report_map의 Value는 Set 형태이므로, 바로 Insert 가능
    }
    
    // report_map을 탐색하며, 신고한 ID의 개수가 K개 이상일 경우, 신고한 ID들의 매일수를 +1
    for (auto iter : report_map) 
    {
        if (iter.second.size() >= k)
        {
            for (auto in_iter : iter.second)
            {
                answer[id_idx_map[in_iter]]++;
            }
        }
    }
    
    return answer;
}