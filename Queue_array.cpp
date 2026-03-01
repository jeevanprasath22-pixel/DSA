#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    vector<int> arr;
    int f,r;
    Node(){
        f=-1;
        r=-1;
    }
    int enqueue(int val){
        if(f==-1){
            f=0;
        }
        arr.push_back(val);
        r++;
        return 0;
    }
    void dequeue(){
        if(f>r || r==-1){
            cout<<"Queue is Empty";
        }
        f++;
        return ;
    }
    int display(int n){
        for(int i=n-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        return 0;
    }
};
int main(){
    int n;
    cin>>n;
    Node ob;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        ob.enqueue(num);
        
    }
    ob.display(n);
}g