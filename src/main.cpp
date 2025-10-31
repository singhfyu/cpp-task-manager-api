#include <iostream>
#include <vector>
#include "task_manager.h"

int main(){
    TaskManager tm;
    int choice;
    int id;
    std::string desc;

    while(true){
        std::cout<<"\n1. Add Task\n2. List Tasks\n3. Complete Task\n4. Remove Task\n5. Exit\n";
        std::cout<<"Enter Choice: ";
        std::cin>>choice;

        switch(choice){
        case 1:
            std::cout<<"Enter description: ";
            std::cin.ignore();
            std::getline(std::cin, desc);
            tm.addTask(desc);
            break;
        case 2:
            tm.listTasks();
            break;
        case 3:
            std::cout<<"Enter task ID: ";
            std::cin>>id;
            tm.completeTask(id);
            break;
        case 4:
            std::cout<<"Enter task ID: ";
            std::cin>>id;
            tm.removeTask(id);
            break;
        case 5:
            std::cout<<"Goodbye !! \n";
            return 0;
        default:
            std::cout<<"Invalid Option. \n";
        }
    }

}