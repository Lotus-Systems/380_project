//
// Created by lotus-systems on 5/4/23.
//

#include "Issue.h"

Issue::Issue(int unique_id, string name, string description, string expected_completion_date, string actual_completion_date, Task* associated_tasks) : base_class(unique_id, name) {
    this->description = description;
    this->expected_completion_date = expected_completion_date;
    this->actual_completion_date = actual_completion_date;
    this->associated_tasks = associated_tasks;
}

string Issue::get_description() {
    return this->description;
}

string Issue::get_expected_completion_date() {
    return this->expected_completion_date;
}

string Issue::get_actual_completion_date() {
    return this->actual_completion_date;
}

Task* Issue::get_associated_tasks() {
    return this->associated_tasks;
}

void Issue::set_description(string description) {
    this->description = description;
}

void Issue::set_expected_completion_date(string expected_completion_date) {
    this->expected_completion_date = expected_completion_date;
}

void Issue::set_actual_completion_date(string actual_completion_date) {
    this->actual_completion_date = actual_completion_date;
}

void Issue::set_associated_tasks(Task* associated_tasks) {
    this->associated_tasks = associated_tasks;
}

void Issue::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Description: " << this->description << endl;
    cout << "Expected Completion Date: " << this->expected_completion_date << endl;
    cout << "Actual Completion Date: " << this->actual_completion_date << endl;
    cout << "Associated Tasks: " << this->associated_tasks << endl;
}
