#pragma once

#include <pthread.h>
#include "../abstract_hardware_model.h"

static int op_stat[18];
static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

void op_stat_add(const warp_inst_t&);

void print_op_stat();
