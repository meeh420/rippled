//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================


#include "BeastConfig.h"

#include "ripple_validators.h"

#include "beast/modules/beast_core/system/BeforeBoost.h"
#include <boost/regex.hpp>
#include <boost/unordered_set.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/key_extractors.hpp>

#include <set>

#include "beast/modules/beast_asio/beast_asio.h"
#include "beast/modules/beast_sqdb/beast_sqdb.h"

#include "../ripple_data/ripple_data.h" // for RippleAddress REMOVE ASAP

#include "../testoverlay/ripple_testoverlay.h" // for unit test

namespace ripple {
using namespace beast;
}

# include "impl/CancelCallbacks.h"
# include "impl/ChosenList.h"
# include "impl/SourceFile.h"
# include "impl/SourceStrings.h"
# include "impl/SourceURL.h"
# include "impl/Utilities.h"
#  include "impl/SourceDesc.h"
# include "impl/Store.h"
# include "impl/StoreSqdb.h"
#include "impl/Logic.h"

#include "impl/Manager.cpp"
#include "impl/Source.cpp"
#include "impl/SourceFile.cpp"
#include "impl/SourceStrings.cpp"
#include "impl/SourceURL.cpp"
#include "impl/StoreSqdb.cpp"
#include "impl/Tests.cpp"
#include "impl/Utilities.cpp"
