# Implementation of quick sort in python

def partition(l,left,right):
       pivot=l[right]
       i=-1
       for j in range(0,right):
              if l[j]<=pivot:
                     (l[i+1],l[j])=(l[j],l[i+1])
                     i=i+1
       (l[i+1],l[right])=(l[right],l[i+1])
       return i+1

def quicksort(l,left,right):
       print("Hello")
       if right>left:
              q=partition(l,left,right)
              quicksort(l,left,q-1)
              quicksort(l,q+1,right)

l=[]
l=list(map(int,input().split()))
n=len(l)
print(l)
r=0
quicksort(l,r,n-1)
print(l)
