#include<iostream>
using namespace std;
void Find(int a[],int n,int target){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(a[mid]==target){
            cout<<"Target found at index:"<<mid<<endl;
            return;
        }
        else if(a[mid]>target){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<"Target not found"<<endl;
}
int main(){
    int a[]={2, 3, 5, 7, 9};
    Find(a,5,7);
    Find(a,5,-1);
    return 0;
}