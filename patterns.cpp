#include<bits/stdc++.h>
using namespace std;
int main(){

// pattern 1
// * * *
// * * *
// * * *

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  while (j <= n)
  {
    /* code */
    cout << "*";
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------


// pattern 2
// 1 1 1
// 2 2 2 
// 3 3 3

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  while (j <= n)
  {
    /* code */
    cout << i;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------


// pattern 3
// 1 2 3
// 1 2 3
// 1 2 3

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  while (j <= n)
  {
    /* code */
    cout << j;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------


// pattern 4

// 1 2 3
// 4 5 6
// 7 8 9

int n, i, j, count = 1;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  while (j <= n)
  {
    /* code */
    cout << count << " ";
    count++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------


// pattern 5
// *
// * *
// * * *
// * * * *

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  while (j <= i)
  {
    /* code */
    cout << "*";
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 6
// 1 
// 2 2
// 3 3 3
// 4 4 4 4

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  while (j <= i)
  {
    /* code */
    cout << i;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------


// pattern 7

// 1
// 2 3
// 4 5 6
// 7 8 9

int n, i, j, count = 1;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  while (j <= i)
  {
    /* code */
    cout << count << " ";
    count++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 8

// 1
// 2 3
// 3 4 5

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  // int val = i;
  while (j <= i)
  {
    /* code */
    // cout << val;
    // val++;
    cout << (i + j - 1);
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------


// pattern 9
// 1 
// 2 1
// 3 2 1
// 4 3 2 1

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  // int val = i;
  while (j <= i)
  {
    cout << (i - j + 1);
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 10

// A A A
// B B B
// C C C

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  char ch = 'A' + (i - 1);
  while (j <= n)
  {  
    cout << ch;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}
 
// ---------------------------------------------------------------------------------------------------

// pattern 11

// A B C
// A B C
// A B C

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  char ch = 'A' + (j - 1);
  while (j <= n)
  {  
    cout << ch;
    ch++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 12

// A B C
// D E F
// G H I

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
char ch = 'A';
while(i <= n){
  j = 1;
  while (j <= n)
  {  
    cout << ch;
    ch++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 13

// A B C
// B C D
// C D E

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  char ch = 'A' + (i - 1);
  while (j <= n)
  {  
    cout << ch;
    ch++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 14

// A
// B B
// C C C

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  char ch = 'A' + (i - 1);
  while (j <= i)
  {  
    cout << ch;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 15

// A 
// B C 
// C D E
// D E F G

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  char ch = 'A' + (i- 1);
  while (j <= i)
  {  
    cout << ch;
    ch++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
// }

// ---------------------------------------------------------------------------------------------------

// extra
// 1
// 1 2
// 1 2 3
// 1 2 3 4

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  int count = 1;
  while (j <= i)
  {
    /* code */
    
    cout << count << " ";
    count++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------
// extra
//   1 
// 2 1 
// 3 2 1 

  int n, i, j;
    cout << "Enter n: ";
    cin >> n;

    i = 1;
    while (i <= n) {
        // Print spaces
        j = 1;
        while (j <= n - i) {
            cout << "  "; // Adjusted to two spaces for better alignment
            j++;
        }

        // Print numbers
        int count = i;
        while (count >= 1) {
            cout << count << " ";
            count--;
        }

        cout << endl;
        i++;
    }

// ---------------------------------------------------------------------------------------------------

// pattern 16

// D
// C D
// B C D
// A B C D

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){
  j = 1;
  char ch = 'A' + (n- i);
  while (j <= i)
  {  
    cout << ch;
    ch++;
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 17

//       * 
//     * *
//   * * *
// * * * *


int n, i, j;
cout << "Enter n: ";
cin >> n;
i = 1;
while(i <= n){

    int space = n - i;
    while(space){
        cout << "  ";
        space--;
    }
  j = 1;
  while (j <= i)
  {  
    cout << "* ";
    j = j + 1;
  }
  cout<<endl;
  i = i + 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 18

// * * * * 
// * * *
// * *
// *

int n, i, j;
cout << "Enter n: ";
cin >> n;
i = n;
while(i >= 1){
  j = i;
  while (j >= 1)
  {  
    cout << "* ";
    j = j - 1;
  }
  cout<<endl;
  i = i - 1;
}

// ---------------------------------------------------------------------------------------------------

// pattern 19

// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print the first part of the row (numbers in increasing order)
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }

        // Print the middle part of the row (stars)
        for (int j = 0; j < 2 * i; j++) {
            cout << "* ";
        }

        // Print the last part of the row (numbers in decreasing order)
        for (int j = n - i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

 return 0;
}


