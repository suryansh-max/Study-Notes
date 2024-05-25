#include <bits/stdc++.h>
using namespace std;

main(){
    int arr[] = {1 , 1 ,4 ,5 ,6 ,7 ,1, 3 ,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prev;

    //code

    sort(arr , arr+n);

    for(int i = 0 ; i < n-1 ; ++i){
        if(prev == arr[i]) continue;
        if(arr[i] == arr[i+1]){
            prev = arr[i];
            cout<<arr[i]<<" ";

        }
    }
}

/*
main(){
    set<int> s = {1,2,3};

    auto it = s.end();
    it--;

    cout<<*it;
    return 0;
}


/*
main(){
    vector<int> arr;

    arr.resize(10);

    arr.push_back(10);
    arr.insert(arr.begin() , 11);
    for(auto m : arr)cout<<m<<" ";

}

/*
vector<string> subString(string s, int n)
{
    vector<string> arr;
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
             arr.push_back(s.substr(i, len));
    return arr;

    /*
        i = 0 , j = 1 // s
        i = 0 , j = 2 // su ....

        i = 1 , j = 1 //
        i = 1 , j = 2 //u
        i = 1 , j = 3 // ur
        i = 1 , j = 7 // uryans


}

// Driver program to test above function
int main()
{
    string s = "suryansh";

    vector<string> arr = subString(s,s.length());

    for(auto m : arr)cout<<m<<" ";
    return 0;
}

/*

main(){
    string str = "suyansh";
    int n = str.length();
    vector<string> arr;

    for(int i = 0 ; i < n ; ++i ){
        for(int j =  ; j <= n - i ; j++){
            arr.push_back(str.substr(i , j));
        }
    }

    for(auto m : arr) cout<<m<<" ";

}

/*
//ambigious
main(){
    string A = "ankh";
 vector<string> arr;
    for(int i = 0 ; i < A.length() ; i++){
        for(int j = i+1 ; j < A.length() ; j++){
            arr.push_back(A.substr(i , j+1));
        }
    }

    set<string> test;

    for(int i = 0 ; i < arr.size() ; i++){
        test.insert(arr[i]);
    }
    cout<<test.size()<<" "<<arr.size()<<endl;
    if(test.size() == arr.size()) cout<<"not found"<<endl;else cout<<"found"<<endl;

    for(auto m : arr){
        cout<<m<<" ";
    }
}


/*
//balance brackets
main(){
    string a = "[{}{}({})]", b = "{}}{{}{}[()";
    stack<char> answer;



    for(int i = 0 ; i < a.length() ; ++i){
        if(a[i] == '[' or a[i] == '{' or a[i] == '(') answer.push(a[i]);

        if(a[i] == ']' and answer.top() == '[') answer.pop();
        if(a[i] == ')' and answer.top() == '(') answer.pop();
        if(a[i] == '}' and answer.top() == '{') answer.pop();
    }

    cout<<answer.size();

}



/*
//printing duplicates
main(){
    string s = "asdadadsak";
    int cnt , n = s.length();

    for(int i = 0 ; i < n ; i++){
        cnt = 1;

        for(int j = i+1 ; j < n ; j++){
            if(s[i] == s[j] and s[i] != ' '){
                cnt++;
                s[j] = '0';
            }

        }
        if(cnt > 1 and s[i] != '0')cout<<s[i]<<" ";
    }


}




/*
//print duplicate elements
main(){
    string a = "kanak" , b = "Reena";

    auto c = a , d = b;

    reverse(a.begin() , a.end());

    if(a == c) cout<<"both are palandrome"<<endl;
    else cout<<"not palandrome";
    return 0;


}

/*
// calculate nth largest element
main(){
    int arr[] = {1 , 4 ,6 ,4 , 6, 9 , 0 , 11 , 44 , 55};
    int n = sizeof(arr)/sizeof(arr[0]);

    set<int> s;
    for(auto m : arr) s.insert(m);

    int k = s.size() - 2 , i = 0 ;
    for(auto m : s){
        if(i == k){
            cout<<m<<" ";
            break;
        }
        i++;
    }

}
*/



















