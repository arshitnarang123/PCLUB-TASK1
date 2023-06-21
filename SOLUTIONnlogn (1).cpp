#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        long long n;
        cin >> n;
        long long a;
        cin >> a;
        long long d;
        cin >> d;
        long long arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] >= a){count++; a+=d;}
        }
        cout << count<<"\n";

    }
}