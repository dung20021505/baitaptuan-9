#include<iostream>
using namespace std;
int main(){
int* p = new int;
int* p2 = p;
*p = 10;
delete p;
// p v� p2 c�ng tro toi 1 vi tri,  xoa gia tri se loi 
cout << *p2;
delete p2;
return 0; 
} 
