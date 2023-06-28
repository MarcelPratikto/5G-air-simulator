/*
Framework for an output object
*/

#include "output.h"

// constructor
Output::Output()
{
    m_type = "UNDEFINED";
    m_src = 0;
    m_dst = 0;
    m_sinr = 0;
    m_err = 0;
}
// destructor
Output::~Output()
{}

/******************************************************************************************************************
    GET
*******************************************************************************************************************/
std::string Output::get_type(void)
{
    return m_type;
}

int Output::get_src(void)
{
    return m_src;
}

int Output::get_dst(void)
{
    return m_dst;
}

double Output::get_sinr(void)
{
    return m_sinr;
}

bool Output::get_err(void)
{
    return m_err;
}

/******************************************************************************************************************
    SET
*******************************************************************************************************************/
void Output::set_type(std::string type)
{
    m_type = type;
}

void Output::set_src(int src)
{
    m_src = src;
}

void Output::set_dst(int dst)
{
    m_dst = dst;
}

void Output::set_sinr(double sinr)
{
    m_sinr = sinr;
}

void Output::set_err(bool err)
{
    m_err = err;
}