#include <iostream>
#include <boost/optional.hpp>
#include <boost/filesystem.hpp>

boost::optional<int> getOptional(bool t) {
    return boost::make_optional(t, 10);
}

void printOptional(boost::optional<int> t) {
    std::cout << "Parameter is " << (t? "set" : "not set") << std::endl;
    if(t)
        std::cout << "And equals to " << t.get() << std::endl;
}

int main(int argc, char *argv[]) {
    boost::optional<int> a = getOptional(true);
    boost::optional<int> b = getOptional(false);

    boost::filesystem::path full_path(boost::filesystem::current_path());
    std::cout << "Current path is : " << full_path << std::endl;

    printOptional(a);
    printOptional(b);
    return 0;
}
