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


