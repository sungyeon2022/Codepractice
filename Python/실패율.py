def solution(N, stages):
    nan = {}
    stge_len = len(stages)
    for i in range(1,N+1):
        if stge_len != 0: #if 구문으로 예외 처리 필수
            sc = stages.count(i)
            nan[i] = sc/stge_len
            stge_len -= sc
        else:
            nan[i]=0
    answer = []
    answer = sorted(nan.keys(), key=lambda key: nan[key],reverse=True)
    print(answer)
    return answer

a=5
n=[2, 1, 2, 6, 2, 4, 3, 3]
solution(a,n)
