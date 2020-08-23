#include <iostream>

int main(){
    long long int sum=10, x=2, y=8, curr=0;
    for(;;){
        curr = (4*y) + x; //Formula used-> 4(Fn-2) + (Fn-1)
        x=y;
        y=curr;
        if(sum>=4000000)
            break;
        sum+=curr;
    }
    std::cout<<sum;
    return 0;
}
