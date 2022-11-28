#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    // string text = "Hello .duanlianqi@gmail.com is my email address.";
    // //string pattern = "\\w+[\\w.]*@[\\w.]+\\.\\w+";
    // string pattern = "[\\w.]+@[\\w.]+\\.\\w+";
    // regex r(pattern, regex::icase);
    // smatch result4;
    // for (sregex_iterator it(text.begin(), text.end(), r), endIt; it != endIt; it++) {
    //     cout << it->str() << " ";
    // }

    // string text = "my website is http://www.test.com.cn/ or https://www.test.com.cn/ instead.";
    // string pattern = "http[s]?:\\/\\/[\\w.]+";
    // regex r(pattern, regex::icase);
    // for (sregex_iterator it(text.begin(), text.end(), r), endIt; it != endIt; it++) {
    //     cout << it->str() << " ";
    // }

    // string text = "color set is : #fefbd8, #00000f, #D0F406, #fffff, #FAABCC";
    // string pattern = "#[[:xdigit:]]{5,6}";
    // regex r(pattern);
    // for (sregex_iterator it(text.begin(), text.end(), r), endIt; it != endIt; it++) {
    //     cout << it->str() << " ";
    // }

    string data = "he...ll..o, worl..d!";
    regex reg("\\.");   //正则匹配点.
    cout << regex_replace(data, reg, "");
    return 0;
}