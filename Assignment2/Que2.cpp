#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        bool check=true;
        for (int j=0;j<n-1-i;j++) {
            if (arr[j+1]<arr[j]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                check=false;
            }
        }
        if (check) return;
    }
    return;
}
int main() {
    int arr[7]={65,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
