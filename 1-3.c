// 1.3 - The For Statement
// Same as 1.2, except it's a for loop now..

#include <stdio.h>

main() {
  
  int fahr;
  printf("%s\t%s\n", "fahrenheit", "celsius");
  for (fahr = 0; fahr < 300; fahr = fahr + 20)
    printf("%3d \t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}