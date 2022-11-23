#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin >>n >>x;
    int p[n];

    for (int i=0;i<n;i++){
        cin >> p[i];
    }

    int i = 0;
    while(p[i]!=x){
        i++;
    }
    cout <<i+1;

    return 0;
}