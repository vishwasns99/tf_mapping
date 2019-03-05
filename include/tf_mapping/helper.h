#include <iostream>

// macro to convert a string to a double
#define SSTR(x) static_cast<std::ostringstream&>(std::ostringstream() << std::dec << x).str()

//macro to round a value to 2 digits
#define ROUND2(x) std::round(x * 100) / 100
#define ROUND3(x) std::round(x * 1000) / 1000



namespace tf_mapping
{

int getNumOfString(std::string str);



}