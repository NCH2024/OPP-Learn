

/* Viết chương trình nhập vào một chuỗi ký tự từ bàn phím, 
* sau đó kiểm tra xem chuỗi đó có phải là chuỗi Palindrome hay không.
* Chuỗi Palindrome là chuỗi mà đọc từ trái sang phải hoặc từ phải sang trái đều giống nhau.
*/

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char* str) {
    int len = strlen(str);
    const char* start = str;
    const char* end = str + len - 1;

    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char chuoi[100];

    cout << "Nhap vao mot chuoi ky tu: ";
    cin.getline(chuoi, 100);

    if (isPalindrome(chuoi)) {
        cout << "Chuoi la Palindrome" << endl;
    }
    else {
        cout << "Chuoi khong la Palindrome" << endl;
    }

    return 0;
}