#include "testlib.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    
    
   
    
    int total_n = 200000;

    int no_of_testcases = rnd.next(1, total_n);
    int remaining_n = total_n;
    cout<<no_of_testcases<<"\n";
    for (int j = 1; j <= no_of_testcases; j++) {
        int max_n = remaining_n - (no_of_testcases - j);
        int n = rnd.next(1, max_n);
        remaining_n -= n;

        int a = rnd.wnext(1, 1000000000,10);  
        int d = rnd.wnext(1, 1000000000,10);  

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = rnd.wnext(1, 1000000000,10);  
        }

        cout << n << " " << a << " " << d << "\n";
        for(int i=0;i<n;i++){
            if(i!=n-1){
            cout <<arr[i] << " ";}
            else{
                cout<<arr[i];
            }
        }
        cout<<"\n";
    }
    
    return 0;
}
