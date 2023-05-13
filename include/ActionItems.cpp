#include "ActionItems.h"
#include <iostream>
using namespace std;

ActionItems::ActionItems(int unique_id, string name, string description, string priority, string severity,
                         double date_raised, double date_assigned, double exp_compl_date, double act_compl_date,
                         string status, string status_description, double update_date, int task_id) : base_class(unique_id, name) {
    this->description = description;
    this->priority = priority;
    this->severity = severity;
    this->date_raised = date_raised;
    this->date_assigned = date_assigned;
    this->exp_compl_date = exp_compl_date;
    this->act_compl_date = act_compl_date;
    this->status = status;
    this->status_description = status_description;
    this->update_date = update_date;
    this->task_id = task_id;
}

ActionItems::ActionItems(int unique_id, string name, string description) : base_class(unique_id, name) {
    this->description = description;
}

string ActionItems::get_description() {
    return this->description;
}

string ActionItems::get_priority() {
    return this->priority;
}

string ActionItems::get_severity() {
    return this->severity;
}

double ActionItems::get_date_raised() {
    return this->date_raised;
}

double ActionItems::get_date_assigned() {
    return this->date_assigned;
}

double ActionItems::get_exp_compl_date() {
    return this->exp_compl_date;
}

double ActionItems::get_act_compl_date() {
    return this->act_compl_date;
}

string ActionItems::get_status() {
    return this->status;
}

string ActionItems::get_status_description() {
    return this->status_description;
}

double ActionItems::get_update_date() {
    return this->update_date;
}

int ActionItems::get_task_id() {
    return this->task_id;
}

void ActionItems::set_description(string description) {
    this->description = description;
}

void ActionItems::set_priority(string priority) {
    this->priority = priority;
}

void ActionItems::set_severity(string severity) {
    this->severity = severity;
}

void ActionItems::set_date_raised(double date_raised) {
    this->date_raised = date_raised;
}

void ActionItems::set_date_assigned(double date_assigned) {
    this->date_assigned = date_assigned;
}

void ActionItems::set_exp_compl_date(double exp_compl_date) {
    this->exp_compl_date = exp_compl_date;
}

void ActionItems::set_act_compl_date(double act_compl_date) {
    this->act_compl_date = act_compl_date;
}

void ActionItems::set_status(string status) {
    this->status = status;
}

void ActionItems::set_status_description(string status_description) {
    this->status_description = status_description;
}

void ActionItems::set_update_date(double update_date) {
    this->update_date = update_date;
}

void ActionItems::set_task_id(int task_id) {
    this->task_id = task_id;
}

void ActionItems::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Description: " << this->description << endl;
    cout << "Priority: " << this->priority << endl;
    cout << "Severity: " << this->severity << endl;
    cout << "Date Raised: " << this->date_raised << endl;
    cout << "Date Assigned: " << this->date_assigned << endl;
    cout << "Expected CompletionDate: " << this->exp_compl_date << endl;
    cout << "Actual CompletionDate: " << this->act_compl_date << endl;
    cout << "Status: " << this->status << endl;
    cout << "Status Description: " << this->status_description << endl;
    cout << "Update Date: " << this->update_date << endl;
    cout << "Task ID: " << this->task_id << endl;
    cout << endl;
}

void ActionItems::save(std::ostream &f) {
    size_t size;

    size = name.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)name.c_str(), size );

    f.write( (char*)&unique_id, sizeof(unique_id) );

    size = description.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)description.c_str(), size );

    size = priority.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)priority.c_str(), size );

    size = severity.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)severity.c_str(), size );

    f.write( (char*)&date_raised, sizeof(date_raised) );

    f.write( (char*)&date_assigned, sizeof(date_assigned) );

    f.write( (char*)&exp_compl_date, sizeof(exp_compl_date) );

    f.write( (char*)&act_compl_date, sizeof(act_compl_date) );

    size = status.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)status.c_str(), size );

    size = status_description.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)status_description.c_str(), size );

    f.write( (char*)&update_date, sizeof(update_date) );

    f.write( (char*)&task_id, sizeof(task_id) );
}

void ActionItems::load(std::istream &f) {
    size_t size;
    char *buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    name = buf;
    delete[] buf;

    f.read( (char*)&unique_id, sizeof(unique_id) );

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    description = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    priority = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    severity = buf;
    delete[] buf;

    f.read( (char*)&date_raised, sizeof(date_raised) );

    f.read( (char*)&date_assigned, sizeof(date_assigned) );

    f.read( (char*)&exp_compl_date, sizeof(exp_compl_date) );

    f.read( (char*)&act_compl_date, sizeof(act_compl_date) );

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    status = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    status_description = buf;
    delete[] buf;

    f.read( (char*)&update_date, sizeof(update_date) );

    f.read( (char*)&task_id, sizeof(task_id) );
}