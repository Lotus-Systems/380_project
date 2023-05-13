//
// Created by lotus-systems on 5/4/23.
//

#include "Skill.h"

Skill::Skill(int unique_id, string name, int level, int* associated_resources) : base_class(unique_id, name) {
    this->level = level;

    memset(this->associated_resources, -1, sizeof(int)*MAX_ARRAY_SIZE);

    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_resources[i] = associated_resources[i];
    }
}

Skill::Skill(int unique_id, string name) : base_class(unique_id, name) {
    memset(this->associated_resources, -1, sizeof(int)*MAX_ARRAY_SIZE);
    this->level = 0;
}

int Skill::get_level() {
    return this->level;
}

int* Skill::get_associated_resources() {
    return this->associated_resources;
}

void Skill::set_level(int level) {
    this->level = level;
}

void Skill::set_associated_resources(int* associated_resources) {
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        this->associated_resources[i] = associated_resources[i];
    }
}

void Skill::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Level: " << this->level << endl;
    cout << "Associated Resources: ";
    for(int i = 0; i < sizeof(MAX_ARRAY_SIZE); i++) {
        cout << this->associated_resources[i] << " ";
    }
    cout << endl;
}

void Skill::save(std::ostream &f) {
    size_t size;

    size = name.size();
    f.write( (char*)&size, sizeof(size_t) );
    f.write( (char*)name.c_str(), size );

    f.write( (char*)&unique_id, sizeof(unique_id) );

    f.write( (char*)&level, sizeof(level) );

    f.write( (char*)associated_resources, sizeof(associated_resources) * MAX_ARRAY_SIZE);
}

void Skill::load(std::istream &f) {
    size_t size;
    char* data;

    f.read( (char*)&size, sizeof(size_t) );
    data = new char[size];
    f.read( data, size );
    name = data;
    delete[] data;

    f.read( (char*)&unique_id, sizeof(unique_id) );

    f.read( (char*)&level, sizeof(level) );

    f.read( (char*)associated_resources, sizeof(associated_resources) * MAX_ARRAY_SIZE);
}

