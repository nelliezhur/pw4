#include <stdio.h>
int main() {
int n;
int m = 0;
scanf("%d", &n);
int d = 10;
while(m < n) {
  printf("%d ", d);
  ++m;
  --d;
  }
return 0;
}
