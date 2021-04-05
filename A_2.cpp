#include <iostream>
using namespace std;
int main()
{
	double a[5] = { 1,2,3,4 };
	for (double* cp = a; (*cp) != '\0'; cp += 2) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
	//Kích thước kiểu int là 4
	//Kích thước kiểu double là 8
	//Kết quả tương tự, khác biệt là do biến cp đã bỏ qua một số biến thông qua tăng 2 thay vì tăng 1
}