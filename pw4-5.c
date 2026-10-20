#include <stdio.h>
int main() {
double c;
const double k = 273.15;
while(scanf("%lf", &c) == 1) {
  printf("%.2lf\n", c + k);
  return 0;
}
}
