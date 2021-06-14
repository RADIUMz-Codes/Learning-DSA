#include <bits/stdc++.h>
using namespace std;

void merge(int *a,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    vector<int> temp (100);
    while(i<=mid and j<=e){
        a[i]<a[j]? temp[k++]=a[i++]: temp[k++]=a[j++];
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
     while(j<=e)
    {
        temp[k++]=a[j++];
    }

    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
}
void mergeSort(int *a,int s,int e)
{
    int mid=(s+e)/2;
    if(s>=e)
    {
        return;
    }
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a,s,e);
}



int main()
{
    int a[]={8,6,1,1,3,10,9};
    mergeSort(a,0,6);
    for(int i = 0; i < 7; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}