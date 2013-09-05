//------------------------------------------------------------------------------
/*
    This file is part of Beast: https://github.com/vinniefalco/Beast
    Copyright 2013, Vinnie Falco <vinnie.falco@gmail.com>

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

#include "system/OpenSSLIncludes.h"

#include "beast_asio.h"

namespace beast
{

#include "async/SharedHandler.cpp"

#include "basics/PeerRole.cpp"
#include "basics/SSLContext.cpp"

#include "sockets/SocketBase.cpp"
#include "sockets/Socket.cpp"

#include "protocol/HandshakeDetectLogicPROXY.cpp"

#include "parsehttp/http_parser.h"

#include "tests/PeerTest.cpp"
#include "tests/TestPeerBasics.cpp"
#include "tests/TestPeerLogic.cpp"
#include "tests/TestPeerLogicProxyClient.cpp"
#include "tests/TestPeerLogicSyncServer.cpp"
#include "tests/TestPeerLogicSyncClient.cpp"
#include "tests/TestPeerLogicAsyncServer.cpp"
#include "tests/TestPeerLogicAsyncClient.cpp"
#include "tests/TestPeerUnitTests.cpp"

#include "system/BoostUnitTests.cpp"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4127) // conditional expression is constant
#pragma warning (disable: 4244) // integer conversion, possible loss of data
#endif
#include "parsehttp/http_parser.c"
#ifdef _MSC_VER
#pragma warning (pop)
#endif

}

//------------------------------------------------------------------------------
