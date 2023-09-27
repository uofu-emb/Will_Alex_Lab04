#include "fifo.h"

void fifo_worker_handler(k_msgq_t *requests, k_msgq_t *results, int id)
{
    while (1) 
    {
        request_msg_t data = {};
        k_msgq_get(requests, &data, K_FOREVER);
        data.output = data.input + 5;
        data.handled_by = id;
        k_msgq_put(results, &data, K_FOREVER);
    }
}