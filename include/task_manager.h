#pragma once
#include <vector>
#include "task.h"

class TaskManager{
    private:
        std::vector<Task> tasks;
        int nextId;
    public:
        TaskManager();
        void addTask(const std::string &desc);
        void listTasks() const;
        void completeTask(int id);
        void removeTask(int id);
};