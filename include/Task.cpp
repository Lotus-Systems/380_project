//
// Created by lotus-systems on 5/2/23.
//

#include "Task.h"

using namespace std;

Task::Task(int unique_id, string name, string description, string start_date, string end_date, int expected_effort,
           bool milestone, int dependency, int percent_completion, int* associated_issue, int associated_resource, int associated_deliverable) : base_class(unique_id, name) {
    this->description = description;
    this->start_date = start_date;
    this->end_date = end_date;
    this->expected_effort = expected_effort;
    this->milestone = milestone;
    this->dependency = dependency;
    this->percent_completion = percent_completion;

    memset(this->associated_issues, 0, sizeof(this->associated_issues));

    for (int i = 0; i < MAX_ARRAY_SIZE; i++)
        this->associated_issues[i] = associated_issue[i];
    this->associated_resource = associated_resource;
    this->associated_deliverable = associated_deliverable;
}

Task::Task(int unique_id, string name) : base_class(unique_id, name) {
    this->description = "";
    this->start_date = "";
    this->end_date = "";
    this->expected_effort = 0;
    this->milestone = false;
    this->dependency = 0;
    this->percent_completion = 0;
    memset(this->associated_issues, 0, sizeof(this->associated_issues));
    this->associated_resource = 0;
    this->associated_deliverable = 0;
}

string Task::get_description() {
    return this->description;
}

string Task::get_start_date() {
    return this->start_date;
}

string Task::get_end_date() {
    return this->end_date;
}

int Task::get_expected_effort() {
    return this->expected_effort;
}

bool Task::get_milestone() {
    return this->milestone;
}

int Task::get_dependency() {
    return this->dependency;
}

int Task::get_percent_completion() {
    return this->percent_completion;
}

int* Task::get_associated_issues() {
    return this->associated_issues;
}

int Task::get_associated_resource() {
    return this->associated_resource;
}

int Task::get_associated_deliverable() {
    return this->associated_deliverable;
}

void Task::set_description(string _description) {
    this->description = _description;
}

void Task::set_start_date(string _start_date) {
    this->start_date = _start_date;
}

void Task::set_end_date(string _end_date) {
    this->end_date = _end_date;
}

void Task::set_expected_effort(int _expected_effort) {
    this->expected_effort = _expected_effort;
}

void Task::set_milestone(bool _milestone) {
    this->milestone = _milestone;
}

void Task::set_dependency(int _dependency) {
    this->dependency = _dependency;
}

void Task::set_percent_completion(int _percent_completion) {
    this->percent_completion = _percent_completion;
}

void Task::set_associated_issue(int* _associated_issues) {
    for(int i = 0; i < MAX_ARRAY_SIZE; i++)
        this->associated_issues[i] = _associated_issues[i];
}

void Task::set_associated_resources(int _associated_resource) {
    this->associated_resource = _associated_resource;
}

void Task::set_associated_deliverable(int _associated_deliverable) {
    this->associated_deliverable = _associated_deliverable;
}

void Task::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Description: " << this->description << endl;
    cout << "Start Date: " << this->start_date << endl;
    cout << "End Date: " << this->end_date << endl;
    cout << "Expected Effort: " << this->expected_effort << endl;
    cout << "Milestone: " << this->milestone << endl;
    cout << "Dependency: " << this->dependency << endl;
    cout << "Percent Completion: " << this->percent_completion << endl;
    cout << "Associated Issue: ";
    for(int i = 0; i < MAX_ARRAY_SIZE; i++)
        cout << this->associated_issues[i] << " ";
    cout << endl;
    cout << "Associated Resource: " << this->associated_resource << endl;
    cout << "Associated Deliverable: " << this->associated_deliverable << endl;
}

void Task::save(ostream& f) {
    size_t size;

    size = name.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)name.c_str(), size );

    f.write( (char*)&unique_id, sizeof(unique_id) );

    size = description.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)description.c_str(), size );

    size = start_date.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)start_date.c_str(), size );

    size = end_date.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)end_date.c_str(), size );

    f.write( (char*)&expected_effort, sizeof(expected_effort) );

    f.write( (char*)&milestone, sizeof(milestone) );

    f.write( (char*)&dependency, sizeof(dependency) );

    f.write( (char*)&percent_completion, sizeof(percent_completion) );

    f.write( (char*)associated_issues, sizeof(int)*MAX_ARRAY_SIZE );

    f.write( (char*)&associated_resource, sizeof(associated_resource) );

    f.write( (char*)&associated_deliverable, sizeof(associated_deliverable) );
}

void Task::load(std::istream &f) {
    size_t size;
    char *buffer;

    f.read( (char*)&size, sizeof(size_t) );
    buffer = new char[size+1];
    f.read( buffer, size );
    buffer[size] = '\0';
    name = buffer;
    delete[] buffer;

    f.read( (char*)&unique_id, sizeof(unique_id) );

    f.read( (char*)&size, sizeof(size_t) );
    buffer = new char[size+1];
    f.read( buffer, size );
    buffer[size] = '\0';
    description = buffer;
    delete[] buffer;

    f.read( (char*)&size, sizeof(size_t) );
    buffer = new char[size+1];
    f.read( buffer, size );
    buffer[size] = '\0';
    start_date = buffer;
    delete[] buffer;

    f.read( (char*)&size, sizeof(size_t) );
    buffer = new char[size+1];
    f.read( buffer, size );
    buffer[size] = '\0';
    end_date = buffer;
    delete[] buffer;

    f.read( (char*)&expected_effort, sizeof(expected_effort) );

    f.read( (char*)&milestone, sizeof(milestone) );

    f.read( (char*)&dependency, sizeof(dependency) );

    f.read( (char*)&percent_completion, sizeof(percent_completion) );

    f.read( (char*)associated_issues, sizeof(int)*MAX_ARRAY_SIZE );

    f.read( (char*)&associated_resource, sizeof(associated_resource) );

    f.read( (char*)&associated_deliverable, sizeof(associated_deliverable) );
}

