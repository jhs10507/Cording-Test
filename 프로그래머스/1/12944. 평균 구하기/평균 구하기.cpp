#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0; 
    
    int size = arr.size();
    double sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    answer = sum / size;
    
    return answer ;
}
