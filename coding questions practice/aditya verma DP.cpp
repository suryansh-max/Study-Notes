#include <bits/stdc++.h>
using namespace std;

int t[4][51];
//mimset(t , -1 , sizeof(t));



int Knapsak(int wt[] , int val[] , int W , int n){

    if(W == 0 || n == 0){
        return 0;
    }

    if(t[n][W] != -1){
        return t[n][W];
    }

    if(wt[n-1] <= W){
        t[n][W] =  max(val[n-1] + Knapsak(wt , val , W - wt[n-1] , n-1) ,Knapsak(wt , val , W , n-1));
        return t[n][W];
    }
    else if(wt[n-1] > W){
        t[n][W] = Knapsak(wt , val , W , n-1);
        return t[n][W];
    }

}


int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

     for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 51 ; j++)
        {
            t[i][j] = -1;
        }
     //   cout<<endl;
    }

    cout << Knapsak(wt, val, W , n)<<endl;
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 51 ; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
