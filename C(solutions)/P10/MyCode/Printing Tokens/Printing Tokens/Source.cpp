#include<stdint.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main() {

    char* s, * t;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    t = strtok(s, " ");
    while (t != NULL) {
        printf("%s\n", t);
        t = strtok(NULL, " ");
    }

    return 0;
}
