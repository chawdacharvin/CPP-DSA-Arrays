//SIZE OF DATA TYPE
#include<iostream>

int main(){
      int a = -5;
      float b = 3.45;
      double c = 3.4433443;
      char d = 'c';
      std::string s = "hello";

      std::cout<< sizeof(a) << "\n"<< a<< "\n";
      std::cout<< sizeof(b) << "\n";
      std::cout<< sizeof(c) << "\n";
      std::cout<< s.length() << "\n";// length in string
      std::cout<< sizeof(d) << "\n";
}