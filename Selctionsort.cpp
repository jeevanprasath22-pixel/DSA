#include<iostream>
using namespace std;
void SectionSort(int arr[],int n){
    int count=0;
    int i;
    for( i=0; i<n-1 ;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
            count++;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SectionSort(arr,n);
}