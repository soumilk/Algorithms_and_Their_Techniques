## Dynamic Programming (DP)

Dynamic programming is one of the most important technique to solve the optimization
problems. This is basically a technique or say a way to compute the results faster
for large number of inputs.
<strong> NOTE: </strong> Dp is not a data structure or related to any programming
language. It is just a programming paradigm. It is a special way to quickly solve the
problems or say a trick to reduce the time complexity of the problem.

#### Those who do not remember the past are condemn to repeat it

This technique basically revolves around the past of the algorithmic computations
and either remembering it or generating new results from the existing one.
This means that we keep track of each and every calculation we do and try to use them
for further calculations rather then computation from the start. This reduces the number
of steps and we optimize the algorithm.

It is actually a simple technique which is often used in various questions, once
mastered you can solve every question easily. 

<strong> There are actually teo types of DP </strong>
1. Memoization (Top Down)
2. Pure DP     (Bottom Up)


#### Memoization:
* This is a technique in which we keep record of the previously calculated terms and then compute the terms further, i.e we keep a storage(array) of perviously computed values.
* This technique is also called the Top- Down approach becuase we start to fill the table in a top down manner. 
For eg: 
Compute fifth Fibonacci number, now to compute it we need fourth and for that we need third and so on. So out manin focus element to compute is fibonacci(5). 
This is called a top down DP.
* This technique fails when there are large inputs involved because it need to store data for large numbers which increases space complexity. 
For eg:Suppose that we need to compute the Fibonacci number of 10^8 now in such a case there will be a huge function overhead i.e. we need to store such a large storage to store the function computation. 10^8 = 100 mb.

#### Bottom Up (Pure DP):
* This is a bottom up approach, in this technique we start to compute the terms for the bottom and compute the further terms from the previous to reach the top or destination. 
for eg:
Compute the fifth Fibonacci number, now to compute this, we will initially compute the first element and then keep calculating the further terms on its basis untill we reach the fifth element.
* This is memory efficient method becasue we need not to store every element to compute the answer, i.e. why this approach has better space complexity.
