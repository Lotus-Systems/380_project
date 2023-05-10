//
// Created by lotus-systems on 5/4/23.
//

#include "Deliverable.h"

Deliverable::Deliverable(int unique_id, string name, string description, string expected_completion_date, string actual_completion_date, int associated_tasks, int associated_requirements) : base_class(unique_id, name) {
    this->description = description;
    this->expected_completion_date = expected_completion_date;
    this->actual_completion_date = actual_completion_date;
    this->associated_tasks = associated_tasks;
    this->associated_requirements = associated_requirements;
}

string Deliverable::get_description() {
    return this->description;
}

string Deliverable::get_expected_completion_date() {
    return this->expected_completion_date;
}

string Deliverable::get_actual_completion_date() {
    return this->actual_completion_date;
}

int Deliverable::get_associated_tasks() {
    return this->associated_tasks;
}

int Deliverable::get_associated_requirements() {
    return this->associated_requirements;
}

void Deliverable::set_description(string description) {
    this->description = description;
}

void Deliverable::set_expected_completion_date(string expected_completion_date) {
    this->expected_completion_date = expected_completion_date;
}

void Deliverable::set_actual_completion_date(string actual_completion_date) {
    this->actual_completion_date = actual_completion_date;
}

void Deliverable::set_associated_tasks(int associated_tasks) {
    this->associated_tasks = associated_tasks;
}

void Deliverable::set_associated_requirements(int associated_requirements) {
    this->associated_requirements = associated_requirements;
}

void Deliverable::print() {
    cout << "Deliverable: " << this->name << endl;
    cout << "Description: " << this->description << endl;
    cout << "Expected Completion Date: " << this->expected_completion_date << endl;
    cout << "Actual Completion Date: " << this->actual_completion_date << endl;
    cout << "Associated Tasks: " << this->associated_tasks << endl;
    cout << "Associated Requirements: " << this->associated_requirements << endl;
}

