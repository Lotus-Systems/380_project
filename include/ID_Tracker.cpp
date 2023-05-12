//
// Created by lotus-systems on 5/9/23.
//

#include "ID_Tracker.h"
#include "base_class.h"
#include <string.h>
#include <string>
#include <stdio.h>

ID_Tracker::ID_Tracker(char _data_dir[], int data_dir_length) {
    memcpy(this->data_dir, _data_dir, data_dir_length);
    this->data_dir_length = data_dir_length;

}

void ID_Tracker::add_action_item(ActionItems action_item) {
    this->action_item_list.push_back(action_item);
}

void ID_Tracker::add_deliverable(Deliverable deliverable) {
    this->deliverable_list.push_back(deliverable);
}

void ID_Tracker::add_issue(Issue issue) {
    this->issue_list.push_back(issue);
}

void ID_Tracker::add_resource(Resource resource) {
    this->resource_list.push_back(resource);
}

void ID_Tracker::add_skill(Skill skill) {
    this->skill_list.push_back(skill);
}

void ID_Tracker::add_task(Task task) {
    this->task_list.push_back(task);
}

void ID_Tracker::add_base_class(base_class base_class) {
    this->base_class_list.push_back(base_class);
}

void ID_Tracker::remove_action_item(int unique_id) {
    action_item_list.erase(action_item_list.begin() + unique_id);
}

void ID_Tracker::remove_deliverable(int unique_id) {
    deliverable_list.erase(deliverable_list.begin() + unique_id);
}

void ID_Tracker::remove_issue(int unique_id) {
    issue_list.erase(issue_list.begin() + unique_id);
}

void ID_Tracker::remove_resource(int unique_id) {
    resource_list.erase(resource_list.begin() + unique_id);
}

void ID_Tracker::remove_skill(int unique_id) {
    skill_list.erase(skill_list.begin() + unique_id);
}

void ID_Tracker::remove_task(int unique_id) {
    task_list.erase(task_list.begin() + unique_id);
}

ActionItems ID_Tracker::get_action_item(int unique_id) {
    return action_item_list.at(unique_id);
}

Deliverable ID_Tracker::get_deliverable(int unique_id) {
    return deliverable_list.at(unique_id);
}

Issue ID_Tracker::get_issue(int unique_id) {
    return issue_list.at(unique_id);
}

Resource ID_Tracker::get_resource(int unique_id) {
    return resource_list.at(unique_id);
}

Skill ID_Tracker::get_skill(int unique_id) {
    return skill_list.at(unique_id);
}

Task ID_Tracker::get_task(int unique_id) {
    return task_list.at(unique_id);
}

Task ID_Tracker::get_action_item_task(int unique_id) {
    return task_list.at(action_item_list.at(unique_id).get_task_id());
}

Issue ID_Tracker::get_decision_issue(int unique_id) {
    return issue_list.at(decision_list.at(unique_id).get_associated_issue());
}

Resource ID_Tracker::get_decision_resource(int unique_id) {
    return resource_list.at(decision_list.at(unique_id).get_associated_resource());
}

Task ID_Tracker::get_issue_task(int unique_id) {
    return task_list.at(issue_list.at(unique_id).get_associated_task());
}

Skill ID_Tracker::get_resource_skill(int unique_id) {
    return skill_list.at(resource_list.at(unique_id).get_associated_skill());
}

Deliverable ID_Tracker::get_requirement_deliverable(int unique_id) {
    return deliverable_list.at(requirement_list.at(unique_id).get_associated_deliverable());
}

Issue ID_Tracker::get_risk_issue(int unique_id) {
    return issue_list.at(risk_list.at(unique_id).get_associated_issue());
}

Resource ID_Tracker::get_risk_resource(int unique_id) {
    return resource_list.at(risk_list.at(unique_id).get_associated_resource());
}

Resource ID_Tracker::get_task_resource(int unique_id) {
    return resource_list.at(task_list.at(unique_id).get_associated_resource());
}

Deliverable ID_Tracker::get_task_deliverable(int unique_id) {
    return deliverable_list.at(task_list.at(unique_id).get_associated_deliverable());
}

