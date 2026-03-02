// Arr = {5,7,3,11,15} how to find power of each array element
#include <iostream>
using namespace std;
int main(){
 int a[5] = {5,7,3,11,15};
for(int i = 0; i < 5; i++){
    cout<< a[i]*a[i]<< " ";
}
return 0;
}