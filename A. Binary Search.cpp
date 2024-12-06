//Saleh Sadid Mir - 2207024
//Data Structure and Algorithm (CSE-2106)
//Implementation of binary search (Problem A)


#include<bits/stdc++.h>
using namespace std;

bool src(int arr[], int n, int x){

    int L=0;
    int R=n-1;
    int mid;

    while(L<=R){ //binary search
        mid=(L+R)/2;
        if(arr[mid]==x){
                return true;

        }
        else if(arr[mid]>x){
            R=mid-1;


        }
        else if(arr[mid]<x){
            L=mid+1;


        }
    }
    return false;
}


int main(){
    int n,k;
    bool cnt;
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
        if(cnt)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
/* OUTPUT:
10 10
1 61 126 217 2876 6127 39162 98126 712687 1000000000
100 6127 1 61 200 -10000 1 217 10000 1000000000

NO
YES
YES
YES
NO
NO
YES
YES
NO
YES

*/
