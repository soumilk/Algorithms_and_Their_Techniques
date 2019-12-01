def knapsack(p,w,n,weight):
       cost=0
       for i in range(0,n):
              if w[i]>weight:
                     cost+=(weight/w[i])*p[i]
                     break;
              else:
                     weight-=w[i]
                     cost+=p[i]
       return cost

n=int(input("Enter the number of objects "))
weight=int(input("Enter the weight a knapsack can carry "))
p=[]
w=[]
ratio=[]
for i in range(0, n):
       p.append(int(input("profit of object")))
       w.append(int(input("weight of object ")))
       ratio.append(p[i]/w[i])

print(p,w,ratio)

# sorting of the ratio in decreasing order
for i in range(0,n-1):
       for j in range (i+1,n):
              if ratio[i]<ratio[j]:
                     ratio[i],ratio[j]=ratio[j],ratio[i]
                     w[i],w[j]=w[j],w[i]
                     p[i], p[j]=p[j],p[i]
# Now according to the greedy approach, we need to include the objects which have maximum profit by weight ratio
print(p,w,ratio)
print("The maximum profit is ",round(knapsack(p,w,n,weight),2))
