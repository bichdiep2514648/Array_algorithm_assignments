#include<iostream>
using namespace std;
void Sort(int a[], int n){
    if(n<=1) return;
    int i=0,j=n-1;
    while(a[i+1]>a[i]) i++;
    while(a[j-1]<a[j]) j--;
    int tempt=a[i];
    a[i]=a[j];
    a[j]=tempt;
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]= {9, 5, 6, 7, 8, 3};
    Sort(a,6);
    return 0;
}