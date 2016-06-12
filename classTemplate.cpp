//a template class
/*Write the class AddElements here*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template<typename T>

class AddElements{
    T a;

    public:
    AddElements(T b){
        a = b;
    }

    T add(T b){
        return a+b;
    }
    T concatenate(T b){
        return a+b;
    }
};

int main(){
    class AddElements<string> first("first");
    cout<<first.add("-second")<<endl;

    AddElements<double> number(1.5);
    cout<<number.add(2.5);
    return 0;
}

