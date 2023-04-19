#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;

map<string, int> var_map; //定义一个键为字符串，值为整数的映射表

int main()
{
    string input;
    getline(cin, input);
    while (input != "exit") { //如果输入不是“exit”，则继续循环
        if (input.find("print ") == 0) { //如果输入以“print ”开头，则输出该变量的值
            string var_name = input.substr(6); //获取变量名
            cout << var_map[var_name] << endl; //输出变量值
        }
        else if (input.find('=') != string::npos) { //如果输入包含“=”号，则将其解析为变量定义
            string var_name = input.substr(0, input.find('=')); //获取变量名
            int var_value = stoi(input.substr(input.find('=') + 1)); //获取变量值并转换为整数
            var_map[var_name] = var_value; //在映射表中定义变量
        }
        getline(cin, input); //读取下一行输入
    }
    return 0;
}

