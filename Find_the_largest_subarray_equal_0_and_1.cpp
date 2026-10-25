#include<iostream>
using namespace std;
void somewhat(int a[],int n){
    if(n%2!=0) n=n-1;
    int b=n;
    
    while (n>=2){
        int sign;
        for (int i=0;i<=n-b;i++){
            sign=0;
            int j=i;
            int sum=0;
            while(j< i+b){
                sum+=a[j];
                j++;
                }
            if (sum==b/2){
                sign++;
                for (int k=i;k<j;k++){
                    cout<<a[k]<<" ";
                }
                cout<<endl;
            }
        }
        if (sign!=0){
            break;
        }
        b=b-2;
    }
    
}

int main(){
    int a[]= { 0, 0, 1, 0, 1, 0, 0 };
    somewhat(a,7);
    return 0;
}