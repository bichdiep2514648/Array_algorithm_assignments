#include<iostream>
using namespace std;
void Findtriplet(int a[],int n){
    int j,i;
    //sorting the array using insertion sort
     for (j=2;j<n+1;j++){
        i=j-1;
       while(i>0){
        if(a[i]<a[i-1]){
        int tempt = a[i];
        a[i]=a[i-1];
        a[i-1]=tempt;}
         i--;
       }}
    //find triplet
    int m1=a[0]*a[1]*a[n-2];
    int m2=a[n-1]*a[n-2]*a[n-3];
    if(m1>m2){
        cout<<"Triplet with maximum product is:"<<a[0]<<" "<<a[1]<<" "<<a[n-1]<<endl;
    }
    else{
        cout<<"Triplet with maximum product is:"<<a[n-1]<<" "<<a[n-2]<<" "<<a[n-3]<<endl;
    }
     }
int main(){
    int a[]={ -4, 1, -8, 9, 6 };
    int b[]={ 1, 7, 2, -2, 5,-4 };
    Findtriplet(a,5);
    Findtriplet(b,6);
    return 0;
}