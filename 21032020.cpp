﻿#include <iostream>
//#include <Windows.h>
using namespace std;
int sum(int n) { // max n = 4790 
	if (n < 1)
		return 0;
	return sum(n - 1) + n;
}
long long fact(int n) {
	if (n < 1)
		return 1;
	return fact(n - 1) * n;
}
void showR(int n) { //5
	if (n < 1) return;
	cout << n << '\t';
	showR(n - 1);
}
void show(int n) { //5
	if (n < 1)
		return;
	show(n - 1);
	cout << n << '\t';
}
void setrnd(int arr[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = rand() % 11;
	}
}
void showarrR(int arr[], int n) {
	if (n < 1) return;
	cout << arr[n - 1] << "\t";
	showarrR(arr, n - 1);
}
void showarr(int arr[], int n) {
	if (n < 1) return;
	showarr(arr, n - 1);
	cout << arr[n - 1] << "\t";
}
int sum(int arr[], int n) {
	if (n < 1) return 0;
	return sum(arr, n - 1) + arr[n - 1];
}
inline int maxel(int a, int b) {
	return a > b ? a : b;
}
int max(int arr[], int n) {
	if (n == 1) return arr[0];
	return maxel(max(arr, n - 1), arr[n - 1]);
}
int main()
{
	/*int n;
	  cout << "Enter n=";
	  cin >> n;
	  int S = sum(n);
	  cout << "sum=" << S << endl;
	  cout << n<<"!=" << fact(n) << endl;
	  showR(n);
	  cout << endl;
	  show(n);*/
	srand(10);
	int mas[100]{};
	int n;
	cout << "Enter n=";
	cin >> n;
	setrnd(mas, n);
	showarr(mas, n);
	cout << "\nreverse\n";
	showarrR(mas, n);
	cout << "\n";
	cout << "\nsum arr=" << sum(mas, n) << endl;
	cout << "\nmax arr=" << max(mas, n) << endl;


}