#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
    //make last element as pivot
    int pivot=a[high];
    int i=low-1;//this tells there is no element less than pivot till now
    for(int j=low;j<high;j++)
    {   //as high is kept as pivot so we traverse till last second element
        //if element at j is less than pivot then we got an element less than pivot so i++,
        //else if the element is greater than pivot we move further in array to get an elemnt smaller as soon as we find it we do i++ and then swap with elemnt having high value
        if(a[j]<pivot)
        {
            i++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
    i++;
    int temp=a[i];
    a[i]=pivot;
    a[high]=temp;
    return i;
}
void quicksort(int a[],int low,int high)
{ if(low<high)
{
    int pivot_index=partition(a,low,high);
    quicksort(a,low,pivot_index-1);
    quicksort(a,pivot_index+1,high);
}
}
int main()
{
    int a[]={3,5,7,8,54,0};
    quicksort(a,0,5);
    //print
    for(auto i :a) cout<<i<<" ";
}