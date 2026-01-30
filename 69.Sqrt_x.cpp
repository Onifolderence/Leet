#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int mySqrt(int x) {
    if (x == 0 || x == 1) {
      return x;
    }
    long long int k = 0;
    for (long long int b = x / 2; b > 0; b /= 2) {
      while (k + b < x && (k + b) * (k + b) <= x) {
        k += b;
      }
    }
    return k;
  }
};
