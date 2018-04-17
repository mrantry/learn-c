/* A simple temperture converter
Prints fahrenheit tempertures and their celsius conversions in a table format
For temperatures 0-300 degrees fahrenheit in increments of 20 */
#include <stdio.h>

main()
{
  int fahr, celsius;
  int lower, upper, step;
  
  lower = 0; /* Lower limit of the temp table */
  upper = 300; /* Upper limit of the temp table */
  step = 20; /* Step size */
  
  fahr = lower;
  printf("%s\t%s\n", "fahrenheit", "celsius");
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}