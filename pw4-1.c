#include <stdio.h>
int main(void) {
int const m = 1000;
int lit;
while(scanf("%d", &lit) == 1) {
  if(lit <= 0) {
    break;
  }
  int metr = lit / m;
  int l = lit % m;
  printf("%d м^3, %d л\n", metr, l);
}
return 0;
}
