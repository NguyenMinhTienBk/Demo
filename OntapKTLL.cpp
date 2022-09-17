// Array

/*#include <iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int indexmax1 = 0, indexmax2 = 0, indexmax3 = 0;
	int max1 = DBL_MIN;
	int max2 = DBL_MIN;
	int max3 = DBL_MIN;
	for (int i = 0;i < n;i++) {
		if (arr[i] > max1) {
			max1 = arr[i];
			indexmax1 = i;
		}
	}
	for (int i = 0;i < n;i++) {
		if (arr[i] > max2 && i!=indexmax1) {
			max2 = arr[i];
			indexmax2 = i;
		}
	}
	for (int i = 0;i < n;i++) {
		if (arr[i] > max3 && i != indexmax1 && i != indexmax2) {
			max3 = arr[i];
			indexmax3 = i;
		}
	}
	cout << max1 + max2 + max3;
	return 0;
}*/


/*#include <iostream>
using namespace std;
bool checkQeen(int** arr, int element, int row, int col, int rowcheck, int colcheck) {
	//check row 
	for (int n = 0;n < col;n++) {
		if (arr[rowcheck][n] > element && n!=colcheck) {
			return false;
		}
	}

	// check col;
	for (int n = 0;n < row;n++) {
		if (arr[n][colcheck] > element && n != rowcheck) {
			return false;
		}
	}
	// check đương chéo bên trái và ở phía trên

	int rowtemp = rowcheck - 1;
	int coltemp = colcheck - 1;
	while (rowtemp >= 0 && coltemp >= 0) {
		if (arr[rowtemp][coltemp] > arr[rowcheck][colcheck]) {
			return false;
		}
		rowtemp--;
		coltemp--;
	}
	// check đương chéo bên phải và ở phía dưới

	rowtemp = rowcheck + 1;
	coltemp = colcheck + 1;
	while (rowtemp <row && coltemp <col) {
		if (arr[rowtemp][coltemp] > arr[rowcheck][colcheck]) {
			return false;
		}
		rowtemp++;
		coltemp++;
	}
	// check đương chéo bên trái và ở phía dưới

	rowtemp = rowcheck + 1;
	coltemp = colcheck - 1;
	while (rowtemp <row && coltemp >= 0) {
		if (arr[rowtemp][coltemp] > arr[rowcheck][colcheck]) {
			return false;
		}
		rowtemp++;
		coltemp--;
	}
	// check đương chéo bên phải và ở phía trên

	rowtemp = rowcheck - 1;
	coltemp = colcheck + 1;
	while (rowtemp >=0 && coltemp <col) {
		if (arr[rowtemp][coltemp] > arr[rowcheck][colcheck]) {
			return false;
		}
		rowtemp--;
		coltemp++;
	}
	return true;
}

int main() {

	int row,col;
	cin >> row >> col;
	int** arr = new int*[row];
	for (int i = 0;i < row;i++) {
		arr[i] = new int[col];
	}
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			cin >> arr[i][j];
		}
	}
	int count = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if (checkQeen(arr, arr[i][j], row, col, i, j) == true) {
				cout << arr[i][j] << " ";
				count++;
			}
		}
	}
	cout << count;
	
	return 0;
}*/

// 12. Funtion . On KTLT Tuan 1

/*#include <iostream>
#include <math.h>
using namespace std;
char* demicaltobinary(int num, int& lengthOfBinCode) {
	char* binary= new char[lengthOfBinCode];
	int temp = num;
	unsigned sodu=0;
	int index = lengthOfBinCode - 1;
	do
	{
		sodu = temp % 2;
		temp = temp / 2;
		if (sodu == 0) {
			binary[index] = '0';
		}
		else if (sodu == 1) {
			binary[index] = '1';
		}
		index--;
	} while (temp!=0);
	for (int i = index;i >= 0;i--) {
		binary[i] = '0';
	}
	return binary;
}
int main() {
	int num;
	cin >> num;
	int lengthOfBinCode;
	cin >> lengthOfBinCode;
	if (num >= pow(2, lengthOfBinCode)) {
		cout << "Khong the doi:";
		return 0;
	}
	char* binary= new char[lengthOfBinCode];
	//char* p = binary;
	binary = demicaltobinary(num, lengthOfBinCode);
	//delete[] p;
	for (int i = 0;i < lengthOfBinCode;i++) {
		cout << binary[i];
	}
	delete[] binary;
	return 0;
}*/

