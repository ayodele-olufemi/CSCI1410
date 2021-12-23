#include <stdio.h>
int main() {
int n = 12345;
int rev = 0, remainder;
while (n!=0) {
remainder = n % 10;
rev = rev * 10 + remainder;
n /= 10;
}
printf("%d", rev);
return 0;
}
