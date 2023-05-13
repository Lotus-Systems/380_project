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
    ID_Tracker id_tracker = ID_Tracker(data_dir, data_dir_length);

    //id_tracker.add_base_class(base_class(1, "test"));

    //id_tracker.save_base_class();

    id_tracker.load_base_class();

    id_tracker.print_all_base_classes();

    return 0;
}
