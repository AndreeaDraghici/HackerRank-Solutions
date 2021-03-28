#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int array[4] = { a,b,c,d };
    int max = array[0];
    for (int i = 0; i < 4; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}


int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
