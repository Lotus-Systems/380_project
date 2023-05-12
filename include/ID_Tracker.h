//
// Created by lotus-systems on 5/9/23.
//

#ifndef INC_380_PROJECT_ID_TRACKER_H
#include <vector>
#include "ActionItems.h"
#include "Decision.h"
#include "Deliverable.h"
#include "Issue.h"
#include "Requirement.h"
#include "Resource.h"
#include "Risk.h"
#include "Skill.h"
#include "Task.h"
#include "base_class.h"
#include <fstream>
#define INC_380_PROJECT_ID_TRACKER_H

// list all issues


class ID_Tracker {
private:
    vector<ActionItems> action_item_list;
    vector<Decision> decision_list;
    vector<Deliverable> deliverable_list;
    vector<Issue> issue_list;
    vector<Requirement> requirement_list;
    vector<Resource> resource_list;
    vector<Risk> risk_list;
    vector<Skill> skill_list;
    vector<Task> task_list;
    vector<base_class> base_class_list;
    int data_dir_length;
    char data_dir[255];
    std::fstream File;

public:
    ID_Tracker(char _data_dir[], int data_dir_length);

    void add_action_item(ActionItems action_item);
    void add_deliverable(Deliverable deliverable);
    void add_issue(Issue issue);
    void add_resource(Resource resource);
    void add_skill(Skill skill);
    void add_task(Task task);
    void add_base_class(base_class base_class);

    void remove_action_item(int unique_id);
    void remove_deliverable(int unique_id);
    void remove_issue(int unique_id);
    void remove_resource(int unique_id);
    void remove_skill(int unique_id);
    void remove_task(int unique_id);

    ActionItems get_action_item(int unique_id);
    Deliverable get_deliverable(int unique_id);
    Issue get_issue(int unique_id);
    Resource get_resource(int unique_id);
    Skill get_skill(int unique_id);
    Task get_task(int unique_id);

    Task get_action_item_task(int unique_id);
    Issue get_decision_issue(int unique_id);
    Resource get_decision_resource(int unique_id);
    Task get_issue_task(int unique_id);
    Skill get_resource_skill(int unique_id);
    Deliverable get_requirement_deliverable(int unique_id);
    Issue get_risk_issue(int unique_id);
    Resource get_risk_resource(int unique_id);
    Resource get_task_resource(int unique_id);
    Deliverable get_task_deliverable(int unique_id);
    vector<Task> get_deliverable_tasks(int unique_id);
    vector<Requirement> get_deliverable_requirements(int unique_id);
    vector<ActionItems> get_issue_action_items(int unique_id);
    vector<Decision> get_issue_decisions(int unique_id);
    vector<Task> get_resource_tasks(int unique_id);
    vector<Decision> get_resource_decisions(int unique_id);
    vector<Resource> get_skill_resources(int unique_id);
    vector<Issue> get_task_issues(int unique_id);

    void print_action_item(int unique_id);
    void print_deliverable(int unique_id);
    void print_issue(int unique_id);
    void print_resource(int unique_id);
    void print_skill(int unique_id);
    void print_task(int unique_id);
    void print_base_class(int unique_id);

    void print_all_action_items();
    void print_all_deliverables();
    void print_all_issues();
    void print_all_resources();
    void print_all_skills();
    void print_all_tasks();
    void print_all_base_classes();
    void print_all();
    void save_all();
    void load_all();

    void save_base_class();
    void load_base_class(int index);

};

#endif //INC_380_PROJECT_ID_TRACKER_H
