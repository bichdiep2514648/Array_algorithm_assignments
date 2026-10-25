#include<iostream>
using namespace std;

void Sortbinaryarray(int a[],int n){
    int i;
    int count=0;
    for (i=0;i<n;i++){
        if (a[i]==0){
            count++;
        }
    }
    for (i=0;i<count;i++){
        a[i]=0;
    }
    for (i=count;i<n;i++){
        a[i]=1;
    }

}
int main(){
    int a[]={ 1, 0, 1, 0, 1, 0, 0, 1 } ; 
    Sortbinaryarray(a,8);
    for (int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}