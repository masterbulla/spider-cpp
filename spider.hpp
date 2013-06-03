#ifndef SPIDER_SPIDER_HPP
#define SPIDER_SPIDER_HPP

#include <iosfwd>
#include <string>
#include "url.hpp"

namespace spider {

    class Spider {
    public:
        void run(
            std::ostream & output, 
            Url const& topUrl, 
            std::string const& downloadDirectory) const;
    };

}

#endif // SPIDER_SPIDER_HPP
