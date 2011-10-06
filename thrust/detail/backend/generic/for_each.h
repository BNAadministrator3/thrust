/*
 *  Copyright 2008-2011 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*! \file for_each.h
 *  \brief Generic implementation of for_each.
 *         It is an error to call this function; it has no implementation.
 */

#pragma once

namespace thrust
{
namespace detail
{
namespace backend
{
namespace generic
{

template<typename InputIterator,
         typename UnaryFunction>
void for_each(InputIterator first,
              InputIterator last,
              UnaryFunction f);

} // end namespace generic
} // end namespace backend
} // end namespace detail
} // end namespace thrust

