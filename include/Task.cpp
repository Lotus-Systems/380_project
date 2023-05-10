//
// Created by lotus-systems on 5/2/23.
//

#include "Task.h"

using namespace std;

Task::Task(int unique_id, string name, string description, string start_date, string end_date, int expected_effort,
           bool milestone, int dependency, int percent_completion, Issue* associated_issue, Resource* associated_resources) : base_class(unique_id, name){
    this->description = description;
    this->start_date = start_date;
    this->end_date = end_date;
    this->expected_effort = expected_effort;
    this->milestone = milestone;
    this->dependency = dependency;
    this->percent_completion = percent_completion;
    this->associated_issue = associated_issue;
    this->associated_resources = associated_resources;

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

Issue* Task::get_associated_issue() {
    return this->associated_issue;
}

Resource* Task::get_associated_resources() {
    return this->associated_resources;
}

void Task::set_description(string description) {
    this->description = description;
}

void Task::set_start_date(string start_date) {
    this->start_date = start_date;
}

void Task::set_end_date(string end_date) {
    this->end_date = end_date;
}

void Task::set_expected_effort(int expected_effort) {
    this->expected_effort = expected_effort;
}

void Task::set_milestone(bool milestone) {
    this->milestone = milestone;
}

void Task::set_dependency(int dependency) {
    this->dependency = dependency;
}

void Task::set_percent_completion(int percent_completion) {
    this->percent_completion = percent_completion;
}

void Task::set_associated_issue(int associated_issue) {
    this->associated_issue = associated_issue;
}

void Task::set_associated_resources(int associated_resources) {
    this->associated_resources = associated_resources;
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
    cout << "Associated Issue: " << this->associated_issue << endl;
    cout << "Associated Resources: " << this->associated_resources << endl;
}

