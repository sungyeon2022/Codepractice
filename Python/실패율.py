def solution(N, stages):
    answer = []
    dj = len(stages)
    nan = {}
    for i in range(1,N+1):
        if i==N:

        else:
            nan[i]=float(stages.count(i)/dj)
            dj-=stages.count(i)
            print(dj)
    print(nan)
a=5
n=[2, 1, 2, 6, 2, 4, 3, 3]
solution(a,n)
