// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

// #include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, x = "Ratul";
    getline(cin, a);
    stringstream oneword(a);
    string word;
    int flag = 0;
    while (oneword >> word)
    {
        if (word == x)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

/*
string s, x = "Ratul";
    getline(cin, s);
    int temp = s.find(x);
    if (temp >= 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
*/
