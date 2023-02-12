#include<iostream>
using namespace std;
void printarray( int arr[],int n)
{
    int i,j,k;
    cout<<"printed array"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
void inputarray(int arr[],int n)
{
    int i,j,k;
    cout<<"input array"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}
 void insertelement(int arr[],int n,int pos,int val){

     int i,j,k;
     for(i=n-1;i>=2;i--){
        arr[i+1]=arr[i];
     }
     arr[pos]=val;

 }
 void deleteelement(int arr[],int n,int pos){
 int i,j,k;
 for(i=pos;i<n;i++){
    arr[i]=arr[i+1];
 }

 }
int main()
{
    int i,j,k,n,pos,val;
    cin>>n;
    int arr[1000];
    inputarray(arr,n);
    printarray(arr,n);
    cin>>pos;
    cin>>val;
    insertelement(arr,n,pos,val);
    printarray(arr,n+1);
    deleteelement(arr,n,pos);
    printarray(arr,n);
    return 0;
}