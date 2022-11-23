#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }

    for (int i = 0;i<k;i++){
        for (int j = 0;j<n-1;j++){
            arr[j] = arr[j+1];
        }
        arr[n-1] = 0;
    }

    for (int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}