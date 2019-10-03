t = int(input())
arr = list(map(int,input().split()))
for i in range(t//2):
  sum = arr[i]+arr[-i-1]
  print(sum//10,sum%10)
    
