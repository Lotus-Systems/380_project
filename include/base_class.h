//
// Created by lotus-systems on 5/2/23.
//

#ifndef INC_380_PROJECT_BASE_CLASS_H
#include <iostream>
#include <string>
#define INC_380_PROJECT_BASE_CLASS_H

using namespace std;

class base_class {
protected:
    int unique_id;
    string name;

public:
    base_class(int unique_id, string name);
    int get_unique_id();
    string get_name();
    void set_unique_id(int unique_id);
    void set_name(string name);
    void print();
};


#endif //INC_380_PROJECT_BASE_CLASS_H
