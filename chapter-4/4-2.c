#include <stdio.h> 
#include <ctype.h>
/* Extend atof to handle scientific notation of the form 123.45e-6" where a
 * floating-point number may be followed by e or E and an optionally signed
 * exponent.
 */

double atof(char s[]);

int main(void)
{
    char *f = "0.123";

    printf("String: %s\n Float: %f\n", f, atof(f));    
    return 0;
}

double atof(char s[])
{
    double val, e_val = 1.0, power;
    int i, sign, e_sign = -2;

    for(i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if(s[i] == '+' || s[i] == '-'){
        i++;
    }

    for(val = 0.0; isdigit(s[i]); i++){
        val = 10.0 * val + (s[i] - '0');
    }

    if(s[i] == '.')
        i++;

    for(power = 1.0; isdigit(s[i]); i++){
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    if(s[i] == 'e' || s[i] == 'E')
        i++;

    if(s[i] == '-'){
        e_sign = -1;
        i++;
    } else if (s[i] == '+'){
        e_sign = 1;
        i++;
    } 
    
    for(e_val = 0.0; isdigit(s[i]); i++){
        e_val = 10.0*e_val + (s[i] - '0');
    }

    if(e_sign == -2){
        return sign * val / power;
    } else if (e_sign == -1){

    } else if (e_sign == 1){

    }
}
