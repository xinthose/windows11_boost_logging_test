#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup.hpp>

#include <iostream>

void init_logging()
{
    boost::log::add_file_log("sample.log");
    boost::log::add_console_log(std::cout, boost::log::keywords::format = "%TimeStamp%: %Message%");
    boost::log::add_common_attributes();
}

int main()
{
    init_logging();

    BOOST_LOG_TRIVIAL(info) << "This is an informational message.";
    BOOST_LOG_TRIVIAL(warning) << "This is a warning message.";
    BOOST_LOG_TRIVIAL(error) << "This is an error message.";

    return 0;
}
