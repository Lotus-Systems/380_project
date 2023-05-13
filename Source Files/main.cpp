#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include "../include/base_class.h"
#include "../include/ID_Tracker.h"

/*
 * functionality:
 * only really need to implement functions that interact with other classes or the DB
 * DB can be just saving and loading from a local file, don't actually have to host SQL locally.
 * GUI just implements the functions and displays the data, doesn't have to look anything like the mockup.
 *
 * do the association via id, not by pointer.
 * copy constructor
 *
 */

using namespace std;
static char data_dir[255] = {0};
static int data_dir_length = 0;

void get_data_dir(char* argv[]){
    memcpy(data_dir, argv[0], data_dir_length = strlen(argv[0]));
    char* str_pos = &data_dir[data_dir_length];
    int slash_count = 0;
    while(1){
        if(*str_pos == '\\'){
            slash_count++;
            if(slash_count == 2){
                break;
            }
        }
        str_pos--;
    }
    memcpy(str_pos, "\\data\\\n", 7);
    str_pos+= 7;
    memset(str_pos, 0,  255 - data_dir_length);
}

int main(int argc, char *argv[]) {
    // figure out the data directory

    get_data_dir(argv);
    data_dir_length = strlen(data_dir);

    // create the ID tracker
    //ID_Tracker id_tracker = ID_Tracker(data_dir, data_dir_length);
    /*
    base_class test1 = base_class(1, "test");
    base_class test2 = base_class(2, "test2");
    id_tracker.add_base_class(&test1);
    id_tracker.add_base_class(&test2);

    id_tracker.save_all();

    //id_tracker.load_all();

    char save_location[255] = {0};
    memcpy(save_location, data_dir, data_dir_length);
    memcpy(&save_location[data_dir_length-1], "test.bin", 9);

    FILE *i = fopen(save_location, "wb");
    if(i) {
        fwrite(&b, sizeof(char), sizeof(base_class), i);
        fclose(i);
    }


    char buffer[sizeof(base_class)] = {0};
    FILE *l = fopen(save_location, "rb");
    if(l) {
        fread(&buffer[0], sizeof(char), sizeof(base_class), l);
    }
    fclose(l);
     */

    base_class b = base_class(128, string("this is a test"));

    return 0;
}
