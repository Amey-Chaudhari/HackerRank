"""Chef bought N items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items.

1 polybag can contain at most 10 items. What is the minimum number of polybags needed by Chef?"""

t = int(input())
for i in range(0,t):
    n=int(input())
    
    if (n%10==0):
        print(n//10)
    else:
        print((n//10)+1)
