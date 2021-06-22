#include <iostream>
#include <string>
 
int main() 
{
    std::string returnString;
    int number{23}; int width;
    std::cout << "\nEnter any Number:";
    std::cin >> number;
    std::cout << "\nEnter the width:";
    std::cin >> width;
    std::string f_str = std::to_string(number);
    int len=f_str.size();
    std::cout << "\nThe size of a string is:" << len ;
    if(len<width){
        char add{'0'};
        std::string format_beforeString;
        for(int i=0;i<width-len;i++){
            format_beforeString += add;
        }
        returnString=format_beforeString+ f_str;
        std::cout << "\nThe generated string is:"<< format_beforeString ;
    }else{
    returnString= f_str;
    }
    std::cout << "\nThe string is:" << returnString;
    return 0;
}