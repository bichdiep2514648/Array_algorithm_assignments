#include<iostream>
using namespace std;
void Findzerosumsubarray( int a[],int n){
    int i,j=0;
    int sum=0;
    int count=0;
    for (i=0;i<n;i++){
        sum = 0;
        for (j=i;j<n;j++){
            sum += a[j];
            if (sum==0){
                   for (int k=i;k<j+1;k++){
                    cout<<a[k]<<" ";
                   }
                   cout<<endl;
                    count++;
                
            }
        }
    }
    if (count ==0){
        cout << " No subarray found"<< endl;
    }
}
int main(){
    int a[]={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int b[]={15,-40,36,37,-5,-100,32,97,98,-74};
    Findzerosumsubarray(a,10);
    cout<<endl;
    Findzerosumsubarray(b,10);
    return 0;
}