#include <iostream>
#include <sstream>
using namespace std;

string timeConversion(string s) {
    stringstream ss(s);
    int hours, minutes, seconds;
    char c;
    string timespec;
    ss >> hours >> c
        >> minutes >> c
        >> seconds
        >> timespec;
    string temp;
    if (timespec == "AM") {
        if (hours == 12) {
            hours = 0;
        }
        char temp1 = hours / 10 + '0';
        char temp2 = hours % 10 + '0';
        temp += temp1;
        temp += temp2;
        for (unsigned i = 2; i <= s.size() - 3; ++i) {
            temp += s[i];
        }
        return temp;
    }
    else {
        if (hours != 12) {
            hours += 12;
        }
        char temp1 = hours / 10 + '0';
        char temp2 = hours % 10 + '0';
        temp += temp1;
        temp += temp2;
        for (unsigned i = 2; i <= s.size() - 3; ++i) {
            temp += s[i];
        }
        return temp;
    }
}
int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);
    cout << result << "\n";
    return 0;
}
