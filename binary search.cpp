
#include <iostream>
using namespace std;
int bs(int arr[],int lb,int ub,int x)
{
    while(ub>=lb)
    {
        int m=lb+(ub-1)/2;
        if(arr[m]==x)
        {
            return m;
        }
        if(arr[m]<x)
        {
            lb=m-1;
        }
        if(arr[m]>x){
            ub=m+1;
        }
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int y =bs(arr,0,6,4);
    cout<<y;
}