//quick sort

//quick sort

#include<bits/stdc++.h>
using namespace std;


void mergephase(vector<int>& arr , int start , int mid , int last){


    if(arr[mid] <= arr[mid+1]){
        return;
    }

    vector<int> temp;
    int i = start;
    int j = mid + 1;

    while(i <= mid and j <= last ){
        temp.push_back( (arr[i] >= arr[j]) ? arr[j++] : arr[i++] );
    }

   while(mid >= i){
        temp.push_back(arr[i++]);
   }




     int m = 0;
   while(m != temp.size()){
        arr[start++] = temp[m++];
   }

     for(auto m : temp){
        cout<<m<<" ";
     }
     cout<<endl;

}


void mergesort(vector<int>& arr , int start ,int last){

    if(start >= last){
        return;
    }

    int mid = (start + last)/2;

    mergesort(arr , start , mid );
    mergesort(arr , mid+1 , last);
    mergephase(arr , start , mid , last);

}

main(){
    vector<int> arr = {5 , 1 , 0 , 9 , -1 , -111 , 2001 , 27};

    mergesort( arr , 0 , arr.size() - 1);

     for(auto m : arr){
        cout<<m<<" ";
    }
    return 0;
}



*/
/*
int partation(vector<int>&  arr , int start , int last){
    int i = start;
    int j = last;
    int pivot = arr[start];

    while(i < j){

        while(i < j and arr[--j] >= pivot);
        if(i < j){
            arr[i] = arr[j];
        }

        while(i < j and arr[++i] <= pivot);
        if(i < j){
            arr[j] = arr[i];
        }
    }
    arr[j] = pivot;

    return j;
}


void quicksort(vector<int>&  arr , int start , int last){

    if(last - start < 2){
        return;
    }

    int pivotIndex = partation(arr , start , last);
    quicksort(arr , start , pivotIndex );
    quicksort(arr , pivotIndex + 1 , last);

}


main(){
     vector<int> arr = {2 , 0 , -1 , 1 , 7 , -22};

    quicksort(arr , 0 , 5);

    for(auto m : arr){
        cout<<m<<" ";
    }

}
*/
