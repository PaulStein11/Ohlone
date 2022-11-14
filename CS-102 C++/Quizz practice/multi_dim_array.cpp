#include <iostream>
#include <string>
using namespace std;
string decode(string encode, int key)
{
  string decoded = "";
  string test;
  for(int i = 0; i < encode.length(); i++)
  {
    int cypher = key%26;
    test = encode.at(i) - cypher;
    decoded = decoded + test;
  }
   return decoded;
}

string secret(string encode, int key)
{
  string encoded = "";
  string test;
  for(int i = 0; i < encode.length(); i++)
  {
    int cipher = key%23;
    test = encode.at(i) + cipher;
    encoded = encoded + test;
  }
   return encoded;
}

int main()
{
  string code = secret("HELLO", 50);
  cout << code << endl;
  cout << decode(code, 50) << endl;

}