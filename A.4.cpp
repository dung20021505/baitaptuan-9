#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int* a = &n;
	cout << n;
	delete a;
	cout << n;
	//vung nho bi giai phong ,  gay thap thoat du lieu 
	return 0;
}
