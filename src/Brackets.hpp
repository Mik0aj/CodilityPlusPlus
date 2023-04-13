#pragma once 
#include <stack>

using namespace std;

namespace brackets{
	int solution(string &S) {
    if (S.empty()) {
        return 1;
    }
    
    stack<char> brackets;
    
    for (auto character : S) {
        switch (character) {
            case '(':
            case '{':
            case '[':
                brackets.push(character);
                break;
            case ')':
                if (brackets.empty() || brackets.top() != '(') {
                    return 0;
                }
                brackets.pop();
                break;
            case '}':
                if (brackets.empty() || brackets.top() != '{') {
                    return 0;
                }
                brackets.pop();
                break;
            case ']':
                if (brackets.empty() || brackets.top() != '[') {
                    return 0;
                }
                brackets.pop();
                break;
        }
    }
    
    return brackets.empty() ? 1 : 0;
}
}
