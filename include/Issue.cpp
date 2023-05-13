//
// Created by lotus-systems on 5/4/23.
//

#include "Issue.h"

Issue::Issue(int unique_id, string name, string description, string expected_completion_date, string actual_completion_date, int associated_task, int* associated_action_items, int* associated_decisions) : base_class(unique_id, name) {
    this->description = description;
    this->expected_completion_date = expected_completion_date;
    this->actual_completion_date = actual_completion_date;
    this->associated_task = associated_task;

    memset(this->associated_action_items, -1, sizeof(int)*MAX_ARRAY_SIZE);
    memset(this->associated_decisions, -1, sizeof(int)*MAX_ARRAY_SIZE);

    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_action_items[i] = associated_action_items[i];
        this->associated_decisions[i] = associated_decisions[i];
    }
}

Issue::Issue(int unique_id, string name, string description) : base_class(unique_id, name) {
    memset(this->associated_action_items, -1, sizeof(int)*MAX_ARRAY_SIZE);
    memset(this->associated_decisions, -1, sizeof(int)*MAX_ARRAY_SIZE);
    this->description = description;
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

int Issue::get_associated_task() {
    return this->associated_task;
}

int* Issue::get_associated_action_items() {
    return this->associated_action_items;
}

int* Issue::get_associated_decisions() {
    return this->associated_decisions;
}

void Issue::set_description(string _description) {
    this->description = _description;
}

void Issue::set_expected_completion_date(string _expected_completion_date) {
    this->expected_completion_date = _expected_completion_date;
}

void Issue::set_actual_completion_date(string _actual_completion_date) {
    this->actual_completion_date = _actual_completion_date;
}

void Issue::set_associated_tasks(int _associated_tasks) {
    this->associated_task = _associated_tasks;
}

void Issue::set_associated_action_items(int* _associated_action_items) {
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_action_items[i] = _associated_action_items[i];
    }
}

void Issue::set_associated_decisions(int* _associated_decisions) {
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_decisions[i] = _associated_decisions[i];
    }
}

void Issue::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Description: " << this->description << endl;
    cout << "Expected Completion Date: " << this->expected_completion_date << endl;
    cout << "Actual Completion Date: " << this->actual_completion_date << endl;
    cout << "Associated Task: " << this->associated_task << endl;
    cout << "Associated Action Items: ";
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        cout << this->associated_action_items[i] << " ";
    }
    cout << endl;
    cout << "Associated Decisions: ";
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        cout << this->associated_decisions[i] << " ";
    }
    cout << endl;

}
