def mergesort(l):
       if len(l)>1:
              mid=(len(l))//2
              L=l[:mid]
              R=l[mid:]
              mergesort(L)
              mergesort(R)
              i=j=k=0
              while(i<len(L) and j<len(R)):
                     if L[i]<R[j]:
                            l[k]=L[i]
                            i+=1
                            k+=1
                     else:
                            l[k]=R[j]
                            j+=1
                            k+=1
              while i<len(L):
                     l[k]=L[i]
                     k+=1
                     i+=1
              while j<len(R):
                     l[k]=R[j]
                     k+=1
                     j+=1
                     

l=list(map(int,input("Enter the input in single line with spaces ").split()))
print("List before merge sort is ",l)
mergesort(l)
print("List aftr sort",l)
