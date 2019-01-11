#include<iostream>
using namespace std;

int main()
{
    float sum=0,x=6;
    while(x<=19){
        sum = sum + (1/x);
        x++;
    }
    cout << sum;
    return 0;
}