#include<iostream>
using namespace std;


void insertion_sort(int A[], int n){

    int i;
    for(i = 1; i<n; i++){
        int key = A[i];

        //inserting key at its right order place
        int j = i - 1;
        while(j >= 0 && A[j] > key){
            A[j + 1] = A[j];
            j--;
        }
        //key is the smallest 
        A[j + 1] = key;
    }

}
int main(){

    const int N = 100;
    int A[N];

    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>A[i];
    }

    cout<<"Before Sorting\n";

    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }

    insertion_sort(A, n);

    cout<<"\nAfter Sorting\n";

    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}