//
// Created by lotus-systems on 5/4/23.
//

#include "Deliverable.h"

Deliverable::Deliverable(int unique_id, string name, string description, string expected_completion_date, string actual_completion_date, int associated_tasks, int associated_requirements) : base_class(unique_id, name) {
    this->description = description;
    this->expected_completion_date = expected_completion_date;
    this->actual_completion_date = actual_completion_date;

    memset(this->associated_tasks, -1, sizeof(int)*MAX_ARRAY_SIZE);
    memset(this->associated_requirements, -1, sizeof(int)*MAX_ARRAY_SIZE);

    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_tasks[i] = associated_tasks[i];
        this->associated_requirements[i] = associated_requirements[i];
    }
}

Deliverable::Deliverable(int unique_id, string name, string description) : base_class(unique_id, name) {
    memset(this->associated_tasks, -1, sizeof(int)*MAX_ARRAY_SIZE);
    memset(this->associated_requirements, -1, sizeof(int)*MAX_ARRAY_SIZE);
    this->description = description;
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

int* Deliverable::get_associated_tasks() {
    return this->associated_tasks;
}

int* Deliverable::get_associated_requirements() {
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

void Deliverable::set_associated_tasks(int* associated_tasks) {
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_tasks[i] = associated_tasks[i];
    }
}

void Deliverable::set_associated_requirements(int* associated_requirements) {
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_requirements[i] = associated_requirements[i];
    }
}

void Deliverable::print() {
    cout << "Deliverable: " << this->name << endl;
    cout << "Description: " << this->description << endl;
    cout << "Expected Completion Date: " << this->expected_completion_date << endl;
    cout << "Actual Completion Date: " << this->actual_completion_date << endl;
    cout << "Associated Tasks: " << this->associated_tasks << endl;
    cout << "Associated Requirements: " << this->associated_requirements << endl;
}

void Deliverable::save(std::ostream &f) {
    size_t size;
    size = this->name.size();
    f.write((char*)&size, sizeof(size));
    f.write(this->name.c_str(), size);

    f.write((char*)&this->unique_id, sizeof(this->unique_id));

    size = this->description.size();
    f.write((char*)&size, sizeof(size));
    f.write(this->description.c_str(), size);
    size = this->expected_completion_date.size();
    f.write((char*)&size, sizeof(size));
    f.write(this->expected_completion_date.c_str(), size);
    size = this->actual_completion_date.size();

    f.write((char*)&this->associated_tasks, MAX_ARRAY_SIZE);
    f.write((char*)&this->associated_requirements, MAX_ARRAY_SIZE);
}

void Deliverable::load(std::istream &f) {
    size_t size;
    f.read((char*)&size, sizeof(size));
    char *buffer = new char[size];
    f.read(buffer, size);
    this->name = buffer;
    delete[] buffer;

    f.read((char*)&this->unique_id, sizeof(this->unique_id));

    f.read((char*)&size, sizeof(size));
    buffer = new char[size];
    f.read(buffer, size);
    this->description = buffer;
    delete[] buffer;

    f.read((char*)&size, sizeof(size));
    buffer = new char[size];
    f.read(buffer, size);
    this->expected_completion_date = buffer;
    delete[] buffer;

    f.read((char*)&size, sizeof(size));
    buffer = new char[size];
    f.read(buffer, size);
    this->actual_completion_date = buffer;
    delete[] buffer;

    f.read((char*)&this->associated_tasks, MAX_ARRAY_SIZE);
    f.read((char*)&this->associated_requirements, MAX_ARRAY_SIZE);
}


