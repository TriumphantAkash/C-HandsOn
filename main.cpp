#include <iostream>

using namespace std;

template <typename T>
T square(T x){
    return x*x;
}

template <typename T>
T cube(T x){
    return x*x*x;
}

int main(){
    cout<<square(5.5)<<endl;
    cout<<square(5);
    return 0;
}
