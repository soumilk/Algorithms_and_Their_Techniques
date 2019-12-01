'''
This is the simple recursive program to find the nth term of
fibonacci series

0 1 1 2 3 5 8 13 21 34 ....
'''
def fib(n):
       # Base case
       if n==0 or n==1:
              return n

       # Recursive case
       return fib(n-1)+fib(n-2)
              
n=int(input("Enter the nth term to find : "))
print(fib(n))