// Recurtion
// thao tac tren mang
// 1.

/*#include<iostream>
using namespace std;
//static int max = DBL_MIN;
int Max(int* arr, int n,int index) {
	static int max = arr[0];
	if (index == n) {
		return max;
	}
	if (arr[index] > max) {
		max = arr[index];
	}
	Max(arr, n, index + 1);
	return max;
}
int main() {
	int n;
	cin >> n;
	int* arr = new int [n];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int max = Max(arr, n, 0);
	cout << max;
	return 0;

}*/

// thao tac tren chuoi
//3.
/*#include<iostream>
using namespace std;
void print(string str) {
	static int index = 0;
	if (index == str.length()) {
		return;
	}
	cout << str[index];
	index++;
	print(str);
}
int main() {
	string str;
	cin >> str;
	print(str);
	return 0;
}*/

/*#include<iostream>
using namespace std;
/**class human {
	int pv;
protected:
	int pr;
public:
	int pb;
	human(int pv, int pr, int pb) {
		pv = pv;
		pr = pr;
		pb = pb;
	}
};

class nam : public human{
	string sex="nam";
public:
	int Tuoi;
	nam(string sex) {
		sex = sex;
	}
	void foo(){

		pr = 10;
		pb = 5;
		cout << "huy";
	}
};*/

//void fn(int n[]) {
	//[3] += 1;
//}
//int main() {
	//nam Tien("Nam");
	//Tien.pb;
//int i = 2;
//if (i = 0) {
	//cout << "1";
//}
//else if (i == 2) {
	//cout << "2";
//}
//else cout << "3";
	//const int i ;
	//int* const ptr;
	/*char  a[11] = "dontfail";
	cout << sizeof(a) << endl;
	cout << strlen(a);*/
	//nt a1 = 0,a2=0;
	/*char ch = 'a';
	switch (ch)v
	{
	case 'b': {a = 5;}
	case 'a': {a = 4;}
	default:
		break;
	}*/
	//int b = a1++;
	//int c = ++a2;

	//cout<< a1<<" "<<a2<<" "<<b<<" "<<c;

	//int ar[3] = { 10,20,30 };
	//int* ptr = ar;
	//cout << *ptr << "&";
	//cout << *(++ptr);
	//const int* ptr = &b;
	//int const* ptr1 = &c;
	//int* const ptr2 = &a2;
	//*ptr = c;
	//ptr = &a1;
	//*ptr1 = 1000;
	//ptr2 = &b;

	/*cout << 15 / -4 << " " << 15 % -4 << endl;
	int n, x = 7;
	x = x - 1;
	n = (n = 5, n *= 10 + x);
	x--;
	cout << n << " " << x << endl;
	int a[][4] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0;i < 4;i++) {
		cout << a[0][i] << " ";
	}
	cout << endl;
	int num[5] = { 2,4,6,8,10 };
	int i;
	fn(num);
	for (i = 0;i < 5;i++) {
		cout << num[i] << " ";
	}
	return 0;

}*/


// bài 1 Đề KTLL cuối kỳ 2015-2016

/*#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int s = 0;
	for (int i = 1;i < a;i++) {
		if (a % i == 0) {
			s += i;
		}
	}
	if (s < a) cout << "deficient";
	else if (s == a) cout << "perfect";
	else if (s > a) cout << "abundant";
	return 0;
}*/

// bài 2 Đề KTLL cuối kỳ 2015-2016

