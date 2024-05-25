#include <bits/stdc++.h>
using namespace std;

/*
//insertion sort
main(){
        int arr[] = {5 , 1 , 0 , 9 , -1};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < len ; ++i){
        int j = i , value = arr[i];

        while(j > 0 and arr[j-1] > value ){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = value;

    }

    for(int m : arr) cout<<m<<" ";

}
/*
main(){
    int arr[] = { 1, 5, 0, 9, 1, 7, 3, 1, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr , arr+n);

    set<int> rep;

    for(int i = 0 ; i < n - 1; i++){
        if(arr[i] == arr[i+1]) rep.insert(arr[i]);

    }

    for( int m : rep) cout<<m<<" ";


}





/*
// selection sort
main(){
    int arr[] = {-1 , -2 , 4 , -1 , -2 , 7 , 0};
    int len = sizeof(arr)/sizeof(arr[0]);


    for(int i = 0 ; i < len ; i++){
            int index = i;
        for(int j = i ; j < len ; j++){
            if(arr[j] < arr[index]) index = j;
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    for(int m : arr) cout<<m<<" ";
}

/*
 //kaden's algo max contigious sum
main(){
    int arr[] = {-1 , -2 , 4 , -1 , -2 , 7 , 0};
    int len = sizeof(arr)/sizeof(arr[0]);



    int loopSum = 0 , codeSum = INT_MIN;

    for(int i = 0 ; i < len ; ++i){
        loopSum += arr[i];

        if(loopSum > codeSum) codeSum = loopSum;

        if(loopSum < 0) loopSum = 0;
    }

    cout<<codeSum;
}

/*
main(){
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1 ; i <= rows; ++i)
    {
        int k = 0;
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;

}


/*
// pyramid 1
main(){
    int len = 30;
    for(int i = 1 ; i <= len ; i++){

        for(int j = len*2 ; j>=i ; j--) cout<<" ";
        for(int j = 1 ; j <= i ; j++) cout<<"* ";
        cout<<endl;
    }
}


/*
void fib(int curr , int next , int len){
    if(len < 1) return;
    cout<<curr<<" ";
    fib(next , next+curr , len-1);
}

main(){
    int num = 9;

    fib(0 , 1 , num);
}


main(){

    int curr = 0 , next = 1;
    for(int i = 0 ; i < 10 ; i++){
        cout<<curr<<" ";
        int temp = curr;
        curr = next;
        next += temp;
    }

}


//reverse a string and arr
main(){
   //string a = "i want me to reverse";
   int a[] = {22 , 44 ,55 ,77 ,88, 11 ,66 ,99};

   for(int i = 0 ; i < 4 ; i++){
            int temp = a[i];
            a[i] = a[8 - i - 1];
            a[8 - i - 1] = temp;

        }

        for(int m : a){cout<<m<<" " ;}

}



//reverse a number
main(){
    int64_t a = 1241413;
    int res = 0;

    while(a != 0){
        int temp = a%10;
        res = res*10 + temp;
        a /= 10;
    }

    cout<<res;

}

//bubble sort

main(){
    int arr[] = {1 ,4 ,1  ,5 ,9, 2, 5, 8};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < len ; i++){
        for(int j = 0 ; j < len - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    for( int a : arr){
        cout<<a<<" ";
    }
}
*/
