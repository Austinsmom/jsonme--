#include "../json-me.hpp" 
#include <iostream>
int main(int argc,char **argv) {
  jsonme::JsonMeLib jsonlib;
  try {
     jsonme::Node object=jsonlib.object();
     long long x=-12345;
     object["foo"]=x;
     std::string jsonstring = object;
     if (jsonstring == std::string("")) {
        return 2;
     }
     std::cout << jsonstring;
  } catch (jsonme::ParseError &e) {
     return 1;
  }
  return 0;
};