def solution(n, k):
    answer = 0
    yangkkochi = 12000
    drink = 2000
    if n >= 10 :
        answer = (yangkkochi * n) + (drink * k) - ((n // 10) * 2000)
    else :
        answer = (yangkkochi * n) + (drink * k)
    return answer