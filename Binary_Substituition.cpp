#include<bits/stdc++.h>
using namespace std;

int helper(int arr[], int n) {
    int cnt = 0;
    sort(arr, arr + n);
    for(int i=0; i<n; i++) {
        for(int j=1; j<n; j++) {
            if(abs(arr[i] - arr[j]) == 1) {
                cnt++;
                // swap(arr[i], arr[j]);
            }
        }
    }
    return cnt;
}

int main() {
    // int tastcase; cin>>tastcase;
    // while(tastcase) {
    //     int n; 
    //     int arr[n];
    //     helper();
    // }
    int n; cin>>n;
    int arr[n];
    cout<<helper(arr, n)<<endl;
    // for(int i=0; i<n; i++) {
    //     cout<<arr[i]<<endl;
    // }
}