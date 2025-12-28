import bisect

n,s,k = map(int,input().split())
a = list(map(int, input().split()))

prefix = [0] *(n+1)
for i in range(1,n+1):
    prefix[i] = prefix[i-1] + a[i-1]
    
idx = bisect.bisect_left(prefix, s)
print(idx)
if idx == -1:
    print(0)
else:
    print(min(idx-1 + k, n))