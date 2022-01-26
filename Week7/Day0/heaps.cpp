#include<iostream>
#include<vector>
#include "heap.h"
using namespace std;
int main(){
Heap<int>h;
h.push(5);
h.push(9);
h.push(7);
h.push(4);
h.pop();
h.print();
h.push(8);
h.push(1);
h.pop();
h.print();
h.push(13);
h.push(3);
h.pop();
h.print();
return 0;
}
