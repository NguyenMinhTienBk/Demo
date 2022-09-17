/*#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	n = abs(n);
	int ntemp = n;
	int sodaoofn = 0, temp;
	while (ntemp != 0) {
		temp = ntemp % 10;
		sodaoofn = (sodaoofn * 10) + temp;
		ntemp = ntemp / 10;
	}
	if (n == sodaoofn) cout << 1;
	else cout<< -1;
	return 0;
}*/

/*/#include <iostream>
using namespace std;
int main() {
	int rows, cols;
	cin >> rows >> cols;
	int** matrix = new int* [rows];
	for (int i = 0;i < rows;i++) {
		matrix[i] = new int[cols];
	}
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cin >> matrix[i][j];
		}
	}
	int min, max, col;
	for (int i = 0;i < rows;i++) {
		min = matrix[i][0];
		col = 0;
		for (int j = 1;j < cols;j++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
				col = j;
			}
		}
		max = matrix[0][col];
		for (int j = 1;j < rows;j++) {
			if (max < matrix[j][col])
				max = matrix[j][col];
		}
		if (max == min) {
			cout << max;
		}

	}
	return 0;

}*/

/*#include <iostream>
using namespace std;
int main() {
	int rows, cols;
	cin >> rows >> cols;
	int** matrix = new int* [rows];
	for (int i = 0;i < rows;i++) {
		matrix[i] = new int[cols];
	}
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cin >> matrix[i][j];
		}
	}
	int Count = 0;
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			bool minofrows = true;
			bool maxofcols = true;
			for (int m = 0;m < cols;m++) {
				if (m != j && matrix[i][j] >= matrix[i][m]) {
					minofrows = false;
				}
			}
			for (int n = 0;n < rows;n++) {
				if (n != i && matrix[i][j] <= matrix[n][j]) {
					maxofcols = false;
				}
			}
			if (minofrows == true && maxofcols == true) {
				cout << matrix[i][j];
				Count++;
			}
			if (i == rows - 1 && j == cols - 1 && (minofrows == false || maxofcols == false)&& Count==0) {
				cout << -1;
			}
		}
	}
	return 0;
}*/


/*#include <iostream>
using namespace std;
int main() {

	int rows,cols;
	cin >> rows >> cols;
	int** matrix = new int* [rows];
	for (int i = 0;i < rows;i++) {
		matrix[i] = new int[cols];
	}
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cin >> matrix[i][j];
		}
	}
	int temp;
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			if (i >= j) {
				temp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = temp;
			}
		}
	}
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			cout << matrix[i][j];
			if (j == cols - 1) cout << endl;
			else {
				 cout<< " ";
			}
		}
	}
	return 0;
}*/

/*#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int[n + 1];
	int max = -999999;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0;i <= n;i++) {
		sum += arr[i];
		if (max < sum) {
			max = sum;
		}
	}
	
	for (int i = 1;i <= n;i++) {
		int sum1 = 0;
		for (int j = i;j < n;j++) {
			sum1 += arr[j];
			if (max < sum1) {
				max = sum1;
			}
		}
	}
	delete[] arr;
	cout << max;
	return 0;
}*/

/////////////////////////////////////////

/*#include <iostream>
#include<string.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	string stemp = "";
	int max = 1;
	for (int i = 0;i < s.length()-1;i++) {
		stemp = s[i];
		int count = 1;
		for (int j = i;j < s.length()-1;j++) {
			if (s[j] != s[j + 1]) {
				//stemp += s[j + 1];
				bool diff = true;
				for (int m = 0;m < stemp.length();m++) {
					if (s[j+1] == stemp[m]) {
						diff = false;
					}
				}
				if (diff == true) {
					stemp += s[j + 1];
					count++;
				}
			}
			else break;
		}
		if (count > max) max = count;
	}
	cout << max;
}*/

/*#include <iostream>
#include<string.h>

using namespace std;

int main() {
	// TODO
	string s;
	cin >> s;
	string stemp = "";
	string longest = "";
	for (int i = 0;i < s.length()-1;i++) {
		stemp = s[i];
		if (s[i]==s[i+1])
		{
			stemp += s[i + 1];
			for (int j = i - 1, k = i + 2;j >= 0 && k < s.length();j--, k++) {
				if (s[j] == s[k]) {
					stemp = s[j] + stemp + s[k];
				}
				else break;
			}
		}
		else {
			
			for (int j = i - 1, k = i + 1;j >= 0 && k < s.length();j--, k++) {
				if (s[j] == s[k]) {
					stemp = s[j] + stemp + s[k];
				}
				else break;
			}
		}
		if (stemp.length() > longest.length()) {
			longest = stemp;
		}
	}
	cout << longest;
	return 0;
}*/

/**#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int [n];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int sum = 0;
	int count = 0;
	for (int i = 0;i < n;i++) {
		if (arr[i] % 9 == 0 && arr[i] % 2 == 0) {
			sum += arr[i];
			count++;
		}
	}
	cout << sum / count;
	delete [] arr;
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	int sum = 0;
	int Trungbinhcong=0;
	for (int i = 0;i < n;i++) {
	     sum += arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	Trungbinhcong=sum / n;
	cout << "Phan tu max=" << max << endl;
	cout << "Phan tu min=" << min << endl;
	cout << "Cac phan tu <= TBC: ";
	for (int i = 0;i < n;i++) {
		if (arr[i] <= Trungbinhcong) {
			cout << arr[i]<<" ";
		}
	}
	cout << endl;
	cout << "Cac phan tu > TBC: ";
	for (int i = 0;i < n;i++) {
		if (arr[i] > Trungbinhcong) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	delete[] arr;
	return 0;
}*/

