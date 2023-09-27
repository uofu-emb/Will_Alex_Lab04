#include <zephyr.h>
#include <stdio.h>

typedef struct request_msg {
    int32_t input;
    int32_t output;
    uint32_t handled_by;
} request_msg_t;

typedef struct k_msgq k_msgq_t;

void fifo_worker_handler(k_msgq_t *requests, k_msgq_t *results, int id);
