#include <bits/stdc++.h>
using namespace std;
  
string replacePi(string input)
{
    string output;
  
    int size = input.length();
  
    for (int i = 0; i < size; ++i) {

        if (i + 1 < size && input[i] == 'p' && input[i + 1] == 'i') {
            output += "3.14";
            i++;
        }
  
        else {
            output += input[i];
        }
    }
    return output;
}
  
int main()
{
    string input = "2 * ppi + 3 * pi = 5 * pi";
    cout << replacePi(input);
    return 0;
}
