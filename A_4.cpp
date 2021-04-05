#include <iostream>
using namespace std;
int main() {
	char** s = new char*[100];
	char foo[] = "Hello World";
	*s = foo;
	printf("s is %s\n", *s);
	s[0][0]= foo[0];
	printf("s[0] is %c\n",s[0][0]);
	return(0);
}