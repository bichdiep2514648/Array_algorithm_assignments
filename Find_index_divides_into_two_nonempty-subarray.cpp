#include<iostream>
using namespace std;
void Findindex( int a[], int n){
    
    for (int i=1;i<n-1;i++){
        int sum1=0,sum2=0;
        for (int j=0;j<i;j++){
            sum1+=a[j];
        }
        for (int k=n-1;k>i;k--){
            sum2+=a[k];
        }
        if (sum1==sum2){
            cout<<"That index is: "<<i<<endl;
        }
    }
}
int main(){
    int a[]={-1, 6, 3, 1, -2, 3, 3};
    Findindex(a,7);
    return 0;
}