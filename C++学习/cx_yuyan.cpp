#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;

map<string, int> var_map; //����һ����Ϊ�ַ�����ֵΪ������ӳ���

int main()
{
    string input;
    getline(cin, input);
    while (input != "exit") { //������벻�ǡ�exit���������ѭ��
        if (input.find("print ") == 0) { //��������ԡ�print ����ͷ��������ñ�����ֵ
            string var_name = input.substr(6); //��ȡ������
            cout << var_map[var_name] << endl; //�������ֵ
        }
        else if (input.find('=') != string::npos) { //������������=���ţ��������Ϊ��������
            string var_name = input.substr(0, input.find('=')); //��ȡ������
            int var_value = stoi(input.substr(input.find('=') + 1)); //��ȡ����ֵ��ת��Ϊ����
            var_map[var_name] = var_value; //��ӳ����ж������
        }
        getline(cin, input); //��ȡ��һ������
    }
    return 0;
}

