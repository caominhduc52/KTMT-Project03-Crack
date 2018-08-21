#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    freopen("1_2_keyslist.txt", "rt", stdin);
    string a[1050];
    srand(time(NULL));
    int n = 0;
    while (cin >> a[n])
    {
        n++;
    }
    int randIndex = rand() % n;
    cout << a[randIndex];
    _getche();
    return 0;
}
