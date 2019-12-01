'''
 This is the program for the introduction of the recursion.
 Here is the simple recursive approach to find out the factorial of a number.
'''
def fact(n):
       # Base case
       if n==0:
              return 1

       # Recursive case
       ans=n*fact(n-1);
       return ans

n=int(input("Enter the number to find factorial : "))
print(fact(n))
