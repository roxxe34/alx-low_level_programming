#include <stdlib.h>
#include <time.h>
/* i dont i need more headers */

/*
 * Positive anything is better than negative nothing 
*/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if(n>0){
    printf("is positive\n")
      }
  if(n=0){
    printf("is zero\n")
      }
  if(n<0){
    printf("is negative\n")
      }
  return (0);
}
