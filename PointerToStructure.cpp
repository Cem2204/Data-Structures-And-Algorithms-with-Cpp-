#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    
    Rectangle *p;
    p = (Rectangle *)malloc(sizeof(Rectangle));
    p->length = 15;
    p->breadth = 7;
    cout << p->length << endl;
    cout << (*p).breadth << endl;
    return 0;
}