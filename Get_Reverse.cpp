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

using namespace std;
class Student
{

public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main()

{
    int input;
    cin >> input;
    Student array[input];
    for (int i = 0; i < input; i++)
    {
        cin >> array[i].nm >> array[i].cls >> array[i].s >> array[i].math_marks >> array[i].eng_marks;
    }

    for (int i = input - 1; i >= 0; i--)
    {
        cout << array[i].nm << " " << array[i].cls << " " << array[i].s << " " << array[i].math_marks << " " << array[i].eng_marks << endl;
    }

    return 0;
}