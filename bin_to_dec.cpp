#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int ans = 0, i = 0;

    while (n != 0) {
      int digit = n % 10;
      if(digit == 1) ans = ans + pow(2,i);
  
      n = n / 10;
      i++;
    }
        cout << ans;  

    return 0;
}


// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
//     int ans = 0;

//     while (n != 0) {
//         ans = (ans << 1) + (n % 10);
//         n = n / 10;
//     }
//     cout << ans;

//     return 0;
// }
