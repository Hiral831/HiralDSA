// #include <bits/stdc++.h>
// using namespace std;

// //in 000000111, op: 3 

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     int count = 0 ;
//     while(num != 0) {
//       //checking last bit
//       if(num & 1){
//         count++;
//       }
//      num =  num >> 1;
//     }

//     cout << "" << count;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    string binaryString;
    cout << "Enter a binary number: ";
    cin >> binaryString;

    int count = 0;
    for(char bit : binaryString) {
        if(bit == '1') {
            count++;
        }
    }

    cout << "The number of 1s in the binary representation is: " << count << endl;

    return 0;
}
