#ifndef __LINEAR_PROGRAM__
#define __LINEAR_PROGRAM__

typedef struct ProductionInput
{
    int productsQty, compositesQty;
    float *compositesCost;
    float *compositesLimit;
    float *productsValue;
    float **productsRecipe;
} ProductionInput;

ProductionInput *read_production();

void print_production(ProductionInput *production);

#endif