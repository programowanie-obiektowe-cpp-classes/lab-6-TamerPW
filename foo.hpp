#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;

    std::for_each(people.begin(), people.end(), [&result](Human& human) {
        human.birthday();
        if (human.isMonster()) {
            result.push_back('n');
        }
        else {
            result.push_back('y');
        }
    });

    std::reverse(result.begin(), result.end());

    return result;
}
