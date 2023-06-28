/*
Deals with converting output into an object
so that we can get information from it.
Author: Marcel Pratikto

TODO: TYPE, SRC, DST, SINR, ERR
*/

#include "outputs.h"

Outputs::Outputs(){}
Outputs::~Outputs(){}

void Outputs::add_output(std::string type, int src, int dst, double sinr, bool err)
{
    Output new_output;
    new_output.set_type(type);
    new_output.set_src(src);
    new_output.set_dst(dst);
    new_output.set_sinr(sinr);
    new_output.set_err(err);
    outputs.push_back(new_output);
}