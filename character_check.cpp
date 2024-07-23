#include<bits/stdc++.h>
using namespace std;

//to check whether the given character is uppercase, lower case or number

int main(){
    char ch;
    cout << "Enter character";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z') cout << "Uppercase character";
    else if(ch >= 'a' && ch <= 'z') cout << "Lowercase character";
    else if(ch >= '0' && ch <= '9') cout << "It's an digit";
    else cout << "It's special character";


    return 0;
}