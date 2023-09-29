#pragma once
#include <zephyr.h>

typedef struct signal_data {
    int32_t input;
    int32_t output;
} signal_data_t;

typedef struct k_sem k_sem_t;


void signal_handle_calculation(k_sem_t *request,
                               k_sem_t *response,
                               signal_data_t *data);

int signal_request_calculate(k_sem_t *request,
                             k_sem_t *response,
                             signal_data_t *data);
