//
// Created by lotus-systems on 5/4/23.
//

#include "Skill.h"

Skill::Skill(int unique_id, string name, int level, int associated_resources) : base_class(unique_id, name) {
    this->level = level;
    this->associated_resources = associated_resources;
}

int Skill::get_level() {
    return this->level;
}

int Skill::get_associated_resources() {
    return this->associated_resources;
}

void Skill::set_level(int level) {
    this->level = level;
}

void Skill::set_associated_resources(int associated_resources) {
    this->associated_resources = associated_resources;
}

void Skill::print() {
    cout << "Unique ID: " << this->unique_id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Level: " << this->level << endl;
    cout << "Associated Resources: " << this->associated_resources << endl;
}


