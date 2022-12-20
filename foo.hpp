#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

        std::for_each(std::begin(people), std::end(people), [&](Human& human) {
        if (human.isMonster())
            ret_v.push_back('n');
        else
            ret_v.push_back('y');
        human.birthday();
    });

    reverse(ret_v.begin(), ret_v.end());

    return ret_v;
}
