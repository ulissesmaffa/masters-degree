#include <stdio.h>
#include "geem_sa.h"

int size_new_col(int col) {
    int offset = N - 1;
    return col + offset;
}

// Função responsável por buscar lateral, superior e depois computar
void compute_sa_waves(
    int row_a,
    int col_a,
    int *addr_a,
    int stride_a,
    int row_b,
    int col_b,
    int *addr_b,
    int stride_b,
    SA *sa // Passa um ponteiro para SA
) {
    stride_a = stride_a + col_a; // ajuste do stride
    stride_b = stride_b + col_b; // ajuste do stride
    int offset = N - 1;
    int new_col_a = size_new_col(col_a);
    int i, j, k, w, value_a, value_b;

    // Iteração por ondas
    for (w = 0; w < new_col_a; w++) {
        // Iteração interface lateral
        printf("\nInsert Buffer A: ");
        for (i = 0; i < N; i++) {
            int *line_base_a = addr_a + i * stride_a;
            if (w < i) {
                value_a = 0; // Região inicial com zeros
            } else if (w < i + col_a) {
                value_a = *(line_base_a + col_a - 1 - (w - i));
            } else {
                value_a = 0; // Região final com zeros
            }
            sa_add_to_buffer_a(sa, i, value_a);
            printf("li_%i[%i]=%d ", i, w, value_a);
        }

        // Iteração interface superior
        printf("\nInsert Buffer B: ");
        for (j = 0; j < N; j++) {
            int *line_base_b = addr_b + (stride_b * (row_b - 1)) - (stride_b * (w - j));
            if (w < j) {
                value_b = 0; // Região inicial com zeros
            } else if (w < j + row_b) {
                value_b = *(line_base_b + j);
            } else {
                value_b = 0; // Região final com zeros
            }
            sa_add_to_buffer_b(sa, j, value_b);
            printf("tw_%i[%i]=%d ", j, w, value_b);
        }

        printf("\n");
        // Computa a onda na SA
        printf("Computing SA wave [%i]\n", w);
        sa_compute(sa);
    }

    // Ciclos extras para finalizar computação
    int extra = row_b - 1 + col_b + N;
    for (k = 0; k < extra - w; k++) {
        printf("\nInsert Buffer A: ");
        for (i = 0; i < N; i++) {
            sa_add_to_buffer_a(sa, i, 0);
            printf("li_%i[%i]=%d ", i, w, 0);
        }

        printf("\nInsert Buffer B: ");
        for (j = 0; j < N; j++) {
            sa_add_to_buffer_b(sa, j, 0);
            printf("tw_%i[%i]=%d ", j, w, 0);
        }

        printf("\n");
        printf("Computing SA wave [%i]\n", w);
        sa_compute(sa);
        w++;
    }

    // Mostra o resultado
    printf("\nSA Results:\n");
    sa_show_result(sa);
    printf("\n");
}

int main() {
    int row_a, col_a, *addr_a, stride_a;
    int row_b, col_b, *addr_b, stride_b;
    SA sa;

    sa_init(&sa); // Inicializa a SA

    int memory[] = {
        1, 2, 3, 4, 0, 5, 6, 7, 8, 0, 9, 10, 11, 12, 0, 13, 14, 15, 16,
        0, 0, 1, 2, 3, 0, 0, 4, 5, 6, // matriz A1 2x3
        0, 7, 8, 0, 9, 10, 0, 11, 12, 0, // matriz B1 3x2
        5, 2, 7, 10, 0, 0, 0, -3, -1, 4, -3, 0, 0, 0, 0, 1, 24, 3, // matriz A2 3x4
        -1, 3, 15, 0, 0, 0, 0, 7, 2, 22, 0, 0, 0, 0, 21, -30, 55, 0, 0, 0, 0, 7, 1, 0, 99, 99 // matriz B2 4x3
    };

    printf("COMPUTE SA WAVES FUNCTION: SA %iX%i\n", N, N);
    compute_sa_waves(
        2, 3, &memory[21], 2, // Matriz A1
        3, 2, &memory[30], 1, // Matriz B1
        &sa // Ponteiro para SA
    );

    return 0;
}