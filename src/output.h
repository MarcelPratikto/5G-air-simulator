#ifndef OUTPUT_H_
#define OUTPUT_H_

#include <string>

class Output
{
public:
    Output();
    ~Output();

    // GET
    std::string get_type(void);
    int get_src(void);
    int get_dst(void);
    double get_sinr(void);
    bool get_err(void);

    // SET
    void set_type(std::string);
    void set_src(int);
    void set_dst(int);
    void set_sinr(double);
    void set_err(bool);

private:
    std::string m_type;
    int m_src;
    int m_dst;
    double m_sinr;
    bool m_err;
};

#endif /* OUTPUT_H_ */