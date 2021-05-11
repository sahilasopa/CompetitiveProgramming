#include <vector>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
    int f = 0;
    int b = 0;
    assert(n>0 && n<=100000 && p>0 && p<=n);

    f = p/2;
    if(n%2 == 0)
        b = (n-p+1)/2;
    else
        b = (n-p)/2;

    return min(f, b);
}

// Info: I Gave Up On This "LOL"