vector<Task> ID_Tracker::get_deliverable_tasks(int unique_id) {
    int* task_ids = deliverable_list.at(unique_id).get_associated_tasks();
    vector<Task> tasks;
    while (*task_ids != -1) {
        tasks.push_back(task_list.at(*task_ids));
        task_ids++;
    }
    return tasks;
}

vector<Requirement> ID_Tracker::get_deliverable_requirements(int unique_id) {
    int* requirement_ids = deliverable_list.at(unique_id).get_associated_requirements();
    vector<Requirement> requirements;
    while (*requirement_ids != -1) {
        requirements.push_back(requirement_list.at(*requirement_ids));
        requirement_ids++;
    }
    return requirements;
}

vector<ActionItems> ID_Tracker::get_issue_action_items(int unique_id) {
    int* action_item_ids = issue_list.at(unique_id).get_associated_action_items();
    vector<ActionItems> action_items;
    while (*action_item_ids != -1) {
        action_items.push_back(action_item_list.at(*action_item_ids));
        action_item_ids++;
    }
    return action_items;
}

vector<Decision> ID_Tracker::get_issue_decisions(int unique_id) {
    int* decision_ids = issue_list.at(unique_id).get_associated_decisions();
    vector<Decision> decisions;
    while (*decision_ids != -1) {
        decisions.push_back(decision_list.at(*decision_ids));
        decision_ids++;
    }
    return decisions;
}

vector<Task> ID_Tracker::get_resource_tasks(int unique_id) {
    int* task_ids = resource_list.at(unique_id).get_associated_tasks();
    vector<Task> tasks;
    while (*task_ids != -1) {
        tasks.push_back(task_list.at(*task_ids));
        task_ids++;
    }
    return tasks;
}

vector<Decision> ID_Tracker::get_resource_decisions(int unique_id) {
    int* decision_ids = resource_list.at(unique_id).get_associated_decisions();
    vector<Decision> decisions;
    while (*decision_ids != -1) {
        decisions.push_back(decision_list.at(*decision_ids));
        decision_ids++;
    }
    return decisions;
}

vector<Resource> ID_Tracker::get_skill_resources(int unique_id) {
    int* resource_ids = skill_list.at(unique_id).get_associated_resources();
    vector<Resource> resources;
    while (*resource_ids != -1) {
        resources.push_back(resource_list.at(*resource_ids));
        resource_ids++;
    }
    return resources;
}

vector<Issue> ID_Tracker::get_task_issues(int unique_id) {
    int* issue_ids = task_list.at(unique_id).get_associated_issues();
    vector<Issue> issues;
    while (*issue_ids != -1) {
        issues.push_back(issue_list.at(*issue_ids));
        issue_ids++;
    }
    return issues;
}

void ID_Tracker::print_action_item(int unique_id) {
    action_item_list.at(unique_id).print();
}

void ID_Tracker::print_deliverable(int unique_id) {
    deliverable_list.at(unique_id).print();
}

void ID_Tracker::print_issue(int unique_id) {
    issue_list.at(unique_id).print();
}

void ID_Tracker::print_resource(int unique_id) {
    resource_list.at(unique_id).print();
}

void ID_Tracker::print_skill(int unique_id) {
    skill_list.at(unique_id).print();
}

void ID_Tracker::print_task(int unique_id) {
    task_list.at(unique_id).print();
}

void ID_Tracker::print_base_class(int unique_id) {
    base_class_list.at(unique_id).print();
}

void ID_Tracker::print_all_action_items() {
    for (int i = 0; i < action_item_list.size(); i++) {
        action_item_list.at(i).print();
    }
}

void ID_Tracker::print_all_deliverables() {
    for (int i = 0; i < deliverable_list.size(); i++) {
        deliverable_list.at(i).print();
    }
}

void ID_Tracker::print_all_issues() {
    for (int i = 0; i < issue_list.size(); i++) {
        issue_list.at(i).print();
    }
}

void ID_Tracker::print_all_resources() {
    for (int i = 0; i < resource_list.size(); i++) {
        resource_list.at(i).print();
    }
}

void ID_Tracker::print_all_skills() {
    for (int i = 0; i < skill_list.size(); i++) {
        skill_list.at(i).print();
    }
}

