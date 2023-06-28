#ifndef OUTPUTS_H_
#define OUTPUTS_H_

#include "output.h"
#include <vector>
#include <string>

class Outputs
{
public:
    Outputs();
    ~Outputs();

    void add_output(std::string type, int src, int dst, double sinr, bool err);

private:
    std::vector<Output> outputs;
};

#endif /* OUTPUT_H_ */