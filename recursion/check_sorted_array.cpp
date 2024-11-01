#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v1, int start){

    if(start >= v1.size()){
        return true;
    }

    if(v1[start] < v1[start-1]){
        return false;
    }

    isSorted(v1, start+1);
    
}

int main(){
    vector<int> v1 = {1,3,4,5,6,7,8,9,11};
    vector<int> v2 = {1,3,4,5,66,7,8,9,11};
    vector<int> v3 = {1};
    vector<int> v4 = {};

    if(isSorted(v1, 1)){
        cout << "array1 is sorted" << endl;
    }
    else{
        cout << "array1 is not sorted" << endl;
    }
    if(isSorted(v2, 1)){
        cout << "array2 is sorted" << endl;
    }
    else{
        cout << "array2 is not sorted" << endl;
    }
    if(isSorted(v3, 1)){
        cout << "array3 is sorted" << endl;
    }
    else{
        cout << "array3 is not sorted" << endl;
    }
    if(isSorted(v4, 1)){
        cout << "array4 is sorted" << endl;
    }
    else{
        cout << "array4 is not sorted" << endl;
    }

    return 0;
}