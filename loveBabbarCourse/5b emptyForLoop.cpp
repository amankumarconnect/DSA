// Print numbers 1 to 10 using empty for loop
#include <iostream>
using namespace std;

int main() {
  int i = 1;
  for (;;) {
    if (i <= 10)
      cout << i << " ";
    else
      break;
    i++;
  }
  return 0;
}
