#include "../json-me.hpp" 
#include <iostream>
int main(int argc,char **argv) {
  jsonme::JsonMeLib jsonlib;
  try {
     jsonme::Node rootnode=jsonlib.parseFile("example.json");
     size_t index=0;
     std::string val=rootnode["gateways"][index]["name"];
     if (val == "gateway1"){
        return 0;
     }
     std::cerr << "'" << val << " found while 'gateway1' expected" << std::endl;
     return 1;
  } catch (jsonme::ParseError &e) {
     return 1;
  }
};
