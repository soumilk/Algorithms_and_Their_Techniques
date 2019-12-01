'''
This is the program of the fibonacci series using DP memoization
'''

def fibo_memo(n):
       global memo # To use the global array memo
       #Base case
       if n==0 or n==1:
              return n

       # If the memo array has the value of the number
       # then return it from the array 
       if memo[n]!=-1:
              return memo[n]

       ans=fibo_memo(n-1)+fibo_memo(n-2)
       memo[n]=ans
       return ans

# Main function 
n= int(input())

# We have created this memory array to keep the record of all the values that we
# have already computed
memo=(n+1)*[-1]
ans= fibo_memo(n)
print("The fibonacci number for ",n," is: ",ans)



