//
// Created by lotus-systems on 5/11/23.
//

#ifndef INC_380_PROJECT_REQUIREMENT_H
#include "base_class.h"
#define INC_380_PROJECT_REQUIREMENT_H


class Requirement: public base_class{
protected:
    string requirement_text;
    string source_doc;
    string location_in_doc;
    int associated_deliverable;

public:
    Requirement(string requirement_text, string source_doc, string location_in_doc, int associated_deliverable);
    string get_requirement_text();
    string get_source_doc();
    string get_location_in_doc();
    int get_associated_deliverable();
    void set_requirement_text(string requirement_text);
    void set_source_doc(string source_doc);
    void set_location_in_doc(string location_in_doc);
    void set_associated_deliverable(int associated_deliverable);
    void print();
};


#endif //INC_380_PROJECT_REQUIREMENT_H
