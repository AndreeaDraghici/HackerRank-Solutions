#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int MAX_SIZE = 256;

    char c;
    char str[MAX_SIZE];
    char sen[MAX_SIZE];

    scanf("%c ", &c);
    scanf("%s ", str);
    fgets(sen, MAX_SIZE, stdin);

    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);



    return 0;
}
