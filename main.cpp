#include <iostream>
using namespace std;
int main() {
    int n, a=1, b=1,c, i;
    cin >> n;
        while(a<=n){
            cout <<a<< endl;
            c=a;
            a=b;
            b=a+c;
        }
    return 0;
}
