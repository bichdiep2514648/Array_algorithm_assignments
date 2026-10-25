#include<iostream>
using namespace std;
void Findequilibriumindex( int a[], int n){
    
    for (int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for (int j=0;j<i;j++){
            sum1+=a[j];
        }
        for (int k=n-1;k>i;k--){
            sum2+=a[k];
        }
        if (sum1==sum2){
            cout<<"Equilibrium index is: "<<i<<endl;
        }
    }
}
int main(){
    int a[]={0, -3, 5, -4, -2, 3, 1, 0};
    Findequilibriumindex(a,8);
    return 0;
}