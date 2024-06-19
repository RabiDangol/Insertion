#include<iostream>
using namespace std;
int main()
{
    int size, i, arr[40],j,temp,count=0;
    count++;
    cout<<"enter array size:";
    count++;
    cin>>size;
    count++;
    cout<<"enter array elements:";
    count++;
    count=count+size+1;
    count=count+size;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
        count++;
    }
    count++;
    count=count+size+1;
    count=count+size-1;
    for(i=0;i<size;i++)
    {
        temp=arr[i];
        count++;
        j=i-1;
        count++;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
            count++;
            count++;
        }
        arr[j+1]=temp;
        count++;
    }
    cout<<"sorted list in ascending order:\n";
    count++;
    count++;
    count=count+size+1;
    count=count+size;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"";
        count=count+size;
    }
    count++;
    cout<<endl<<"total number of steps="<<count;
    return 0;
}