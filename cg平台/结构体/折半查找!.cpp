#include <iostream>
using namespace std;


int main(){
    int arr[]={ 1, 3, 5, 7, 9, 11, 13, 15,17, 19 };
    int k;
    cin>>k;
    int l=0;
    int r=9;
   while (l <= r) {
    int mid = (l + r) / 2;
    if (arr[mid] == k) {
        cout << "yes" << endl;
        return 0;
    } else if (k < arr[mid]) {
        r = mid - 1;
    } else {
        l = mid + 1;
    }
}
cout << "no" << endl;
}