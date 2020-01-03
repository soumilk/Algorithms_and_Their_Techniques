'''
Function to calculate the output of nth fibonacci sequence
Nor Recursion Involved
'''
def fibo(n):
       l=[]
       l.append(0)
       l.append(1)
       for i in range(2,n+1):
              l.append(l[i-1]+l[i-2])

       return l[n]

'''
Not even remembering the terms calculated, Pure Bottom-Up
DP, No call stack generated and no recursions are made
'''
def fibo_1(n):
       a,b=0,1;
       c=0;
       for i in range(2, n+1):
           c=a+b;
           a=b;
           b=c;

       return c

n=int(input("Enter the nth term to find the fibonacci number "))
print("Value of ",n,"th term is",fibo(n))
print("Value of ",n,"th term is",fibo_1(n))


