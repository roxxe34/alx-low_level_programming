#include "main.h"
/**
 *main-entry point
 *
 *check if its uppercase
 *return 0
 */
int _isupper(int c); {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  }
  else {
    return 0;
  }
}
