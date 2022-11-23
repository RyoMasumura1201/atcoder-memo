#include<iostream>
using namespace std;
int main()
{
    int h,m;
    cin >> h >> m;
    int a,b,c,d;
    if (h>9){
        a = h / 10;
        b = h % 10;
    } else {
        a = 0;
        b = h;
    }

    if (m>9){
        c = m / 10;
        d = m % 10;
    } else {
        c = 0;
        d = m;
    }

    while (10*a +c >23 || 10*b +d >59){
        d++;
        if (d==10){
            d = 0;
            c++;
        }

        if (c==6){
            c = 0;
            b++;
        }

        if (b==10){
            b = 0;
            a++;
        } else if (a==2 && b==4){
            a = 0;
            b = 0;
        }

    }

    if (d ==0) {
        cout << a << b << " "  << c ;
    } else {
        cout << a << b << " "  << c << d;
    }

    return 0;
}