#include <stdio.h>

/*The function that will calculate all the multiplication tables from 0 to 10:*/
int mtable()
{
  /*Variables and values*/
  int begin, end, fnumber, result;

  fnumber = 0;
  begin   = 0;
  end     = 10;
  
  /*While the beginning number is smaller or the same number as the end number, add 1 to our our begin number:*/
  while (begin <= end) {
    result = fnumber * begin;
    printf("%d x %d = %d\n", fnumber, begin, result);
    begin = begin + 1;
    
    /*If the beginning number is bigger than the end number, add 1 to the first number */
    if (begin > end) {
      fnumber = fnumber + 1;
      begin = 0;
      printf("-----------\n");
    }

    /*If the first number is bigger than the end number, finish the program*/
    else if (fnumber > end) {
      printf("Finishing...");
      break;
    }
  };
  return 0;
}

/*The main function that will call the multiplication tables function*/
int main()
{
  /*Main title of our program:*/
  printf("From 0 to 10 multiplication tables!");

  /*Calling the multiplication tables function:*/
  mtable();
  return 0;
}
