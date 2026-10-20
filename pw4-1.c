#include <stdio.h>
int main(void) {
int const m = 1000;
int lit;
int inp = scanf("%d", &lit);
void ff()
{
 int metr = lit / m;
 int l = lit % m;
 printf("%d м^3, %d л\n", metr, l);
 inp = scanf("%d", &lit);
}
while(inp) {
  if(lit <= 0 || inp == EOF) {
    break;
    }
  ff();
  }
return 0;
}
