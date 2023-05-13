//
// Created by lotus-systems on 5/2/23.
//
#include <iostream>
#include <string>
#include <string.h>
#include <vector>

#ifndef INC_380_PROJECT_BASE_CLASS_H
#define INC_380_PROJECT_BASE_CLASS_H

static const int MAX_ARRAY_SIZE = 256;

using namespace std;

class base_class {
protected:
    int unique_id;
    string name;

public:
    base_class(int unique_id, string name);
    base_class(base_class* cp);
    base_class();
    int get_unique_id();
    string get_name();
    void set_unique_id(int unique_id);
    void set_name(string name);
    void print();
    void save(ostream& f);
    void load(istream& f);
};


#endif //INC_380_PROJECT_BASE_CLASS_H
