//
//  main.c
//  gfhhgf
//
//  Created by Farros Hilmi Syafei on 14/12/20.
//

#include <stdio.h>
int main(void);
char s[105];

char* caseConversion () {
   // Write your code here that converts the given camel case string s  and
   // returns a snake case version of that string
}
int main() {
    int T;
    scanf("%d", &T);
    for(int t_i=0; t_i<T; t_i++)
    {
        scanf("%s", s);

        char* out_ = caseConversion(s);
        printf("%s", out_);
        printf("\n");
    }
}
