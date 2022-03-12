#Different input technique in python
#Multi input
n=input()
n=int(input())

for i in range(0,n):
  m=int(input())
  
#multi input using split
k = input().split()
print(k) #k=[1,2,3,4,5,6]

#using map
k,m,n = map(int ,input().split(" "))
print(k,m,n)
