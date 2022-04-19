#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int h)
{
    int x=m-l+1;
    int y=h-m;
    int left[x],right[y];
    for(int i=0;i<x;i++) left[i]=a[l+i];
   
    for(int j=0;j<y;j++) right[j]=a[m+1+j];
     
    int lc=0,rc=0,z=l;
    while(lc<x &&rc<y)
    {
        if(left[lc]<=right[rc])
        {
            a[z]=left[lc];
            lc++;
        }
        else{
            a[z]=right[rc];
            rc++;
        }
        z++;
    }
   
   while(lc<x)
   {
       a[z]=left[lc];
       z++;
       lc++;
   }

   while(rc<y)
   {
       a[z]=right[rc];z++;rc++;
   }

    
}
void mergesort(int a[],int l,int h)
{
   if(l<h)
   {
    int mid=l+(h-l)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,mid,h);
   }
}
int main(){
    int a[]={6,5,8,2};
    mergesort(a,0,3);
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}
