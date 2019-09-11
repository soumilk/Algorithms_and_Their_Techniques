# Recursion

* Recursion and Backtracking in computer science is a method where the solution to a problem depends on the solution to smaller instances of the same problem.
Basically what we do in the recursion is we make a solution for the primary case of the problem and for the rest of the part of the problem, we just solve it recursively by applying the same approach again and again until it reaches the base case.
* Bottom line is, divide the problem into smaller subproblems and compute its solution. Repeat until it reaches base case and then combine all those solutions. In this, way we can solve a complex problem.

### Why is Recursion so important?
Although implementing a recursive logic is a little bit tricky for us, it makes our task of solving a complex problem much easier, in fact, some problems are really tough to solve without recursion or via iterative approach, for example, a very famous problem "Tower of Hanoi".
Recursion makes our task easier but it increases the load on the processor because it needs to maintain the record of the recursive call stack, also because of repetitive function calls, it makes it slower then iterative approach if we are implementing the logic of same time complexity.

In every recursion, there are 3 parts :
- Base Case: This is the case when the recursion needs to be stopped.
- Logic/ Border condition: This is the conditions or the logic which we tend to implement again and again in every recursion.
- Recursion condition: After every recursive call we move towards the base case and divide the problem in smaller sub-problem.