void ID_Tracker::print_all_tasks() {
    for (int i = 0; i < task_list.size(); i++) {
        task_list.at(i).print();
    }
}

void ID_Tracker::print_all_base_classes() {
    for (int i = 0; i < base_class_list.size(); i++) {
        base_class_list.at(i).print();
    }
}

void ID_Tracker::print_all() {
    print_all_action_items();
    print_all_deliverables();
    print_all_issues();
    print_all_resources();
    print_all_skills();
    print_all_tasks();
    print_all_base_classes();
}

void ID_Tracker::save_base_class() {
    char save_location[255] = {0};
    memcpy(save_location, data_dir, data_dir_length);
    mempcpy(&save_location[data_dir_length-1], "base_class", 10);
    //memcpy(&save_location[(data_dir_length-1) + (strlen(type)-1)], index_str.c_str() , index_str.size());

    printf("%s", save_location);

    File.open(data_dir, std::ios::binary | std::ios::out);
    if(!File)
    {
        std::cerr<<"File error <"<<data_dir<<">\n";
        exit(1);
    }
    base_class_list.at(0).save(data_dir, data_dir_length, File);
    File.close();

    /*
    //base_class test = base_class(1, "test");
    FILE *out = fopen(save_location, "wb");
    //for(int i = 0; i < list.size(); i++){
        if(out) {
            base_class* temp = list.at(0);
            fwrite(temp, sizeof(uint8_t), sizeof(base_class), out);
            fclose(out);
        }
    //}
    */
}

void ID_Tracker::load_base_class(int index) {
    string index_str = to_string(index);
    char save_location[255] = {0};
    memcpy(save_location, data_dir, data_dir_length);
    memcpy(&save_location[data_dir_length-1], "base_class", 10);

    File.open(data_dir, std::ios::binary | std::ios::in);
    if(!File)
    {
        std::cerr<<"File error <"<<data_dir<<">\n";
        exit(1);
    }
    base_class b;
    b.load(data_dir, data_dir_length, File);
    base_class_list.push_back(b);
    File.close();

    /*
    char buffer[sizeof(base_class)] = {0};
    FILE *l = fopen(save_location, "rb");
    // read the whole file, iterate based on the size of the base class
    // load the file, get file size, divide by size of base class, iterate that many times.
    // ftell to get the size of the file, fseek to move the pointer to the beginning of the file.

    if(l){
        fseek(l, 0, SEEK_END);
        long lSize = ftell(l);
        lSize = lSize/sizeof(base_class);
        //rewind(l);
        fseek(l, 0, SEEK_SET);
        fread(&buffer[0], sizeof(char), sizeof(base_class), l);
        //for(int i = 0; i < lSize; i++) {
            base_class* temp = (base_class*)&buffer[0];
            base_class new_base = base_class(temp);
            list.push_back(&new_base);
            printf("loaded: %s %d %d\n", temp->get_name().c_str(), temp->get_unique_id());
        //}
    }
    */
}

void ID_Tracker::save_all(){
    /*
    save_list(action_item_list, "action_items.bin", data_dir, data_dir_length);
    save_list(deliverable_list, "deliverables.bin", data_dir, data_dir_length);
    save_list(issue_list, "issues.bin", data_dir, data_dir_length);
    save_list(resource_list, "resource.bin", data_dir, data_dir_length);
    save_list(skill_list, "skills.bin", data_dir, data_dir_length);
    save_list(task_list, "tasks.bin", data_dir, data_dir_length);
    */
    //save_list(all_list, "all.bin", data_dir, data_dir_length);
}

void ID_Tracker::load_all() {
    /*
    load_list(action_item_list, "action_items.bin", data_dir, data_dir_length);
    load_list(deliverable_list, "deliverables.bin", data_dir, data_dir_length);
    load_list(issue_list, "issues.bin", data_dir, data_dir_length);
    load_list(resource_list, "resource.bin", data_dir, data_dir_length);
    load_list(skill_list, "skills.bin", data_dir, data_dir_length);
    load_list(task_list, "tasks.bin", data_dir, data_dir_length);
    */
    //load_list(all_list, "all.bin", data_dir, data_dir_length);
}
