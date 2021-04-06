#include <iostream>
using namespace std;
void reverse(char* s)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	for (int i = 0; i < t/2; i++)
	{
		char c = *(s + t - i - 1);
		*(s + t - i - 1) = *(s + i);
		*(s + i) = c;
	}
}
void delete_c(char* s, char c)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	for (int i = 0; i < t;)
		if (*(s + i) == c)
		{
			for (int j = i; j < t; j++) *(s + j) = *(s + j + 1);
			t--;
		}
		else i++;
}
void pad_right(char* s, int n)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	if (t < n) {for (int i = t; i < n; i++) *(s + i) = '_'; *(s + n) = '\0';}
}
void pad_left(char* s, int n)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	if (t < n)
	{
		for (int i = n - 1; i >= n - t; i--) *(s + i) = *(s + i - (n - t));
		for (int i = 0; i < n - t; i++) *(s + i) = '_';
	}
}
void truncate(char* s, int n)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	if (t > n) *(s + n) = '\0';
}
bool isPalindrome(char* s)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	for (int i = 0; i < t / 2; i++)
		if (*(s + i) != *(s + t - i - 1)) return false;
	return true;
}
void trimleft(char* s)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	int pos = 0;
	while (*(s + pos) == '_') pos++;
	for (int i = pos; i < t; i++) *(s + i - pos) = *(s + i);
	*(s + t - pos) = '\0';
}
void trimright(char* s)
{
	int t = 0;
	while (*(s + t) != '\0') t++;
	int pos = t - 1;
	while (*(s + pos) == '_') pos--;
	*(s + pos + 1) = '\0';
}
int main()
{
	cout << boolalpha;
	char* s = new char[100];
	cin >> s;
	reverse(s);
	cout << s << endl;
	char c;
	cin >> s >> c;
	delete_c(s, c);
	cout << s << endl;
	int n;
	cin >> s >> n;
	pad_right(s, n);
	cout << s << endl;
	cin >> s >> n;
	pad_left(s, n);
	cout << s << endl;
	cin >> s >> n;
	truncate(s, n);
	cout << s << endl;
	cin >> s;
	cout << isPalindrome(s) << endl;
	cin >> s;
	trimleft(s);
	cout << s << endl;
	cin >> s;
	trimright(s);
	cout << s << endl;
	return 0;
}