/*#include<iostream>
using namespace std;

bool isPrime(int n) {
	if (n == 1) return false;
	if (n == 2) return true;
	for (int i = 2;i < n;i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a;
	cin >> a;
	int temp = a;
	cout << "1 * ";
	for (int i = 2;i <= a;) {
		if (isPrime(i) == true) {
			if (temp % i == 0) {
				temp /= i;
				if (temp == 1) cout << i;
				else cout << i << " * ";
				
			}
		}
		if (temp % i != 0) {
			i++;
		}
	}
	return 0;
}*/

// bài 2 Đề KTLL cuối kỳ 2015-2016

/*#include <iostream>
using namespace std;

string intostr(int n) {
	static string str = "";
	if (n == 0) return str;
	intostr(n / 10);
	if (n % 10 == 0) { str += "0"; }
	else if (n % 10 == 1) { str += "1"; }
	else if (n % 10 == 2) { str += "2"; }
	else if (n % 10 == 3) { str += "3"; }
	else if (n % 10 == 4) { str += "4"; }
	else if (n % 10 == 5) { str += "5"; }
	else if (n % 10 == 6) { str += "6"; }
	else if (n % 10 == 7) { str += "7"; }
	else if (n % 10 == 8) { str += "8"; }
	else if (n % 10 == 9) { str += "9"; }
	return str;
}

bool palindrome(const string& str)
{
	int i = 0;
	int length = str.length();
	int j = length - 1;
	float step = length / 2.0;
	while (i < step) {
		if (str[i] != str[j]) {
			return false;
		}i++;j--;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	string str = intostr(n);
	bool result = palindrome(str);
	if (result == true || n <10 ) cout << " So doi xung";
	else cout << "So khong doi xung";
	return 0;
}*/


/*/#include<iostream>
using namespace std;

typedef struct {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Books;

int main() {
	Books Book1;
	strcpy_s(Book1.title , "Learn C++ Programming");
	strcpy_s(Book1.author ,5, "Cha");
	strcpy_s(Book1.subject, "C++ Programming");
	Book1.book_id = 6495407;

	cout << Book1.title << endl;
	cout << Book1.author << endl;
	cout << Book1.subject << endl;
	cout << Book1.book_id << endl;

	return 0;
}*/

/*/#include<iostream>
using namespace std;
int num = 8; // global variable
int main() {
	int num = 10; //local variable
	cout << "Local variable num = " << num << endl;
	cout << "Global variable num = " << ::num << endl;
	return 0;
}*/

/*#include <iostream>
#include <math.h>
void foo(char* pStr) {
	char buf[10];
	strcpy_s(buf, pStr);
}
int main() {
	char pStr[] = "This string will overwrite the local buffer";
	foo(pStr);
	return 0;
}*/

/*#include<iostream>

using namespace std;

int countCharacter(const char str[], char key)
{
	int result = 0;
	for (int i = 0;i < sizeof(str);i++) {
		if (str[i] == key) {
			result++;
		}
	}
	return result;
}

int main() {
	char data[] = "Hello";
	char key = 'l';
	cout << countCharacter(data, key);
	return 0;
}*/


/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str("nobody does like nobody this");
	string key("nobody");
	size_t f;
	f = str.rfind(key); // tìm vị rí xuất hiện cuối cung của chuỗi
	cout << f << endl;
	cout << string::npos << endl;
	if (f != string::npos)
		str.replace(f, key.length(), "everybody");
	cout << str << endl;
	return 0;
}*/


/*#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[15] = "Hello";
	char str2[10] = "World";
	char str3[10];
	int  len;
	strcpy_s (str3, str1);
	strcat_s (str1, str2);// concatenate string kết hợp chuỗi 
	len = strlen(str1);
	cout << len << endl;
	return 0;
}*/

/*#include <iostream> 
#include <string>
#include <cstring>
using namespace std;
int main(int argc, char const* argv[])
{
	const char* a = "Hello\0World";
	cout << *a;
	return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str("Ubuntu");
	cout << str.capacity() << " ";
	cout << str.max_size();
	return 0;
}*/

