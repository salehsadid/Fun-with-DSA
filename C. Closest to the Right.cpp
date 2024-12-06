//Saleh Sadid Mir - 2207024
//Data Structure and Algorithm (CSE-2106)
//Implementation  of binary search on ARRAY
//closest to the right


#include<bits/stdc++.h>
using namespace std;

int src(int arr[], int n, int x){

    int L=-1;
    int R=n;
    int mid;

    while(L+1<R){
        mid=(L+R)/2;

        if(arr[mid]>=x){
            R=mid;


        }
        else {
            L=mid;


        }
    }
    return R;
}


int main(){
   int n,k;
    int cnt;
    cin>>n>>k;

    int arr[n];
    int query[k];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<k;i++){
        cin>>query[i];

    }

    for (int i=0;i<k;i++){
        cnt=src(arr,n,query[i]);
       cout<<cnt+1<<endl;

    }
    return 0;
}

/*OUTPUT:
5 5
3 3 5 8 9
2 4 8 1 10

1
3
4
1
6

*/
