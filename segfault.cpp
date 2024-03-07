
#include <iostream>

// Launch the following program in Windows and/or Linux - what happens?
// Then launch it in the debugger, run it and check the value of i when the
// program terminates...

int main() {
  int array[5];
  int i = 0;
  while (true) {
    array[i] = i;
    std::cout << "Assigned element nr: " << i << " value: " << array[i]
              << std::endl;
    i++;
  }
  return 0;
}