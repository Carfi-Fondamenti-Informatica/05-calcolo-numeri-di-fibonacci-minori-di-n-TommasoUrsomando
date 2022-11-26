#include <iostream>
using namespace std;
int main() {
    int n, a=1, b=1,c, i;
    cin >> n;
        do{
            cout <<a<< endl;
            b=c;
            c=a;
            a=b+c;
        }while(a<=n);
    return 0;
}
