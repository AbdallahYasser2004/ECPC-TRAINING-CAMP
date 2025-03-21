#include <iostream>
#include <cstdlib>
using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[right]; 
    int i = left;  

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {  
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]); 
    return i;
}

int findk(int arr[], int left, int right, int k) {
    if (left <= right) {
        int pivotIndex = partition(arr, left, right);

        if (pivotIndex == k - 1) // Found the Kth smallest element
            return arr[pivotIndex];
        else if (pivotIndex > k - 1) // Search in the left subarray
            return findk(arr, left, pivotIndex - 1, k);
        else // Search in the right subarray
            return findk(arr, pivotIndex + 1, right, k);
    }
    return -1; 
}


int main() {
    int x[6] = {7, 10, 4, 3, 20, 15};
// 3 4 7 10 15 20
    int res=findk(x,0,5,3);
    cout<<res<<endl;
     res=findk(x,0,5,2);
    cout<<res<<endl;
   
     res=findk(x,0,5,1);
    cout<<res<<endl;
   
     res=findk(x,0,5,4);
    cout<<res<<endl;
   
     res=findk(x,0,5,0);
    cout<<res<<endl;
     
     res=findk(x,0,5,-1);
    cout<<res<<endl;

}
