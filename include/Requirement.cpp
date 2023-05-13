//
// Created by lotus-systems on 5/11/23.
//

#include "Requirement.h"

Requirement::Requirement(string requirement_text, string source_doc, string location_in_doc, int associated_deliverable) : base_class(unique_id, name) {
    this->requirement_text = requirement_text;
    this->source_doc = source_doc;
    this->location_in_doc = location_in_doc;
    this->associated_deliverable = associated_deliverable;
}

string Requirement::get_requirement_text() {
    return this->requirement_text;
}

string Requirement::get_source_doc() {
    return this->source_doc;
}

string Requirement::get_location_in_doc() {
    return this->location_in_doc;
}

int Requirement::get_associated_deliverable() {
    return this->associated_deliverable;
}

void Requirement::set_requirement_text(string _requirement_text) {
    this->requirement_text = _requirement_text;
}

void Requirement::set_source_doc(string _source_doc) {
    this->source_doc = _source_doc;
}

void Requirement::set_location_in_doc(string _location_in_doc) {
    this->location_in_doc = _location_in_doc;
}

void Requirement::set_associated_deliverable(int _associated_deliverable) {
    this->associated_deliverable = _associated_deliverable;
}

void Requirement::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Requirement Text: " << this->requirement_text << endl;
    cout << "Source Document: " << this->source_doc << endl;
    cout << "Location in Document: " << this->location_in_doc << endl;
    cout << "Associated Deliverable: " << this->associated_deliverable << endl;
}

void Requirement::save(std::ostream &f) {
    size_t size;

    size = name.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)name.c_str(), size );

    f.write( (char*)&unique_id, sizeof(unique_id) );

    size = requirement_text.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)requirement_text.c_str(), size );

    size = source_doc.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)source_doc.c_str(), size );

    size = location_in_doc.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)location_in_doc.c_str(), size );

    f.write( (char*)&associated_deliverable, sizeof(associated_deliverable) );
}

void Requirement::load(std::istream &f) {
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
    requirement_text = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    source_doc = buf;
    delete[] buf;

    f.read( (char*)&size, sizeof(size_t) );
    buf = new char[size+1];
    f.read( buf, size );
    buf[size] = '\0';
    location_in_doc = buf;
    delete[] buf;

    f.read( (char*)&associated_deliverable, sizeof(associated_deliverable) );
}
