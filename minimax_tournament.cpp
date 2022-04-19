#include<iostream>
using namespace std;
struct p
{
    int min,max;
};
struct p minimax(int a[],int f,int l)
{
    struct p minmax,left,right;
    if(l==f)
    {
        minmax.min=a[l];
        minmax.max=a[l];
        return minmax;
    }
    else if(l==(f+1))
    {
        if(a[l]<a[f])
        {
            minmax.min=a[l];
            minmax.max=a[f];
            
        }
        else{
            minmax.min=a[f];
            minmax.max=a[l];
        }
        return minmax;
    }
    else{
        int mid=(f+l)/2;
        left=minimax(a,0,mid);
        right =minimax(a,mid+1,l);
        if(left.min<right.min)
        {
            minmax.min=left.min;
        }
        else
        {
            minmax.min=right.min;
        }
        if(left.max<right.max)
        {
            minmax.max=right.max;
        }
        else
        {
            minmax.max=left.max;
        }

    }
    return minmax;
}
int main()
{
    int a[]={1,24,6,7,84,9};
    struct p x=minimax(a,0,5);
    cout<<"min: "<<x.min<<"\n";
    cout<<"max: "<<x.max;
    return 0;

}