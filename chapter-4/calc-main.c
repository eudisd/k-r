#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'
/* 4-3
 * Given the basic framework, it's straightforward to extend the
 * calculator.  Add the modulus (%) operator and provisions for negative
 * numbers
 */

int getop(char s[]);
void push(double e);
double pop(void);

int main(void)
{
    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF) {
        switch(type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if(op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("Error: zero divisor!\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("Error: unknow command? %s\n", s);
                break;

        }

    }
    return EXIT_SUCCESS;
}
