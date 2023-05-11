//
// Created by lotus-systems on 5/9/23.
//

#ifndef INC_380_PROJECT_ID_TRACKER_H
#include <vector>
#include "ActionItems.h"
#include "Deliverable.h"
#include "Issue.h"
#include "Resource.h"
#include "Skill.h"
#include "Task.h"
#define INC_380_PROJECT_ID_TRACKER_H

// list all issues


class ID_Tracker {
private:
    vector<ActionItems*> action_item_list;
    vector<Deliverable*> deliverable_list;
    vector<Issue*> issue_list;
    vector<Resource*> resource_list;
    vector<Skill*> skill_list;
    vector<Task*> task_list;
    vector<base_class*> all_list;
    int data_dir_length;
    char data_dir[255];

public:
    ID_Tracker(char _data_dir[], int data_dir_length);
    void add_action_item(ActionItems* action_item);
    void add_deliverable(Deliverable* deliverable);
    void add_issue(Issue* issue);
    void add_resource(Resource* resource);
    void add_skill(Skill* skill);
    void add_task(Task* task);
    void add_base_class(base_class* base_class);
    void remove_action_item(int unique_id);
    void remove_deliverable(int unique_id);
    void remove_issue(int unique_id);
    void remove_resource(int unique_id);
    void remove_skill(int unique_id);
    void remove_task(int unique_id);
    ActionItems* get_action_item(int unique_id);
    Deliverable* get_deliverable(int unique_id);
    Issue* get_issue(int unique_id);
    Resource* get_resource(int unique_id);
    Skill* get_skill(int unique_id);
    Task* get_task(int unique_id);
    void print_action_item(int unique_id);
    void print_deliverable(int unique_id);
    void print_issue(int unique_id);
    void print_resource(int unique_id);
    void print_skill(int unique_id);
    void print_task(int unique_id);
    void print_all_action_items();
    void print_all_deliverables();
    void print_all_issues();
    void print_all_resources();
    void print_all_skills();
    void print_all_tasks();
    void print_all();
    void save_all();
    void load_all();
    void save_list(vector<base_class*> list, char type[], char data_dir[], int data_dir_length);
    void load_list(vector<base_class*> list, char type[], char data_dir[], int data_dir_length);

};

void save_list(vector<base_class> list, char save_location[]);


#endif //INC_380_PROJECT_ID_TRACKER_H
