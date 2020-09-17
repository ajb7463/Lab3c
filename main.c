// Author: Alexander Barr ajb7463@psu.edu
// Collaborator: Jason Xiong xpx5059@psu.edu
// Collaborator: 
// Collaborator:
// Section: 10
// Breakout: 5

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n<1){
    return(0);
  }
  else{
    return(n%10 + sum_n(n-1));
  }
}

void print_n(const char *s, int n){
  if (n>=1){
    printf("%s\n", s);
    n = n-1;
      print_n(s, n);
  }
else 
  {

  }
}

int main(void) {
  int n = atof(readline("Enter an int: "));
  printf("sum is %i.\n",sum_n(n));
  print_n(readline("Enter a string: "), n);
  return 0;
}