#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n";
    printf("%.3f", d);
    printf("\n%.9lf", e);
    return 0;
}