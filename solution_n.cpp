#include <iostream>
#include<vector>
using namespace std;
long long min(long long a,long long b){
    if(a<b){
        return a;
    }
    return b;
}
int main()
{   int t;
    scanf("%d",&t);
    for(int l=1;l<=t;l++){
    long long n,a,d;
    scanf("%lld %lld %lld\n",&n,&a,&d);
    long long arr[n+1];
    for(int i=0;i<n+1;i++){
        arr[i]=0;
    }
    for(int i=1;i<=n;i++){
        long long b;
        scanf("%lld",&b);
        if(b<a){
            arr[0]++;
        }
        else{
            arr[min(((b-a)/d)+1,n)]++;
        }
    }
    long long def=0;
    long long no=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            def++;
        }
        else{
            long long u=min(arr[i],def+1);
            no+=u;
            if(u==def+1){
                def=0;
            }
            else if(u==arr[i]){
                def-=arr[i]-1;
            }
        }
    }
    cout<<no<<"\n";
    }
    return 0;
}