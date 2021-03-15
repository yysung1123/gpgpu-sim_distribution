#include "op_stat.h"

void op_stat_add(const warp_inst_t& inst) {
    pthread_mutex_lock(&mtx);
    if (inst.op > 0 and inst.op <= 17) {
        op_stat[inst.op] += inst.active_count();
//        printf("yysung: %d\n", op_stat[inst->op]);
    }
    pthread_mutex_unlock(&mtx);
}

void print_op_stat() {
    for (int op = 1; op <= 17; ++op) {
        printf("yysung: %d: %d\n", op, op_stat[op]);
    }
}
