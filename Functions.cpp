#include <iostream>

using namespace std;


int add(int a, int b){
    return a+b;
}

int main(){
    int x = 10;
    int y = 5;
    cout << add(x,y) << endl;
    return 0;
}