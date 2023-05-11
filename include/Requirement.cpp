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

void Requirement::set_requirement_text(string requirement_text) {
    this->requirement_text = requirement_text;
}

void Requirement::set_source_doc(string source_doc) {
    this->source_doc = source_doc;
}

void Requirement::set_location_in_doc(string location_in_doc) {
    this->location_in_doc = location_in_doc;
}

void Requirement::set_associated_deliverable(int associated_deliverable) {
    this->associated_deliverable = associated_deliverable;
}

void Requirement::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Requirement Text: " << this->requirement_text << endl;
    cout << "Source Document: " << this->source_doc << endl;
    cout << "Location in Document: " << this->location_in_doc << endl;
    cout << "Associated Deliverable: " << this->associated_deliverable << endl;
}
