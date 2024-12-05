function foo(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; ++i) {
    result *= i;
  }
  return result;
}

function main(): void {
  echo foo(5);
}

This iterative version of foo() calculates the factorial without using recursion, avoiding the stack overflow issue.  The loop iterates through the numbers from 1 to x, multiplying the result at each step.  This approach is safer and more efficient for large values of x.