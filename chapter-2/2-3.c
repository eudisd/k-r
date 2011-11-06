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
    return 0;
}

int htoi(char s[]){

    int len = strlen(s);

    int i = 0;
    int hex[5] = {10, 11, 12, 13, 14, 15};
    int n = 0;
    
    while(1){
               
        if( s[0] == '0' && (s[1] == 'X' || s[1] == 'x') ){
           continue; 
        } else if (s[i] >= 'A' && s[i] <= 'F') {
          n = n + pow(16.0, i)*hex[s[i] - 'A'];             
        } else if (s[i] >= 'a' && s[i] <= 'f') {

        } else if (s[i] >= '0' && s[i] <= '9') {

        } else {
            break;        
        }
        ++i;
    }
}


