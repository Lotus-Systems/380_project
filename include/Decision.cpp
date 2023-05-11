//
// Created by lotus-systems on 5/11/23.
//

#include "Decision.h"

Decision::Decision(string description, string date_created, string date_needed, string date_made, string expected_completion_date, string actual_completion_date, string meeting_notes, string status, string reference_documents, int associated_issue, int associated_resource) : base_class(unique_id, name) {
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

string Decision::get_description() {
    return this->description;
}

string Decision::get_date_created() {
    return this->date_created;
}

string Decision::get_date_needed() {
    return this->date_needed;
}

string Decision::get_date_made() {
    return this->date_made;
}

string Decision::get_expected_completion_date() {
    return this->expected_completion_date;
}

string Decision::get_actual_completion_date() {
    return this->actual_completion_date;
}

string Decision::get_meeting_notes() {
    return this->meeting_notes;
}

string Decision::get_status() {
    return this->status;
}

string Decision::get_reference_documents() {
    return this->reference_documents;
}

int Decision::get_associated_issue() {
    return this->associated_issue;
}

int Decision::get_associated_resource() {
    return this->associated_resource;
}

void Decision::set_description(string description) {
    this->description = description;
}

void Decision::set_date_created(string date_created) {
    this->date_created = date_created;
}

void Decision::set_date_needed(string date_needed) {
    this->date_needed = date_needed;
}

void Decision::set_date_made(string date_made) {
    this->date_made = date_made;
}

void Decision::set_expected_completion_date(string expected_completion_date) {
    this->expected_completion_date = expected_completion_date;
}

void Decision::set_actual_completion_date(string actual_completion_date) {
    this->actual_completion_date = actual_completion_date;
}

void Decision::set_meeting_notes(string meeting_notes) {
    this->meeting_notes = meeting_notes;
}

void Decision::set_status(string status) {
    this->status = status;
}

void Decision::set_reference_documents(string reference_documents) {
    this->reference_documents = reference_documents;
}

void Decision::set_associated_issue(int associated_issue) {
    this->associated_issue = associated_issue;
}

void Decision::set_associated_resource(int associated_resource) {
    this->associated_resource = associated_resource;
}



