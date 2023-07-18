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

    // void add_output(std::string type, int src, int dst, double sinr, bool err);

    static std::vector<Output> *create_vector(void);

    // for debug
    static void print_vector(std::vector<Output> *outputs);

private:
    std::vector<Output> m_outputs;    
};

#endif /* OUTPUTS_H_ */