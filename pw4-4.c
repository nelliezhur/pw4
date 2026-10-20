#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
int i = 0;
float m = 0.0;
float t;
while(i < n) {
scanf("%f", &t);
++i;
m+=t;
}
printf("%.6f\n", n * m / 2);
return 0;
}
