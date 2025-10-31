#include <iostream>
#include "task_manager.h"

TaskManager::TaskManager():nextId(1) {}

void TaskManager::addTask(const std::string &desc){
    tasks.emplace_back(nextId++, desc);
    std::cout<<"Task added successfully.\n";
}
void TaskManager::listTasks() const{
    if(tasks.empty()){
        std::cout<<"No tasks available.\n";
        return ;
    }
    for(auto &task:tasks){
        std::cout << task.getId() << "." << task.getDescription() ;
        if(task.isCompleted()) std::cout<<"[DONE] ";
        std::cout << std::endl;
    }
}
void TaskManager::completeTask(int id){
    for(auto &task:tasks){
        if(task.getId()==id){
            task.markCompleted();
            std::cout<<"Task"<<id<<" marked as completed.\n";   
            return;
        }
    }
    std::cout<<"Task not found.\n";
}
void TaskManager::removeTask(int id){
    for(auto it=tasks.begin(); it!=tasks.end(); it++){
        if(it->getId()==id){
            tasks.erase(it);
            std::cout<<"Task removed successfully.\n";
            return;
        }
    }
    std::cout<<"Task not found.\n";
}
