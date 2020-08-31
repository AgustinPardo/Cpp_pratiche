#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

struct Record
{
    std::string name;
    std::string age;
};

std::vector<Record> myvect;

void Add_Record(std::string name, std::string age)
{
    Record record;
    record.name=name;
    record.age=age;
    myvect.push_back(record);
}

Record Fetch_Record(int ID)
{
    return myvect.at(ID);
}

int main()
{
    bool init=true;
    while (init)
    {
        int option;
        std::string name;
        std::string age;
        int ID;
        std::cout << "Please Select an Option:\n";
        std::cout << "1: Add Record\n";
        std::cout << "2: Fetch Record\n";
        std::cout << "3: Quit\n\n";

        std::cout << "Enter the option:";
        std::cin >> option;

        switch (option)
        {
            case 1:
                {
                std::cout << "Add User. Please neter user name and age\n";
                std::cout << "Enter the name:";
                std::cin >> name;
                std::cout << "Enter the age:";
                std::cin >> age;

                Add_Record(name, age);
                std::cout << "User added successfully\n\n";
                }
            break;
            case 2:
                {
                std::cout << "Select an user ID\n";
                std::cout << "Enter the ID:";
                std::cin >> ID;
                Record person;
                try
                 {
                    person = Fetch_Record(ID);
                  }
                catch (const std::out_of_range& oor) 
                  {
                     std::cout << "\nError: Invalid UserID.\n\n";
                     break;
                   }
               std::cout << "User Name: " << person.name << "\n";
               std::cout << "User Age: " << person.age << "\n\n";
                }
            break;
            case 3:
                {
                init = false;
                std::cout << "Quit successfully\n";
                }
            break;
        
            default:
                std::cout << "No valid option, enter 1, 2 or 3!\n\n";
        }
    }
}