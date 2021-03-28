#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int count = 4;
    int ret = (a + b + c);
    switch (n) {
    case 1:
        return a;
    case 2:
        return b;
    case 3:
        return c;
    default:
        while (count <= n) {
            switch ((count - 1) % 3) {
            case 0:
                ret = (a + b + c);
                a = (a + b + c);
                break;
            case 1:
                ret = (a + b + c);
                b = (a + b + c);
                break;
            case 2:
                ret = (a + b + c);
                c = (a + b + c);
                break;
            }
            ++count;
        }
        break;
    }
    return ret;
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