/*#include <iostream>
#include <string>

int main()
{
	std::string str("Test string");
	std::cout << "size: " << str.size() << "\n";
	std::cout << "length: " << str.length() << "\n";
	std::cout << "capacity: " << str.capacity() << "\n";
	std::cout << "max_size: " << str.max_size() << "\n";
	return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	const string str("microsoft");
	string::reverse_iterator r;
	for (r = str.rbegin(); r < str.rend(); r++)
		cout << *r;
	return 0;
	// output :ftosorcim // đảo ngược chuỗi
}*/

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str("steve jobs is ablegend");
	string::iterator it;
	str.erase(str.begin() + 5, str.end() - 7);
	cout << str << endl;
	return 0;
	// output: steveblegend 
}*/

/*#include <iostream>
using namespace std;

int main()
{
	char fine, course;
	cout << "Enter a word: ";
	fine = cin.get();
	//cin.sync();
	course = cin.get();
	cout << fine << endl;
	cout << course << endl;
	return 0;
}*/

/*#include <fstream>
#include <iostream>
using namespace std;

int main() {
	char data[100];

	// open a file in write mode.
	ofstream outfile;
	outfile.open("afile.dat");

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);

	// write inputted data into the file.
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();

	// again write inputted data into the file.
	outfile << data << endl;

	// close the opened file.
	outfile.close();

	// open a file in read mode.
	ifstream infile;
	infile.open("afile.dat");

	cout << "Reading from the file" << endl;
	infile >> data;

	// write the data at the screen.
	cout << data << endl;

	// again read the data from the file and display it.
	infile >> data;
	cout << data << endl;

	// close the opened file.
	infile.close();

	return 0;
}*/

// Test code quiz5 :Funtion Thầy Lưu quang Huân

/*#include <iostream>
using namespace std;
int factorial(int a)
{
	if (a > 1)
		return (a * factorial(a + 1));// a tăng đến bao giờ mới xong
	else
		return 1;
}
int main()
{
	int num = 3;
	cout << num << "! = " << factorial(num);
	return 0;
}*/

/*#include <iostream>
using namespace std;
int foo(int x = 5, int y, int z = 10) {

}
int main() {

	return 0;
}*/

/*#include <iostream>
using namespace std;
void copy(int& a, int& b, int& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}
int main()
{
	int x = 1, y = 3, z = 7;
	copy(x, y, z);
	cout << "x =" << x << ", y =" << y << ", z =" << z;
	return 0;
}*/

/*#include <iostream>
using namespace std;
void fun(int& x)
{
	x = 20;
}
int main()
{
	int x = 10;
	fun(x);
	cout << "New value of x is " << x;
	return 0;
}*/


// Test code Lab5 :Funtion Thầy Lưu quang Huân

/*#include<iostream>
#include<stdio.h>
#include<stdbool.h>
using namespace std;
int recursive(int value) {
	static int count = 0,sum=0;
	if (count % 2 == 0) {
		sum += value % 10;
	} else sum -= value % 10;
	if (value == 0) {
		return count % 2 == 0 ? sum : -sum;
	};
	count++;
	recursive(value / 10);
}

void upperFirstLetter(char* text) {
	if ((text[0]) < 'z' && text[0]>'a') text[0] -= 32;
	//for (int i = 1;i < sizeof(text);i++) {
		//if (text[i - 1] == ' ' && text[i] < 'z' && text[i]>'a') {
		//	text[i] -= 32;
		//}
	//}
	int i = 0;
	while (true)
	{
		
		if (text[i - 1] == ' ' && text[i] < 'z' && text[i]>'a') {
			text[i] -= 32;
		}
		if (text[i+1] == '\0') break;
		i++;
	}
	cout << sizeof(text) << endl;
}

void reverse(char str[]) {
	int Length= 0;
	while (str[Length] != '\0') {
		Length++;
	}
	float nuadodai = Length / 2;
	int i = Length-1;
	char temp;
	for (int j = 0 ;i >= nuadodai;i--, j++) {
		temp=str[j] ;
		str[j] = str[i];
		str[i] = temp;
	}
}

int main() {
	int result = recursive(12345);
	cout << result << endl;
	char text[] = "chu Be loat choat 28";
	upperFirstLetter(text);
	cout << text << endl;
	reverse(text);
	cout << text;
	return 0;
}*/

