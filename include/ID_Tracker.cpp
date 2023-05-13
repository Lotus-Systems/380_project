//
// Created by lotus-systems on 5/9/23.
//

#include "ID_Tracker.h"
#include <string.h>
#include <stdio.h>

ID_Tracker::ID_Tracker(char _data_dir[], int data_dir_length) {
    memcpy(this->data_dir, _data_dir, data_dir_length);
    this->data_dir_length = data_dir_length;
}

void ID_Tracker::add_base_class(base_class* base_class) {
    this->all_list.push_back(base_class);
}

//TODO: fix this shit
void ID_Tracker::save_list(vector<base_class*> list, char type[], char data_dir[], int data_dir_length) {
    char save_location[255] = {0};
    memcpy(save_location, data_dir, data_dir_length);
    memcpy(&save_location[data_dir_length-1], type, sizeof(strlen(type)));

    //base_class test = base_class(1, "test");

    FILE *out = fopen(save_location, "wb");
    //for(int i = 0; i < list.size(); i++){
        if(out) {
            base_class* temp = list.at(0);
            fwrite(temp, sizeof(uint8_t), sizeof(base_class), out);
            fclose(out);
        }
    //}
}

void ID_Tracker::load_list(vector<base_class*> list, char type[], char data_dir[], int data_dir_length) {
    char save_location[255] = {0};
    memcpy(save_location, data_dir, data_dir_length);
    memcpy(&save_location[data_dir_length-1], type, sizeof(strlen(type)));

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
