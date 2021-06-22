#include<iostream>
#include<cctype>
#include<cstring>
#include<string>

using namespace std;

bool checkString(std::string studentID)
{
    bool valid=false;
    // if (std::strlen(studentID) == 10)
    if (studentID.size() == 10)
    {
        if (isdigit(studentID[0]))
        {
            int i = 0;
            while (studentID[i])
            {

                if (std::isalnum(studentID[i]))
                {
                    valid = true;
                }
                else
                {
                    std::cout << "Break due to:" << studentID[i];
                    valid = false;
                    break;
                }
                i++;
            }
        }
    }

    return valid;
}
int main()
{
    std::string studID;
    std::cout << "Enter your ID:";
    std::cin >> studID;
    std::cout << "\nThe size of string is:" << studID.size();
    std::cout << "\nThe first character is:" << studID[0];
    std::cout << "\nBool for first element:" << (bool)isdigit(studID[0]);
    bool rslt = checkString(studID);
    if (rslt == 1)
    {
        std::cout << "\nThanks for providing a valid ID" << std::endl;
    }
    else
    {
        std::cout << "\nInvalid ID";
    }
    return 0;
}