#include<iostream>
using namespace std;

struct m
{
    int min;
    int max;
};
m minimax(int a[],int n)
{
    struct m minmax;
    if(n==1)
    {
        minmax.min=a[0];
        minmax.max=a[0];
        return minmax;
    }
    
    
        if(a[0]>a[1])
        {
            minmax.max=a[0];
            minmax.min=a[1];
        }
        else{
            minmax.min=a[0];
            minmax.max=a[1];
        }
    
    
    
        for(int i=2;i<n;i++)
        {
            if(a[i]>minmax.max)
            {
                minmax.max=a[i];
            }
            else if(a[i]<minmax.min)
            {
                minmax.min=a[i];
            }
        }
    return minmax;
}
int main()
{
    int a[]={1,3,5,7,6,8,0};
    struct m x=minimax(a,7);
    cout<<"min:"<<x.min<<"\n";
    cout<<"max:"<<x.max;
    return 0;
}