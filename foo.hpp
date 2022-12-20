#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

        std::transform(
        std::begin(people), std::end(people), ret_v.begin(), [](Human & human) {
        human.birthday();
        if (human.isMonster())
            return 'n';
        else
            return 'y';
    });

    reverse(ret_v.begin(), ret_v.end());

    return ret_v;
}
