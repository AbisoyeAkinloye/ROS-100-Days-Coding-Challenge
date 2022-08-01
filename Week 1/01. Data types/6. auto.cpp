#include <iostream>

using namespace std;

int main(){
    // detect data type automatically
    auto var1 {2022}; // int
    auto var2 {20.22}; // double
    auto var3 {0.2022f}; // float
    auto var4 {'o'}; // char
    auto var5 {2022.0l}; // long

    auto var6 {123u}; // unsigned int
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    return 0;
}