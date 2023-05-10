//
// Created by lotus-systems on 5/4/23.
//

#ifndef INC_380_PROJECT_RESOURCE_H
#include "base_class.h"
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
    Task* associated_tasks;

public:
    Resource(int unique_id, string name, float pay_rate, string title, Task* associated_tasks);
    int get_unique_id();
    string get_name();
    float get_pay_rate();
    string get_title();
    Task* get_associated_tasks();
    void set_unique_id(int unique_id);
    void set_name(string name);
    void set_pay_rate(int pay_rate);
    void set_title(string title);
    void set_associated_tasks(Task* associated_tasks);
    void print();

};


#endif //INC_380_PROJECT_RESOURCE_H
