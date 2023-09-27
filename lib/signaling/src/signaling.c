#include "signaling.h"

void signal_handle_calculation(k_sem_t *request,
                               k_sem_t *response,
                               signal_data_t *data)
{
    k_sem_take(request, K_FOREVER);
    data->output = data->input + 5;
    k_sem_give(response);
}

int signal_request_calculate(k_sem_t *request,
                             k_sem_t *response,
                             signal_data_t *data)
{
    k_sem_give(request);
    k_sem_take(response, K_FOREVER);
}