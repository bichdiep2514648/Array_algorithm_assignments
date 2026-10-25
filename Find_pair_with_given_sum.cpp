#include<iostream>
using namespace std;
 void Findpairwithsum(int a[], int n, int sum){
    int i,j=0;
    int count=0;
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (a[i]+a[j]==sum){
                cout<<"Pair "<<a[i]<<" and "<<a[j]<<""<<endl;
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "No pair found" << endl;
    }
 }
 int main(){
    int a[]={8,7,2,0,3,1};
    int b[]={5,2,6,8,1,9};
    Findpairwithsum(a,6,10);
    cout<<endl;
    Findpairwithsum(b,6,12);
    return 0;
 }