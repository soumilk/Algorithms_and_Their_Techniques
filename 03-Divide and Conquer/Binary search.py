# This is the method of the binary search using iteration
def binarysearch(l,t,n):
       high=n-1
       low=0
       while (high>=low):
              mid=(high+low)//2
              if l[mid]==t:
                     print("Element is found at ",mid)
                     return
              elif l[mid]<t:
                     low=mid+1
              else:
                     high=mid-1
       
       print("Element not found")
       return

# This is the method of binary search using recurssion
def bsrec(l,t,high,low):
       if high>=low:
              mid= (high+low)//2
              if l[mid]==t:
                     print("Element found at ",mid)
                     return 1
              if l[mid]<t:
                     bsrec(l,t,high,mid+1)
              else:
                     bsrec(l,t,mid-1,low)
       return -1
              
       
n=int(input("Enter the number of elements to enter in the list "))
l=[]
l=list(map(int,input().split()))
print(l)
t=int(input("Enter the number to search"))
binarysearch(l,t,n)
s=bsrec(l,t,n-1,0);
if s==-1:
       print("The element is not found")
