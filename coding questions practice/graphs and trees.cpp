#include <bits/stdc++.h>
using namespace std;

/*
//<---------------- Trees --------------------->
class TreeNode{
public:
    int data;
    TreeNode *leftChild;
    TreeNode *rightChild;

    //TreeNode(){}

    TreeNode(int value){
        data = value;
    }

    void insertNode(int value){

        if(value > data){
            if(!rightChild ){
                rightChild = new TreeNode(value);
            }
            else{
                rightChild->insertNode(value);
            }
        }
        else{
            if(!leftChild){
                leftChild = new TreeNode(value);
            }
            else{
                leftChild->insertNode(value);
            }
        }
        //cout<<"node inserted "<<data<<endl;
    }

    void traverseInorder(){

        if(leftChild != NULL ){
            leftChild->traverseInorder();
        }

        cout<<data<<" ";

        if(rightChild != NULL){
            rightChild->traverseInorder();
        }

    }

    void traversepreorder(){
        cout<<data<<" ";
         if(leftChild != NULL ){
            leftChild->traversepreorder();
        }

         if(rightChild != NULL){
            rightChild->traversepreorder();
        }
    }

     void traversepostorder(){

        if(leftChild != NULL ){
            leftChild->traversepostorder();
        }

        // cout<<data<<" ";

        if(rightChild != NULL){
            rightChild->traversepostorder();
        }

        cout<<data<<" ";

    }
};


class Tree{
private:
     TreeNode *root = nullptr;
public:


    void insertNode(int value){
        if(root == NULL){
            root = new TreeNode(value);
        }
        else{
            root->insertNode(value);
        }
    }

    void traverseInorderTree(){

        if(root != NULL){

            root->traverseInorder();


        }
    }

     void traversepostorderTree(){

        if(root != NULL){

            root->traversepostorder();


        }
    }

     void traversepreorderTree(){

        if(root != NULL){

            root->traversepreorder();


        }
    }
};

main(){

    Tree newTree;

    newTree.insertNode(2);
    newTree.insertNode(-1);

    newTree.insertNode(-10);
    newTree.insertNode(12);
    newTree.insertNode(7);
    newTree.insertNode(-11);
    newTree.insertNode(-5);
    // newTree.traversepreorderTree();
    //newTree.traverseInorderTree();
    newTree.traversepostorderTree();

}

*/



<---------------------Graphs----------------------->

void addEdge(vector<int> arr[] , int u , int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}

void Bfs(vector<int>arr[] , int n ,int start){

    vector<bool> visited;
    visited.resize(n , false);

    list<int> que;

    visited[start] = true;
    que.push_back(start);



    while(!que.empty()){
        start =  que.front();
        cout<<start<<" ";
        que.pop_front();
        visited[start] = true;

        for(auto m : arr[start]){
                if(!visited[m]){
                        visited[m] = true;
                        que.push_back(m);
            }
    }

}
}
/*

    bool test = false;
    for(auto m : visited) if(!m) test = true;
    if(!test) return;

     cout<<start<<" ";

     visited[start] = true;
    for(auto m : arr[start]){
        if(!visited[m]){
                visited[m] = true;
                Dfs(arr , visited , m , n);
        }
    }
*/
void Dfs(vector<int> arr[],vector<bool> visited , int start , int n){


    stack<int> stk;
    stk.push(start);
    visited[start] = true;

    while(!stk.empty()){
        int start = stk.top();
        cout<<start<<" ";
        stk.pop();
        for(auto m : arr[start])
        if(!visited[m]){
            stk.push(m);
            visited[m] = true;
            }
    }
}

int main(){
     int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
   // printGraph(adj , V);
    vector<bool> visited;
    visited.resize(V , false);

    Dfs(adj , visited , 1 , V);
    return 0;
}

