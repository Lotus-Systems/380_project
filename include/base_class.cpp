//
// Created by lotus-systems on 5/2/23.
//

#include "base_class.h"

base_class::base_class(int unique_id, string name) {
    this->unique_id = unique_id;
    this->name = name;
}

int base_class::get_unique_id() {
    return this->unique_id;
}

string base_class::get_name() {
    return this->name;
}

void base_class::set_unique_id(int unique_id) {
    this->unique_id = unique_id;
}

void base_class::set_name(string name) {
    this->name = name;
}

void base_class::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
}


