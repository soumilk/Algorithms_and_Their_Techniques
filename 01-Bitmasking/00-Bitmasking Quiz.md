# Quiz Time !!! 

<img width="90" height="90" align ="right" src="https://img.icons8.com/cute-clipart/256/000000/idea.png">

<p> This is the Quiz of Bitwise operators !! </p>

<b>Q1. bitmask set 0 to 1: Bit operation which can be used to set ith bit of a number N from 0 to 1</b>

- [ ] N |= (1 << i)

- [ ] N |= (1 >> i)

- [ ] N &= ~(1 << i)

- [ ] N &= ~(1 >> i)

<b>Q2. bitmask set bit 1 to 0: Bit operation which can be used to set ith bit of a number N from 1 to 0</b>

- [ ] N |= (1 << i)

- [ ] N |= (1 >> i)

- [ ] N &= ~(1 << i)

- [ ] N &= ~(1 >> i)

<b>Q3. bitmask flip ith bit: Bit operation which can be used to flip the ith bit of a number N</b>

- [ ] N ^= (1 >> i)

- [ ] N ~= (1 << i)

- [ ] N ^= (1 << i )

- [ ] N ~= (1 >> i)


<b>Q4. bitmask index of on lsb: Which one line function can be used to get index of the 
least significant bit that is on (first 1 from right to left in binary representation of an integer) ?</b>

- [ ] log2( N ^ -N ) + 1

- [ ] log2( N | -N ) + 1

- [ ] log2( N & -N ) + 1

- [ ] log2( N ~ -N ) + 1


<b>Q5. bitmask count set bits:
```
bool get (int n)
{
    int x = 0;
    while( n )
    {
        x += n&1;
        n = n>>1;
    }
    return x;
}
```
Above function will return :-</b>

- [ ] Total number of divisors of n

- [ ] Total number of factors of n

- [ ] Total number of unset bits in binary representation of a n

- [ ] Total number of set bits in binary representation of a n

<b>Q6. bitmask power of 2: 
```
bool get(int x)
{
     return (x && !(x & (x - 1)));
}
```
Above function will return :-</b>

- [ ] true if X is a perfect square of some integer

- [ ] true if X is a not a perfect square of some integer

- [ ] false if X is a power 2

- [ ] true if X is a power 2

<b>Q7. bitmask multiply by 4: Which of the following bitwise operation can be used to multiply a given number n by 4?</b>

- [ ] n>>2

- [ ] n<<4

- [ ] n<<2

- [ ] n>>4

<b>Q8. bitmask 1<<32 32 bit: long long x = (1 << 32) ; What will be the value of x ?</b>

- [ ] 2<sup>32</sup>

- [ ] Compilation Error

- [ ] 2<sup>31</sup>

- [ ] None of the above

<b>Q9. bitmask 1<<32 64: long long x = (1LL << 32) ; What will be the value of x ?</b>

- [ ] 2<sup>32</sup>

- [ ] Compilation Error

- [ ] 2<sup>31</sup>

- [ ] None of the above

<b>Q10. bitmask swap number xor
```
x = 2;
y = 3;
x = x^y;
y = x^y;
x = x^y;
cout << x << ” “ << y << endl;
```
What will be the output of above C++ code?</b>

- [ ] 2 3

- [ ] 2 2

- [ ] 3 3

- [ ] 3 2

<b>Q11. bitmask ~: int x = ~10; What will be the value of x?</b>

- [ ] 10
- [ ] -10

- [ ] -11

- [ ] 11

<b>Q12. bitmask output1:
```
int x = 7, y = 4, z = 2;
cout << ( x|y&z ) << endl;
```
What will be the output of the above code?</b>

- [ ] 3

- [ ] 7

- [ ] 6

- [ ] 8

<b>Q13. bitmask ouput2
```
int x = 5, y = 2, z = 5;
cout << ( z&x<<y ) << endl;
```
What will be the output of the above code?</b>

- [ ] 5

- [ ] 20

- [ ] 4

- [ ] 1

<b>Q14. bitmask output3
```
int a = 20, b = 2, c = 3, d = 1;
cout << ( a>>b&c+d ) << endl;
```
What will be the output of the above code?</b>

- [ ] 5

- [ ] 2

- [ ] 4

- [ ] 11

