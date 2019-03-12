def knapsack(n,val,weight,W):
       k=[]
       for i in range (0,n+1):
              k.append([])
              for j in range(0,W+1):
                     if i==0 or j==0:
                            k[i].append(0)
                     elif weight[i-1]>j:
                            k[i].append(k[i-1][j])
                     else:
                            k[i].append(max(k[i-1][j],k[i-1][j-weight[i-1]]+val[i-1]))

       print(k)
       res=k[n][W]
       w=W
       i=n
       while i>0 and res>0:
              if res==k[i-1][w]:
                     i-=1
                     continue
              else:
                     print("object with weight ",weight[i - 1]," and value ",val[i-1],"is included")
                     res = res - val[i - 1];
                     w = w - weight[i - 1];
              i-=1

n=int(input("Enter the number of objects"))
val=[]
weight=[]
print("Enter the values of value and weight of the objects")
for i in range(0,n):
       x=int(input())
       val.append(x)
       xx=int(input())
       weight.append(xx)

print("Enter capacity of knapsack")
W=int(input())
knapsack(n,val,weight,W)

