#include <stdio.h>
#include <stdint.h>
int main() {
uint16_t m;
uint16_t v;
scanf("%hu %hu", &m, &v);
printf("%llu, %llu, %llu\n", (unsigned long long)(m*v*v/2), (unsigned long long)sizeof(m), (unsigned long long)sizeof(v));
return 0;
} 
