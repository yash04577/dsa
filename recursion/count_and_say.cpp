#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sayDigit(int num, vector<string> &v1){
    if(num == 0)return;

    int digit = num%10;
    num /= 10;
    sayDigit(num, v1);
    cout << v1[digit] << "  ";
}

int main(){
    vector<string> v1 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "output.............." << endl << endl;
    sayDigit(4350012, v1);
    return 0;
}