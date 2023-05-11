//
// Created by lotus-systems on 5/4/23.
//

#include "Resource.h"

Resource::Resource(int unique_id, string name, float pay_rate, string title, int* associated_tasks, int* associated_decisions, int associated_skill) : base_class(unique_id, name) {
    this->pay_rate = pay_rate;
    this->title = title;

    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_tasks[i] = associated_tasks[i];
        this->associated_decisions[i] = associated_decisions[i];
    }

    this->associated_skill = associated_skill;
}

Resource::Resource(int unique_id, string name) : base_class(unique_id, name) {
    this->pay_rate = 0;
    this->title = "";
}

float Resource::get_pay_rate() {
    return this->pay_rate;
}

string Resource::get_title() {
    return this->title;
}

int* Resource::get_associated_tasks() {
    return this->associated_tasks;
}

int* Resource::get_associated_decisions() {
    return this->associated_decisions;
}

int Resource::get_associated_skill() {
    return this->associated_skill;
}

void Resource::set_pay_rate(int _pay_rate) {
    this->pay_rate = _pay_rate;
}

void Resource::set_title(string _title) {
    this->title = _title;
}

void Resource::set_associated_tasks(int* _associated_tasks) {
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_tasks[i] = _associated_tasks[i];
    }
}

void Resource::set_associated_decisions(int* _associated_decisions) {
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_decisions[i] = _associated_decisions[i];
    }
}

void Resource::set_associated_skill(int _associated_skill) {
    this->associated_skill = _associated_skill;
}

void Resource::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Pay Rate: " << this->pay_rate << endl;
    cout << "Title: " << this->title << endl;
    cout << "Associated Tasks: ";
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        cout << this->associated_tasks[i] << " ";
    }
    cout << endl;
    cout << "Associated Decisions: ";
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        cout << this->associated_decisions[i] << " ";
    }
    cout << endl;
    cout << "Associated Skill: " << this->associated_skill << endl;
}


