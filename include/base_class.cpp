//
// Created by lotus-systems on 5/2/23.
//

#include "base_class.h"

base_class::base_class(int unique_id, string name) {
    this->unique_id = unique_id;
    this->name = name;
}

base_class::base_class(base_class *cp) {
    this->unique_id = cp->unique_id;
    this->name = cp->name;
}

base_class::base_class(){
    this->unique_id = 0;
    this->name = "";
}

int base_class::get_unique_id() {
    return this->unique_id;
}

string base_class::get_name() {
    return this->name;
}

void base_class::set_unique_id(int id) {
    this->unique_id = id;
}

void base_class::set_name(string _name) {
    this->name = _name;
}

void base_class::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
}

void base_class::save(ostream& f) {
    // we need to store the data from the string along with the size
    // because to restore it we need to temporarily read it somewhere
    // before storing it in the std::string (istream::read() doesn't
    // read directly to std::string)

    size_t size;

    size = name.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)name.c_str(), size );

    f.write( (char*)&unique_id, sizeof(unique_id) );
}

void base_class::load(istream& f ) {
    // we need to store the data from the string along with the size
    // because to restore it we need to temporarily read it somewhere
    // before storing it in the std::string (istream::read() doesn't
    // read directly to std::string)

    size_t size;
    char* data;

    f.read( (char*)&size, sizeof(size_t) );
    data = new char[size+1];
    f.read( data, size );
    data[size] = '\0';
    name = string(data, size);
    delete[] data;

    f.read( (char*)&unique_id, sizeof(unique_id) );
}


