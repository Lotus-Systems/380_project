//
// Created by lotus-systems on 5/11/23.
//

#include "Risk.h"

Risk::Risk(string description, string date_created, string date_needed, string date_made, string expected_completion_date, string actual_completion_date, string meeting_notes, string status, string reference_documents, int associated_issue, int associated_resource) : base_class(unique_id, name) {
    this->description = description;
    this->date_created = date_created;
    this->date_needed = date_needed;
    this->date_made = date_made;
    this->expected_completion_date = expected_completion_date;
    this->actual_completion_date = actual_completion_date;
    this->meeting_notes = meeting_notes;
    this->status = status;
    this->reference_documents = reference_documents;
    this->associated_issue = associated_issue;
    this->associated_resource = associated_resource;
}

string Risk::get_description() {
    return this->description;
}

string Risk::get_date_created() {
    return this->date_created;
}

string Risk::get_date_needed() {
    return this->date_needed;
}

string Risk::get_date_made() {
    return this->date_made;
}

string Risk::get_expected_completion_date() {
    return this->expected_completion_date;
}

string Risk::get_actual_completion_date() {
    return this->actual_completion_date;
}

string Risk::get_meeting_notes() {
    return this->meeting_notes;
}

string Risk::get_status() {
    return this->status;
}

string Risk::get_reference_documents() {
    return this->reference_documents;
}

int Risk::get_associated_issue() {
    return this->associated_issue;
}

int Risk::get_associated_resource() {
    return this->associated_resource;
}

void Risk::set_description(string description) {
    this->description = description;
}

void Risk::set_date_created(string date_created) {
    this->date_created = date_created;
}

void Risk::set_date_needed(string date_needed) {
    this->date_needed = date_needed;
}

void Risk::set_date_made(string date_made) {
    this->date_made = date_made;
}

void Risk::set_expected_completion_date(string expected_completion_date) {
    this->expected_completion_date = expected_completion_date;
}

void Risk::set_actual_completion_date(string actual_completion_date) {
    this->actual_completion_date = actual_completion_date;
}

void Risk::set_meeting_notes(string meeting_notes) {
    this->meeting_notes = meeting_notes;
}

void Risk::set_status(string status) {
    this->status = status;
}

void Risk::set_reference_documents(string reference_documents) {
    this->reference_documents = reference_documents;
}

void Risk::set_associated_issue(int associated_issue) {
    this->associated_issue = associated_issue;
}

void Risk::set_associated_resource(int associated_resource) {
    this->associated_resource = associated_resource;
}

void Risk::print() {
    cout << "Risk: " << this->get_name() << endl;
    cout << "Description: " << this->get_description() << endl;
    cout << "Date Created: " << this->get_date_created() << endl;
    cout << "Date Needed: " << this->get_date_needed() << endl;
    cout << "Date Made: " << this->get_date_made() << endl;
    cout << "Expected Completion Date: " << this->get_expected_completion_date() << endl;
    cout << "Actual Completion Date: " << this->get_actual_completion_date() << endl;
    cout << "Meeting Notes: " << this->get_meeting_notes() << endl;
    cout << "Status: " << this->get_status() << endl;
    cout << "Reference Documents: " << this->get_reference_documents() << endl;
    cout << "Associated Issue: " << this->get_associated_issue() << endl;
    cout << "Associated Resource: " << this->get_associated_resource() << endl;
}

