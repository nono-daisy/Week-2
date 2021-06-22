#include<iostream>
#include<string>

const int N_LOCKERS{10};

void kubaza(){
    std::string name;
    std::string hitamo{"1"};

    std::cout << "Mbere yo gukoresha System Shyiramo Amazina Yawe:";
    std::getline(std::cin, name);
    std::cout << "Ese nkawe " << name << " Uzi ibyo urimo? \n Kanda rimwe niba ushaka gukomeza:";
    std::getline(std::cin, hitamo);
    if(hitamo=="1"){
        return;
    } else{
        std::cout << hitamo<< std::endl;
        kubaza();
    }
}


int main()
{ 
    kubaza();
  int lockers[N_LOCKERS] = { 0 };
  int index, inc;
  int opened = 0, closed = 0;
 
  for(inc = 2; inc <= N_LOCKERS; ++inc) {
    for(index = inc - 1; index < N_LOCKERS; index += inc) {
      if (lockers[index] == 1)
        lockers[index] = 0;
      else
        lockers[index] = 1;
    }
  }
// Codes to display the number of opened and Closed lockers
  for(index = 0; index < N_LOCKERS; ++index) {
    if(lockers[index] == 1){
      ++opened;
      std::cout << "Locker No " << index+1 << " Is opened" << std::endl;
    }
    else{
      ++closed;
      std::cout << "Locker No " << index+1 << " Is Closed" << std::endl;
    }
  }
   
 std::cout << "\n In Total, There are ("<< opened<< ") lockers open and ("<< closed <<") closed.\n" << std::endl;

  return 0;
}