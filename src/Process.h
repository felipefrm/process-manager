#ifndef PROCESS_H
#define PROCESS_H
#include <stdbool.h>
#include "ArrayList.h"

typedef enum State State;
enum State {Blocked, Executing, Ready};
typedef struct{
  int id, parent_id, var, *pc, priority,init_time, cpu_usage;
  ArrayList program;
  State state;
}Process;

bool equalsProcess(const Object o1,const Object o2);
Process* initProcess();
void freeProcess(Process* p);
/* readInput */
/* createProcess */
/* processSwitch */
/* unblockFirstProcess */
/* freeProcess */
#endif
