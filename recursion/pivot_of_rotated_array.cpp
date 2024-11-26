#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findPivot(int *arr, int size, int &pivot, int start, int end)
{
    if (start > end)
        return;

    int mid = start + (end - start) / 2;

    if (arr[mid] < arr[0])
    {
        pivot = mid;
        findPivot(arr, size, pivot, start, mid - 1);
    }
    else
    {
        findPivot(arr, size, pivot, mid + 1, end);
    }
}

int main()
{

    int arr1[] = {4, 5, 6, 1, 2, 3};               // Rotated from {1, 2, 3, 4, 5, 6}
    int arr2[] = {30, 40, 50, 60, 10, 20};         // Rotated from {10, 20, 30, 40, 50, 60}
    int arr3[] = {11, 12, 7, 8, 9, 10};            // Rotated from {7, 8, 9, 10, 11, 12}
    int arr4[] = {200, 300, 400, 500, 100};        // Rotated from {100, 200, 300, 400, 500}
    int arr5[] = {30, 35, 5, 10, 15, 20, 25};      // Rotated from {5, 10, 15, 20, 25, 30, 35}
    int arr6[] = {9, 10, 1, 2, 3, 4, 5, 6, 7, 8};  // Rotated from {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    int arr7[] = {22, 25, 28, 30, 10, 12, 15, 20}; // Rotated from {10, 12, 15, 20, 22, 25, 28, 30}
    int arr8[] = {80, 85, 90, 60, 65, 70, 75};     // Rotated from {60, 65, 70, 75, 80, 85, 90}
    int arr9[] = {150, 200, 50, 75, 100};          // Rotated from {50, 75, 100, 150, 200}
    int arr10[] = {35, 40, 5, 10, 15, 20, 25, 30}; // Rotated from {5, 10, 15, 20, 25, 30, 35, 40}
    int arr11[] = {1,2,3,4,5,6,7,8,9}; // Rotated from {5, 10, 15, 20, 25, 30, 35, 40}

    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;
    int ans4 = 0;
    int ans5 = 0;
    int ans6 = 0;
    int ans7 = 0;
    int ans8 = 0;
    int ans9 = 0;
    int ans10 = 0;
    int ans11 = 0;

    findPivot(arr1, sizeof(arr1) / sizeof(arr1[0]), ans1, 0, sizeof(arr1) / sizeof(arr1[0]) - 1);
    findPivot(arr2, sizeof(arr2) / sizeof(arr2[0]), ans2, 0, sizeof(arr2) / sizeof(arr2[0]) - 1);
    findPivot(arr3, sizeof(arr3) / sizeof(arr3[0]), ans3, 0, sizeof(arr3) / sizeof(arr3[0]) - 1);
    findPivot(arr4, sizeof(arr4) / sizeof(arr4[0]), ans4, 0, sizeof(arr4) / sizeof(arr4[0]) - 1);
    findPivot(arr5, sizeof(arr5) / sizeof(arr5[0]), ans5, 0, sizeof(arr5) / sizeof(arr5[0]) - 1);
    findPivot(arr6, sizeof(arr6) / sizeof(arr6[0]), ans6, 0, sizeof(arr6) / sizeof(arr6[0]) - 1);
    findPivot(arr7, sizeof(arr7) / sizeof(arr7[0]), ans7, 0, sizeof(arr7) / sizeof(arr7[0]) - 1);
    findPivot(arr8, sizeof(arr8) / sizeof(arr8[0]), ans8, 0, sizeof(arr8) / sizeof(arr8[0]) - 1);
    findPivot(arr9, sizeof(arr9) / sizeof(arr9[0]), ans9, 0, sizeof(arr9) / sizeof(arr9[0]) - 1);
    findPivot(arr10, sizeof(arr10) / sizeof(arr10[0]), ans10, 0, sizeof(arr10) / sizeof(arr10[0]) - 1);
    findPivot(arr11, sizeof(arr11) / sizeof(arr11[0]), ans11, 0, sizeof(arr11) / sizeof(arr11[0]) - 1);

    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
    cout << ans5 << endl;
    cout << ans6 << endl;
    cout << ans7 << endl;
    cout << ans8 << endl;
    cout << ans9 << endl;
    cout << ans10 << endl;
    cout << ans11 << endl;

    return 0;
}