// Test code Lab6 : Recursion Thầy Lưu quang Huân

/*#include <iostream>
using namespace std;
int strLen(char* str)
{
	if (*str == NULL) {
		return 0;
	}
	else return strLen(str + 1) + 1;
}
int findGCD(int a, int b)
{
	if (b == 0) {
		return a;
	}
	else { return findGCD(b, a % b); }
}
int decimalToBinary(int decimal_number)
{
	if (decimal_number == 0) {
		return 0;
	}
	else
		return (decimal_number % 2 + 10 *
			decimalToBinary(decimal_number / 2));
}

void printPattern1(int n) {
	cout << n << " ";
}
void printPattern(int n)
{
	if (n > 0) {
		cout << n << " ";
		printPattern(n - 5);
	}  printPattern1(n);
}

int main() {
	char str[] = "Truong DH Bach Khoa";
	cout << strLen(str) << endl;
	cout << findGCD(124, 32)<<endl;
	cout << decimalToBinary(20) << endl;
	printPattern(10);
	return 0;
}*/

// Test code quiz9 : OOP Thầy Lưu quang Huân

/*#include <iostream>
using namespace std;

class Lop1 {

private:

	int a, b;

	friend class Lop2;
};

class Lop2 {

public:

	Lop1 obj1;

	void nhap() {

		cout << "\n\t a, b = "; cin >> obj1.a >> obj1.b;

	};
};

void main() {

	Lop2 obj;

	obj.nhap();
	
}*/

// De cuoi ky 2013-2014 KLL

#include<iostream>
#include<vector>
using namespace std;

//cau10
//struct a, b, c { int x; double y; } z;
//struct z { int x; double y; } a, b, c;
//struct a, b, c { int x; double y; };
//struct z { int x; double y; }; z a, b, c;
//struct { int x; double y; } a, b, c;
//-----
// 12
/*class MyClass {
public: MyClass() { cout << 'A'; }
	  MyClass(char C) { cout << C; }
	  ~MyClass() { cout << 'B'; }
};
 void main() {
	 MyClass p1, * p2;
	 p2 = new MyClass('X');
	 delete p2;
}*/
//-----
//13
//class MyClass { public: MyClass() { cout << 1; } };
	//				  void main() {
		//				  MyClass a, b[2]; //* p[2];
			
//		  }
// ----
//17

/*int main() {
	//char arr[] = { 'a', 'b', 'c', 'd' };
	//cout << arr[5];
	char arr[] = "abcd";
	cout << arr[];

	return 0;
}*/

//19
/*struct Foo1 {
	char str[32];
	float a;
} x;
union Foo2 {
	char str[32];
	float a;
} y;
void main() {
	cout << sizeof(x) << sizeof(y);
}*/

//26
/*class watch {
	void watch1() { // tên hàm trùng với class
		hour = 0;
		minute = 1;
	}
private:
	 int hour = 12; // trong private làm éo gì gán được
	 int minute;
};
int main() {
	watch gio;
	cout<< gio.
}*/

//27
/*#include <iostream>
 class A {
public: A() { cout << "A"; }
	   ~A() { cout << "a"; }
};
 class B {
	
	 public: 
		 A a;
     B() { cout << "B"; }
	 ~B() { cout << "b"; }
	 
};
 void main() { B b; }
 */

//28
/*class MyClass { public: void Print() const { cout << 23; } };
					  void main() {
						  MyClass* p = new MyClass();
						  p->Print();
					  }*/

/*using namespace std;
class Father {
public: Father() { cout << "Cha "; }
};
class Child : private Father {
public: Child() { cout << "Con "; }
};
void main() {
	Child c;
}*/

