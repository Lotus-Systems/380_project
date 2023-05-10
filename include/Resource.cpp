//
// Created by lotus-systems on 5/4/23.
//

#include "Resource.h"

Resource::Resource(int unique_id, string name, float pay_rate, string title, vector<int> associated_tasks) : base_class(unique_id, name) {
    this->pay_rate = pay_rate;
    this->title = title;
    this->associated_tasks = associated_tasks;
}

float Resource::get_pay_rate() {
    return this->pay_rate;
}

string Resource::get_title() {
    return this->title;
}

vector<int> Resource::get_associated_tasks() {
    return this->associated_tasks;
}

void Resource::set_pay_rate(int pay_rate) {
    this->pay_rate = pay_rate;
}

void Resource::set_title(string title) {
    this->title = title;
}

void Resource::set_associated_tasks(vector<int> associated_tasks) {
    this->associated_tasks = associated_tasks;
}

void Resource::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Pay Rate: " << this->pay_rate << endl;
    cout << "Title: " << this->title << endl;
    //cout << "Associated Tasks: " << this->associated_tasks << endl;
}


