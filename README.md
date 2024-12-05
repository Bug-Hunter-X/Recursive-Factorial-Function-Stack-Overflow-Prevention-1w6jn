# Hack Recursion Stack Overflow Bug
This repository demonstrates a common error in Hack: a stack overflow caused by unbounded recursion in a factorial function.

The `bug.hh` file contains the faulty code. The `bugSolution.hh` file provides a corrected version using iteration to avoid stack overflow.

## How to Reproduce
1. Clone this repository.
2. Compile and run `bug.hh` with a sufficiently large input value (e.g., 10000). Observe the stack overflow error.
3. Compile and run `bugSolution.hh`. Observe the correct results.

## Lessons Learned
- Unbounded recursion can lead to stack overflow errors in Hack, as well as other languages.
- Iterative solutions are often more efficient and less prone to stack overflow than recursive solutions for problems that can be solved iteratively.