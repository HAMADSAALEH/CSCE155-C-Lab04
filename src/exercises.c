/**
 * Author(s):Hamad Saleh
 * Date:10/22/2023
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
  int i = 10;
  while (i < 20)
  {
    printf("%d ", i);
    i += 3;
  }
  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop
  for (int k = 3; k > -4; k--)
  {
    printf("%d ", k);
  }
  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5
  for (int j = 1; j <= n; j++)
  {
    if (j == n)
    {
      printf("%d\n", j);
    }
    else
    {
      printf("%d, ", j);
    }

    // 4. Print squares of numbers 1 thru n separated by a comma
    //    except for the last one; example: 1, 4, 9, 16, 25
    for (int j = 1; j <= n; j++)
    {
      int square = j * j;
      if (j == n)
      {
        printf("%d\n", square);
      }
      else
      {
        printf("%d, ", square);
      }
    }

      // 5. Compute the summation of numbers 1 thru n and print
      //    the result; example: 1 + 2 + 3 + 4 + 5 = 15
    int sum = 0;
    for (int j = 1; j <= n; j++)
    {
      sum += j;
      if (j == n)
      {
        printf("= %d\n", sum);
      }
      else
      {
        printf("%d + ", j);
      }
    }
      // 6. Compute the summation of squares of numbers 1 thru n
      //    and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
    int sumOfSquares = 0;
    for (int j = 1; j <= n; j++)
    {
      int square = j * j;
      sumOfSquares += square;
      if (j == n)
      {
        printf("= %d\n", sumOfSquares);
      }
      else
      {
        printf("%d^2 + ", j);
      }
    }
      // 7. Compute the summation of even numbers 1 thru n and print
      //    the result; example (n=5): 2 + 4 = 6
    int sumOfEvens = 0;
    for (int j = 1; j <= n; j++)
    {
      if (j % 2 == 0)
      {
        sumOfEvens += j;
        if (j == n)
        {
          printf("= %d\n", sumOfEvens);
        }
        else
        {
          printf("%d + ", j);
        }
      }
    }
      // 8. Write a solution to the following variation of the FizzBuzz
      //    problem.  Print out integers 1 thru n, one to a line, except
      //    that if the integer is divisible by 7 print "Foo" instead.
      //    If the integer is divisible by 11 print "Bar" instead.  If
      //    the integer is divisible by both 7 and 11, print "FooBar"
      //    instead.
    for (int j = 1; j <= n; j++)
    {
      if (j % 7 == 0 && j % 11 == 0)
      {
        printf("FooBar\n");
      }
      else if (j % 7 == 0)
      {
        printf("Foo\n");
      }
      else if (j % 11 == 0)
      {
        printf("Bar\n");
      }
      else
      {
        printf("%d\n", j);
      }
    }
      return 0;
    }
