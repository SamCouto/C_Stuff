#include <stdio.h>
/*
 * This is an modified exercise form a Java course that I was doing
 */
int main()
{
  //Declaring the variables:
  
  //Character arrays:
  char product1[] = "Computer";
  char product2[] = "Office Desk";
  
  //Normal char variable:  
  char gender = 'F';

  //Numbered variables:
  int age, code;

  age = 30;
  code = 5290;

  float price1, price2, measure;

  price1 = 2100.0;
  price2 = 650.5;
  measure = 53.23456;

  //Printing the information on the screen:
  printf("Products:\n%s, which price is $%f\n", product1, price1);
  printf("%s, which price is $%0.2f\n", product2, price2);

  printf("\nRecord: %d yerars old, code %d and gender %c\n", age, code, gender);

  //Formatting the decimal places with the %f format specifier
  printf("\nMeasure with seven decimal places: %f\nRouded \"three decimal places\": %0.3f\n", measure, measure);
  return 0;
}
