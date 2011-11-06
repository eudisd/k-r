#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/** Exercise: Write the function htoi(s), which converts a string
 * of hexidecimal digits (including an optional 0x or 0X) into it's 
 * equivalent integer value.  The allowable digits are 0 through 9,
 * a through f, and A through F.
 **/

int htoi(char s[]);

int main(void){
    printf("Digit: %d\n", htoi("0xAF"));
    return 0;
}

int htoi(char s[]){

    int len = strlen(s);

    int i = len, c = 0;
    int hex[6] = {10, 11, 12, 13, 14, 15};
    int n = 0;
    
    while(1){
               
        if( s[0] == '0' && (s[1] == 'X' || s[1] == 'x') ){
           continue;
        } else if ( i > 0 && (s[0] == 'X' || s[0] == 'X') ) {
           continue;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
          n = n + ((int)pow(16.0, (double)c )) * hex[s[i] - 'A'];             
        } else if (s[i] >= 'a' && s[i] <= 'f') {

        } else if (s[i] >= '0' && s[i] <= '9') {

        } else {
            break;        
        }
        --i;
        ++c;
    }
}


