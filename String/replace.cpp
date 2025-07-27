#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    string toReplace;getline(cin,toReplace);
    string replaceWith;getline(cin,replaceWith);
    string result = "";
    for (size_t i = 0; i < str.length(); ) {
        if (str.substr(i, toReplace.length()) == toReplace) {
            result += replaceWith;
            i += toReplace.length();
        } else {
            result += str[i];
            i++;
        }
    }
    cout << result << endl;
    return 0;
}
