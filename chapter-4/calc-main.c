#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'
#define VARIABLE '1'

double var_mem[256];  /* Used to hold the variables */

/* 4-3
 * Given the basic framework, it's straightforward to extend the
 * calculator.  Add the modulus (%) operator and provisions for negative
 * numbers
 *
 * 4-4
 * Add commands to print the top of the stack without popping, to duplicate
 * it, and to swap the top two elements.  Add a command to clear the stack
 *
 * 4-5
 * Add access to library functions like sin, exp, and pow.  See <math.h>
 * in appendix B, Section 4
 *
 * 4-6 
 * Add commands for handling variables.  (It's easy to provide twenty-six 
 * variables with single-letter names.)  Add a variable for the most recently
 * printed value.
  
 
 */

int getop(char s[]);
void push(double e);
double pop(void);
int getop(char s[]);
int getch(void);
void ungetch(int c);

void clear();
void swap();
void printTop();
void dup();

int main(void)
{
    int type;
    double op2;
    char s[MAXOP];
	/* Lower case letters can be used as variables */
    while((type = getop(s)) != EOF) {
        switch(type) {
            case 'C': /* Clear Stack */
                clear();
                break;
            case 'P': /* Print Stack */
                printTop();
                break;
            case 'D': /* Duplicate Stack */
                dup();
                break;
            case 'W': /* Swap Stack */
                swap();
                break;
            case 'S': /* Sin(x) */
                push(sin( pop()));
                break;
            case 'E': /* Exponent */
                push(exp( pop()));
                break;
            case 'O': /* Power */
                op2 = pop();
                push( pow( pop(), op2 ) );
                break;
            case NUMBER:
                push(atof(s));
                break;
            case '%':
                op2 = pop();
                if( op2 != 0 ){
                    push((int)pop() % (int)op2);
                } else {
                    printf("Error: zzero divisor!\n");
                }
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
			case '=':
				/*
				char var = (int)pop(); // Variable 
				if(isalpha(var) && islower(var))
					var_mem[var] = pop(); // Pop value into variable 
				break;	
				*/
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


#define MAXVAL 100 

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL){
        val[sp++] = f;
    } else {
        printf("Error: stack full, can't push %g\n", f);
    }
}

double pop(void)
{
    if(sp > 0)
        return val[--sp];
    else {
        printf("Error: stack empty!\n");
        return 0.0;
    }
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getop(char s[])
{
    int i, c;
    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.') {
		if(isupper(c)) {
			return VARIABLE;
		} else {
        	return c;
		}
	}
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;

}

int getch(void)
{
    return (bufp > 0)? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE){
        printf("ungetch: too many characters!\n");
    } else {
        buf[bufp++] = c;
    }
}

void clear()
{
    sp = 0;
    val[sp] = 0;
}
void swap()
{
    double tmp = val[sp];
    val[sp] = val[sp - 1];
    val[sp - 1] = tmp;
}
void printTop()
{
    printf("Top of Stack Value: %g\n", val[sp]);
}
void dup()
{
    val[sp - 1] = val[sp];
}
