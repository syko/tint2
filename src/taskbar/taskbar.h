
#ifndef TASKBAR_H
#define TASKBAR_H

#include "task.h"


// --------------------------------------------------
// taskbar parameter
typedef struct {
   // --------------------------------------------------
   // always start with area
   Area area;

   int desktop;
   int monitor;
   
   // task parameters
   int task_width;
   int task_modulo;
   int text_width;
} Taskbar;


// --------------------------------------------------
// global taskbar parameter
Area g_taskbar;


Task *task_get_task (Window win);
void task_refresh_tasklist ();

// return 1 if task_width changed
int resize_tasks (Taskbar *tskbar);

//void add_taskbar(Area *a);

#endif

