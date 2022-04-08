#include<iostream>
using namespace std;
void bubblesort(int *arr,int l)
{
    for(int j=0;j<l-1;j++)
    {
        for(int i=0;i<l-j;i++){
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
   


}
int main()
{
    int arr[]={1,4,5,7,9,6,0,45,89};
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<l;
    bubblesort(arr,l);
    for(auto i :arr)cout<<i<<" ";
    return 0;

}