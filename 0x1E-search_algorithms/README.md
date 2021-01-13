0x1E. C - Search Algorithms

# Searching Algorithms :telescope:

Are designed to check for an element or retrieve an element from any data structure where it is stored. Based on the type of search operation, these algorithms are generally classified into two categories:
- Sequential Search: In this, the list or array is traversed sequentially and every
  element is checked. For example: Linear Search.
- Interval Search: These algorithms are specifically designed for searching in sorted
  data-structures. These type of searching algorithms are much more efficient than Linear
  Search as they repeatedly target the center of the search structure and divide the search
  space in half. For Example: Binary Search.

![linear](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png)
Linear Search to find the element “20” in a given list of numbers

![binary](https://www.geeksforgeeks.org/wp-content/uploads/Binary-Search.png)
Binary Search to find the element “23” in a given list of numbers

# Space Complexity :rocket:

Space complexity is the amount of memory used by the algorithm (including the input values to the algorithm) to execute and produce the result.

Memory Usage while Execution
While executing, algorithm uses memory space for three reasons:

- Instruction Space
It's the amount of memory used to save the compiled version of instructions.

- Environmental Stack
Sometimes an algorithm(function) may be called inside another algorithm(function). In such a situation, the current variables are pushed onto the system stack, where they wait for further execution and then the call to the inside algorithm(function) is made.

For example, If a function A() calls function B() inside it, then all th variables of the function A() will get stored on the system stack temporarily, while the function B() is called and executed inside the funciton A().

- Data Space
Amount of space used by the variables and constants.