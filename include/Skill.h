//
// Created by lotus-systems on 5/4/23.
//

#include "base_class.h"
#include <vector>

#ifndef INC_380_PROJECT_SKILL_H
#define INC_380_PROJECT_SKILL_H

/*
 * Skill.UniqueId,
 * Skill.Name,
 * Skill.Level,
 * Skill.AssociatedResources
 */

class Skill : public base_class{
protected:
    int unique_id;
    string name;
    int level;
    int associated_resources[MAX_ARRAY_SIZE] = {0};

public:
    Skill(int unique_id, string name, int level, int* associated_resources);
    Skill(int unique_id, string name);
    int get_unique_id();
    string get_name();
    int get_level();
    int* get_associated_resources();
    void set_unique_id(int unique_id);
    void set_name(string name);
    void set_level(int level);
    void set_associated_resources(int* associated_resources);
    void save(ostream& f);
    void load(istream& f);
    void print();

};


#endif //INC_380_PROJECT_SKILL_H
