#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    
    cin >> a >> b;
    a = ((a % 10) * 100) + (a / 100) + (a - (a / 100) * 100) / 10;
    b = ((b % 10) * 100) + (b / 100) + ((b - ((b / 100) * 100)) / 10);
    
    cout << a << "\t" << b;

    
    
}
