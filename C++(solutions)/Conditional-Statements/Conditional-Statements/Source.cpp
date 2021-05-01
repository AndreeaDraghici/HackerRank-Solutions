#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string int_map[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    if (n > 9) {
        cout << "Greater than 9" << endl;
    }
    else {
        cout << int_map[n - 1] << endl;
    }
   
    return 0;
}