//int main() {
	//câu2
	//vector<int> x[4][] = { {1, 2, 3,}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3} };
	//cau 8
	//int* p, str[10];
	//p = str;
	//int* p, * q;
	//p = 0;cout << *p << " " << p << endl;
	//p = p + q;
	//p = p + (10 + 3);cout << *p << " " << p << endl;
	//if (p == q) cout << "="; else if (p != q) cout << "!";
	//register <int> a;
	

//}

#include <iostream>
using namespace std;

/*int sumOddDigit(int n) {
	if (n < 0) return -1;
	static int sum = 0;
	if (n == 0) return sum;
	if ((n % 10) % 2 == 1) {
		sum += n % 10;
	}
	sumOddDigit(n / 10);
	
}

void In(int a[], int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i != j && a[i] % a[j] == 0) {
				cout << a[i] << " ";
				break;
			}
		}
	}
}*/

/*class MonHoc {
	int MMH;
	string tenmh;
	float dgk;
	float dck;
public:
	void SetMHH(int mmh) {
		this->MMH = mmh;
	}
	void SetTenMonHoc(string tenmh) {
		this->tenmh = tenmh;
	}
	void SetDGK(float dgk) {
		this->dgk = dgk;
	}
	void SetDCK(float dck) {
		this->dck = dck;
	}
};

class SinhVien {
	int MSSV;
	string ht;
	MonHoc mh;
public:
	SinhVien() {};
	SinhVien(int mssv, string ht, MonHoc mh) {
		this->MSSV = mssv;
		this->ht = ht;
		this->mh = mh;
	}
	void SetMSSV(int mssv) {
		this->MSSV = mssv;
	}
	void SetHoTen(string ht) {
		this->ht = ht;
	}
	void SetMonHoc( MonHoc mh) {
		this->mh = mh;
	}
	int GetMSSV() {
		return this->MSSV;
	}
	string GetHoTen() {
		return this->ht;
	}
	MonHoc GetMonHoc() {
		return this->mh ;
	}
};


int main() {
	//cout << sumOddDigit(1468952) << endl;
	//int a[6] = {9, 2, 3, 4, 5, 6};
	//In(a, 6);
	int MSSV;
	string ht;
	int MMH;
	string Tenmh;
	int dgk, dck;
	SinhVien sinhvien[300];
	for (int i = 0;i < 300;i++) {

		cout << "Nhap Ten Sinh Vien";cin >> ht;sinhvien[i].SetHoTen(ht);
		cout << "Nhap MSSV";cin >> MSSV;sinhvien[i].SetMSSV(MSSV);
		cout << "Nhap MHH";cin >> MMH;sinhvien[i].GetMonHoc().SetMHH(MMH);
		cout << "Nhap Ten Mon Hoc";cin >> Tenmh;sinhvien[i].GetMonHoc().SetTenMonHoc(Tenmh);
		cout << "Nhap Diem Giua Ky";cin >> dgk;sinhvien[i].GetMonHoc().SetDGK(dgk);
		cout << "Nhap Diem Cuoi Ky";cin >> dck;sinhvien[i].GetMonHoc().SetDCK(dck);
	}

	return 0;
}*/

/// Dề cuoi kỳ 2011-2012
/*#include <iostream>
 using namespace std;
 class base {
 private: int a;
 protected: int b;
 public: int c;
 base() { a = 1; b = 2; c = 3; }

};
class deri : public base {
 public: deri() { cout << a << b << c; }

};
void main() {
deri d;
}*/

#include <iostream>
using namespace std;
class MyStaticClass {
protected:
		static int value;
		MyStaticClass() { value++; }
		 ~MyStaticClass() {}
		
};
 int MyStaticClass::value;
 void main() {
	 MyStaticClass::value = 0;
	  for (int i = 0; i < 9; i++)
		 MyStaticClass * c = new MyStaticClass();
	  cout << MyStaticClass::value;
	 
 }
