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

void Decision::set_description(string _description) {
    this->description = _description;
}

void Decision::set_date_created(string _date_created) {
    this->date_created = _date_created;
}

void Decision::set_date_needed(string _date_needed) {
    this->date_needed = _date_needed;
}

void Decision::set_date_made(string _date_made) {
    this->date_made = _date_made;
}

void Decision::set_expected_completion_date(string _expected_completion_date) {
    this->expected_completion_date = _expected_completion_date;
}

void Decision::set_actual_completion_date(string _actual_completion_date) {
    this->actual_completion_date = _actual_completion_date;
}

void Decision::set_meeting_notes(string _meeting_notes) {
    this->meeting_notes = _meeting_notes;
}

void Decision::set_status(string _status) {
    this->status = _status;
}

void Decision::set_reference_documents(string _reference_documents) {
    this->reference_documents = _reference_documents;
}

void Decision::set_associated_issue(int _associated_issue) {
    this->associated_issue = _associated_issue;
}

void Decision::set_associated_resource(int _associated_resource) {
    this->associated_resource = _associated_resource;
}

void Decision::save(std::ostream &f) {
    size_t size;

    size = name.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)name.c_str(), size );

    f.write( (char*)&unique_id, sizeof(unique_id) );

    size = description.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)description.c_str(), size );

    size = date_created.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)date_created.c_str(), size );

    size = date_needed.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)date_needed.c_str(), size );

    size = date_made.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)date_made.c_str(), size );

    size = expected_completion_date.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)expected_completion_date.c_str(), size );

    size = actual_completion_date.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)actual_completion_date.c_str(), size );

    size = meeting_notes.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)meeting_notes.c_str(), size );

    size = status.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)status.c_str(), size );

    size = reference_documents.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)reference_documents.c_str(), size );

    f.write( (char*)&associated_issue, sizeof(associated_issue) );

    f.write( (char*)&associated_resource, sizeof(associated_resource) );
}

void Decision::load(std::istream &f) {
    size_t size;
    char *buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    name = buf;
    delete[] buf;

    f.read( (char*)&unique_id, sizeof(unique_id) );

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    description = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    date_created = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    date_needed = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    date_made = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    expected_completion_date = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    actual_completion_date = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    meeting_notes = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    status = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    reference_documents = buf;
    delete[] buf;

    f.read( (char*)&associated_issue, sizeof(associated_issue) );

    f.read( (char*)&associated_resource, sizeof(associated_resource) );
}

