
//Saleh Sadid Mir - 2207024
//Data Structure and Algorithm (CSE-2106)
//Implementation  of binary search on ARRAY
//Fast search


#include<bits/stdc++.h>
using namespace std;
//void srt(int arr[], int n){
//    int t;
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(arr[i]>arr[j]){
//                t=arr[i];
//                arr[i]=arr[j];
//                arr[j]=t;
//            }
//        }
//    }
//
//}


//I used bubble sort technique but it requires more time, thats why i used the library sorting function for sorting the array
//but i have shown here the implementations of the bubble sort technique


int clslt(int arr[], int n, int x){

    int L=0;
    int R=n-1;
    int mid;

    while(L<=R){
        mid=(L+R)/2;

         if(arr[mid]>=x){
            R=mid-1;


        }
        else {
            L=mid+1;


        }
    }
    return L;
}

int clsrt(int arr[], int n, int x){

    int L=0;
    int R=n-1;
    int mid;

    while(L<=R){
        mid=(L+R)/2;

         if(arr[mid]<=x){
            L=mid+1;


        }
        else {

            R=mid-1;


        }
    }
    return L;
}




int main(){
     int n,k;
    int cnt;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int left[k];
    int right[k];

    for(int i=0;i<k;i++){
        cin>>left[i];
        cin>>right[i];
    }
    sort(arr,arr+n);
    for (int i=0;i<k;i++){
        cout<<clsrt(arr,n,right[i])-clslt(arr,n,left[i])<<endl;


    }
    return 0;
}
