# This is the program to calculate the exponents much faster in O(log n base 2) time

# Function to calculate the exponent of the number 
def power(num,expo):
    ''' BASE CASE '''
    if expo==0:
        return 1

    ''' RECURSSIVE CASE '''
    ans=power(num,expo//2)
    ans=ans*ans

    ''' IF THE POWER IS ODD THEN MULTIPLY NUMBER ONE MORE TIME ''' 
    if (expo&1):
        ans=ans*num
    return ans

num,expo=map(int,input("Enter the number and the exponent\n").split())
ans=power(num,expo)
print(ans)
