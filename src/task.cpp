#include <task.h>

Task::Task(int id, const std::string &desc) : id(id), description(desc) {}

int Task::getId() const {
    return id;
}

std::string Task::getDescription() const {
    return description;
}

bool Task::isCompleted () const{
    return completed;
}

void Task::setDescription(const std::string &desc){
    description=desc;
}
void Task::markCompleted(){
    completed=true;
}