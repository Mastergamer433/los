#include <fstream>
#include <iostream>
#include <string>

void showHelp();
void readFile(std::ifstream* f, char *name){
  
}

int main(int argc, char** argv){
  // Check if you didnt give an argumnet
  if(argc == 0){
    std::cout << "Not enough arguments, type \"los --help\" to get help.";
    return 1;
  }
  // Loop through all the arguments
  for (int i = 0; i < sizeof(argv); i++) {
    if (argv[i] == "--help"){
      showHelp();
      return 0;
    }else{
      break;
    }
  }

  std::ifstream f;
  readFile(&f, argv[1]);
}
