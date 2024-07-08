#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;
};

int main(){

    struct Rectangle r;
    r.length = 10;
    r.breadth = 7;

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    cout<<sizeof(r)<<endl;

    return 0;

}