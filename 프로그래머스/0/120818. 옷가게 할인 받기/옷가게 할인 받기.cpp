#include <string>
#include <vector>

using namespace std;

double discount(int price, int percent) {
    return price - (price * percent / 100.0);
}

int solution(int price) {
    double answer = 0.0;
    int discountRate = 0;
    
    if (price >= 500000)
    {
        discountRate = 20;
    }
    else if (price >= 300000)
    {
        discountRate = 10;
    }
    else if (price >= 100000)
    {
        discountRate = 5;
    }

    answer = discount(price, discountRate);
    
    return answer;
}