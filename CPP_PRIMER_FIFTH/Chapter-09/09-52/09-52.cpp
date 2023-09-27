/**
 * @file 09-52.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-24
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.52：使用stack处理括号化的表达式。
// 当你看到一个左括号，将其记录下来。
// 当你在一个左括号之后看到一个右括号，从stack中pop对象，直至遇到左括号，将左括号也一起弹出栈。
// 然后将一个值（括号内的运算结果）push到栈中，表示一个括号化的（子）表达式已经处理完毕，被其运算结果所替代。

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string evaluate(string s)
{
    // 去除()
    s.erase(s.end() - 1);
    s.erase(s.begin());

    string::size_type i = 0;
    while (i != s.size())
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            break;
        }
        ++i;
    }

    int lhs = stoi(s.substr(0, i));
    int rhs = stoi(s.substr(i + 1, s.size() - i - 1));
    if (s[i] == '+')
    {
        return to_string(lhs + rhs);
    }
    else if (s[i] == '-')
    {
        return to_string(lhs - rhs);
    }
    else if (s[i] == '*')
    {
        return to_string(lhs * rhs);
    }
    else if (s[i] == '/')
    {
        return to_string(lhs / rhs);
    }
    return "";
}

int main()
{
    // string expr = "(2+2)";              // 4
    // string expr = "(1+(2*4))";          // 9
    string expr = "((1+3)+((1+2)*5))"; // 19

    stack<char> st;
    string::size_type i = 0;
    while (i != expr.size())
    {
        if (expr[i] != ')')
        {
            st.push(expr[i]);
            ++i;
        }
        else
        {
            string temp_expr;
            temp_expr.push_back(')');
            while (st.top() != '(')
            {
                temp_expr.insert(temp_expr.begin(), st.top());
                st.pop();
            }
            st.pop();
            temp_expr.insert(temp_expr.begin(), '(');
            string temp_result = evaluate(temp_expr);
            for (const char &ch : temp_result)
            {
                st.push(ch);
            }
            ++i;
        }
    }

    string result;
    while (!st.empty())
    {
        result.insert(result.begin(), st.top());
        st.pop();
    }
    cout << result << endl;

    return 0;
}
