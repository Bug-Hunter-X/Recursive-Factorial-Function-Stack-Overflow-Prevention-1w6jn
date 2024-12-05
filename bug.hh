function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will cause a stack overflow error when called with large value of x because of the recursive function foo(). This can lead to program crashes or unexpected behavior.  The recursive calls continue until the stack is full, exceeding its capacity. This is a common error in recursive functions, if not handled properly.