/*
Deals with converting output into an object
so that we can get information from it.
Author: Marcel Pratikto

TODO: TYPE, SRC, DST, SINR, ERR
*/

#include "outputs.h"
#include <iostream>

Outputs::Outputs()
{
    std::cout << "OUTPUTS CONSTRUCTOR" << std::endl;
}
Outputs::~Outputs()
{
    std::cout << "OUTPUTS DESTRUCTOR" << std::endl;
}

// void Outputs::add_output(std::string type, int src, int dst, double sinr, bool err)
// {
//     Output new_output;
//     new_output.set_type(type);
//     new_output.set_src(src);
//     new_output.set_dst(dst);
//     new_output.set_sinr(sinr);
//     new_output.set_err(err);
//     m_outputs->push_back(new_output);
// }

std::vector<Output> *Outputs::create_vector(void)
{
    return new std::vector<Output>;
}

void Outputs::print_vector(std::vector<Output> *outputs)
{
    std::cout
    << "TYPE: " << outputs->back().get_type()
    << " SRC: " << outputs->back().get_src()
    << " DST: "<< outputs->back().get_dst()
    << " SINR: " << outputs->back().get_sinr()
    << " ERR: " << outputs->back().get_err()
    << std::endl;
}