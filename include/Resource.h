//
// Created by lotus-systems on 5/4/23.
//

#ifndef INC_380_PROJECT_RESOURCE_H
#include "base_class.h"
#include <vector>
#define INC_380_PROJECT_RESOURCE_H

/*
 * Resources.UniqueID,
 * Resources.Name,
 * Resources.PayRate,
 * Resources.Title
 * Resources.AssoicatedTasks
 */

class Resource : public base_class{
protected:
    int unique_id;
    string name;
    float pay_rate;
    string title;
    int associated_tasks[MAX_ARRAY_SIZE];
    int associated_decisions[MAX_ARRAY_SIZE];
    int associated_skill;

public:
    Resource(int unique_id, string name, float pay_rate, string title, int* associated_tasks, int* associated_decisions, int associated_skill);
    Resource(int unique_id, string name);
    float get_pay_rate();
    string get_title();
    int* get_associated_tasks();
    int* get_associated_decisions();
    int get_associated_skill();
    void set_pay_rate(int _pay_rate);
    void set_title(string _title);
    void set_associated_tasks(int* _associated_tasks);
    void set_associated_decisions(int* _associated_decisions);
    void set_associated_skill(int _associated_skill);
    void print();

};


#endif //INC_380_PROJECT_RESOURCE_H
