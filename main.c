#include <stdio.h>
#include "src/utils.h"
#include "src/linear_program.h"

int main()
{
    ProductionInput *production;

    production = read_production();
    if (production == NULL)
    {
        perror("Error reading file");
        return 1;
    }

    // print_production(production);

    get_objective_function(production);

    free_production(production);
    return 0;
}