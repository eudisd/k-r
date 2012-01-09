#include <stdio.h>
#include <stdlib.h>

/* In a two's complement number representation, our version of itoa does
 * not handle the largest negative number, that is, the value of n equals
 * to -(2^(wordsize-1)).  Explain why not.  Modify it to print that value
 * correctly, regardless of the machine on which it runs.
 *
 * Anwser: Simply put, in 2's complement, we cannot hold the value
 * of the positive number begot from the negation of the largest negative number.
 * This is because the negative number is one value greater than the largest
 * positive number, and so in negating it to positive, there is overflow
 * since the largest negative number cannot be stored as the largest
 * postive number in a word (int).
 */

int main(void)
{
    return 0;
}
