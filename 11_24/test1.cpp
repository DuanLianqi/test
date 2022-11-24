#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    // string text = "Hello, my name is Ben. Please visit my website! My, MY mY";
    
    // string pattern1 = "Ben";
    // regex r1(pattern1);
    // smatch result1;

    // //匹配第一个符合的单词
    // if (regex_search(text, result1, r1)) {
    //     cout << result1.str() << endl;
    // }

    // //匹配所有符合的单词，并忽略大小写
    // string pattern2 = "my";
    // regex r2(pattern2, regex::icase);
    // smatch result2;

    // for (sregex_iterator it(text.begin(), text.end(), r2), endIt; it != endIt; it++) {
    //     cout << it->str() << " ";
    // }
    // cout << endl;

    // //.用来匹配任意一个单个的字符
    // string text2 = "His has two history books, but hesitate h.s!";
    // string pattern3 = "h.s";
    // regex r3(pattern3, regex::icase);
    // smatch result3;
    // for (sregex_iterator it(text2.begin(), text2.end(), r3), endIt; it != endIt; it++) {
    //     cout << it->str() << " ";
    // }

    string text3 = "sales.xls, orders.xls, apac.xls, europe.xls, na.xls, sa.xls, tat.xls";
    string pattern4 = "[ns]a\\.xls";
    regex r4(pattern4, regex::icase);
    smatch result4;
    for (sregex_iterator it(text3.begin(), text3.end(), r4), endIt; it != endIt; it++) {
        cout << it->str() << " ";
    }
    return 0;
}