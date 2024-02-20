#include<iostream>
using namespace std;

int binarysearch(int se,int low,int high,int mid,int array[])
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(se==array[mid])
        {
            cout<<"found the element at "<<mid<<endl;
            return mid;
        }
        else if(se<array[mid])
        {
          high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<"element not found in array"<<endl;
    return -1;
}
int main()
{
    int array[] ={10,20,30,40,50,60,70,80,90,100};
    int se=40;
    int low=0;
    int high=sizeof(array)/sizeof(array[0])-1;
    int index = binarysearch(se,low,high,0,array);
    return 0;
}

//d1