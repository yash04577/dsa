#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &v1, int target, int pointer){

    // cout << endl << endl;
    // cout << "pointer = " << pointer << " value at pointer = " << v1[pointer] << endl;
    if(pointer == v1.size())return -1;

    if(v1[pointer] == target) return pointer;

    return search(v1, target, pointer+1);
}

int main(){
    vector<int> v1 = {2,4,5,6,7,13,7,8,3};

    cout << "search result........" << endl;

    int index = search(v1, 13, 0);
    cout << 13 << " is found at index " << index << endl;

    cout << "program ended......" << endl;
    return 0;
}