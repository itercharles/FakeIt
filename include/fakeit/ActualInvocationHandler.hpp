/*
 * Copyright (c) 2014 Eran Pe'er.
 *
 * This program is made available under the terms of the MIT License.
 *
 * Created on Mar 10, 2014
 */
#pragma once

#include "mockutils/Destructible.hpp"
#include "mockutils/type_utils.hpp"

namespace fakeit {

    template<typename R, typename ... arglist>
    struct ActualInvocationHandler : Destructible {
        virtual R handleMethodInvocation(ArgumentsTuple<arglist...> & args) = 0;
    };

}
