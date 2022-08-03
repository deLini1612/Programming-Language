// Ans: Output: 1 2 3 4

// Check
#include <stdio.h>
void rec(int p) {
    if (p>1) rec(p-1);
    printf("%i ",p);
}
int main () {
    rec(4);
    return 0;
}