/*#include <iostream>
using  namespace std;
int findMax(int* vals, int numEls) {
	int Max = -9999999;
	for (int i = 0;i < numEls;i++) {
		int* temp = &vals[i];
		if (*temp > Max) {
			Max = *temp;
		}
	}
	return Max;
}

int main() {
	int arr[5] = { 10,20,5,6,30 };
	int result;
	result = findMax(arr, 5);
	cout << result;
	return 0;
}
*/

/*#include <iostream>
using namespace std;
void sortedSquares(int* nums, int size) {
	for (int i = 0;i < size;i++) {
		*(&nums[i]) *= *(&nums[i]);
	}
	int temp;
	for (int i = 0;i < size-1;i++) {
		for (int j = i + 1;j < size;j++) {
			if (*(&nums[i]) > *(&nums[j])) {
				temp = *(&nums[i]);
				*(&nums[i]) = *(&nums[j]);
				*(&nums[j]) = temp;
			}
		}
	}

}
int main() {
	int arr[5] = { 10,3,0,-1,-4 };
	sortedSquares(arr, 5);
	for (int i = 0;i < 5;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}*/

/*#include<iostream>

using namespace std;

long long infinite2DArray(int x, int y)
{
	

}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << infinite2DArray(x, y);
	return 0;
}*/

/*#include <iostream>
using namespace std;
void increase(int& n, int d) {
	// BEGIN your implementation 
	n = n + d;
	// END your implementation 
}
int main() {
	int num, d;
	cin >> num >> d;

	increase(num, d);
	cout << num;

	return 0;
}*/

/*#include<iostream>
using namespace std;
int** readArray()
{
	int** ptrarr = new int* [10];
	for (int i = 0;i < 10;i++) {
		ptrarr[i] = new int[10];
	}
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (ptrarr[i][j - 1] == 0 ) {
				//for (int k = j;k < 10;k++) {
					ptrarr[i][j] = 0;
				//}
				//break;
			}
			else cin >> ptrarr[i][j];
		}
	}
	return ptrarr;

}
int main()
{
	int** ar = readArray();
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++) cout << ar[i][j] << " ";
		cout << endl;
	}
	for (int i = 0;i < 10;i++) delete[] ar[i];
	delete[] ar;
	return 0;
}*/

/*#include<iostream>
using namespace std;
int* getValueAtIndex(int* arr, int n, int k)
{
	//for (int i = 0;i < n;i++) {
		//if (i == k) { return &arr[i]; }
	//}
	if (k < n && k >= 0) return &arr[k];
	return NULL;
}
int main()
{
	int n;
	cin >> n;
	int* ar = new int[n];
	for (int i = 0;i < n;i++) cin >> ar[i];
	int k;
	cin >> k;
	int* p = getValueAtIndex(ar, n, k);
	if (p == NULL) cout << "NULL pointer";
	else cout << *p;
	delete[] ar;
	return 0;
}*/


/*#include <iostream>
using namespace std;
// TODO
int findMax(int* p, int n)
{
	int max = -999999999;
	for (int i = 0;i < n;i++) {
		if (*p >= max) {
			max = *p;
		}
		
		if (i == n - 1) *p = 10;
		p++;
	}
	
	return max;
}

int main() {
	int n;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}
	cout << findMax(p, n) << endl;
	cout << p[n-1];
	delete[] p;
	return 0;
}*/

/// LINKED LIST

/*#include <iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* createLinkedList(int n)
{
	node* head = new node;
	cin >> head->data;
	node* p = head;
	for (int i = 0;i < n - 1;i++) {
		node* newnode = new node;
		cin >> newnode->data;
		p->next = newnode;
		p = p->next;
		if (i == n - 2) p->next = nullptr;
	}
	return head;
}
void print(node* head)
{
	while (head != nullptr)
	{
		cout << head->data << endl;
		head = head->next;
	}
}
int main()
{
	int n = 0;
	cin >> n;
	//if (n > 0)
	//{
		node* head = createLinkedList(n);
		print(head);
	//}
	//else
	//{
		//cout << "Invalid n" << endl;
	//}
		cout << head->data;
	return 0;
}
*/


/// Class

/*#include <iostream>
#include <string.h>

using namespace std;

template<class T>
class Cell {
protected:
	T infor;
public:
	void set(T _infor) { this->infor = _infor; };
	T get() { return this->infor; };
};

enum Color { White, Yellow, Black, Red, Blue };

// TODO

template <class T>
class ColoredCell : Cell; 



int main() {
	int test, c;
	cin >> test >> c;
	ColoredCell<int>* a = new ColoredCell<int>();
	switch (test)
	{
	case 1:
		a->setColor(Color(c));
		cout << int(a->getColor());
		break;
	case 2:
		a->setColor(Color(c));
		a->set(10);
		if (a->get() == NULL) cout << "null" << endl;
		else cout << *(a->get());
	default:
		break;
	}
	return 0;
}*/

#include <iostream>
using namespace std;

class NhanVien {
public:
	int maNV;
	NhanVien(int ma) {
		this->maNV = ma;
	}
	virtual string Loai() {
		return "Nhan Vien";
	}
};

class GiangVien : public NhanVien {
public:
	string hoten;
	GiangVien(int ma, string ht) : NhanVien(ma) {
		this->hoten = ht;
	}
	string Loai() {
		return "Giang Vien";
	}
};

int main() {
	NhanVien nv(1);
	cout << "Loai: " << nv.Loai() << endl;
	GiangVien gv(2, "Tien");
	cout << "Loai: " << gv.Loai() << endl;
	nv = gv;
	cout << "Loai: " << nv.Loai() << endl;
	return 0;

}





