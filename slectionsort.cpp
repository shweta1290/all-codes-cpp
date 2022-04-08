#include<iostream>
using namespace std;
void selectionsort(int arr[],int l)
{
    for(int i=0;i<l-1;i++)
    {
        int min=i;
        for(int j=i+1;j<l;j++)
        {
            if(arr[i]>arr[j])
            {
            min=j;

            }
        }
        int t=arr[i];arr[i]=arr[min];arr[min]=t;

    }

}
int main()
{
    int arr[]={1,42,5,7,8};
    selectionsort(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i :arr)cout<<i<<" ";
    return 0;
}