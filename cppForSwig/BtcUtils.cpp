////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  Copyright (C) 2011, Alan C. Reiner    <alan.reiner@gmail.com>             //
//  Distributed under the GNU Affero General Public License (AGPL v3)         //
//  See LICENSE or http://www.gnu.org/licenses/agpl.html                      //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include "BtcUtils.h"

BinaryData BtcUtils::BadAddress_    = BinaryData::CreateFromHex("0000000000000000000000000000000000000000");
BinaryData BtcUtils::GenesisHash_   = BinaryData::CreateFromHex(GENESIS_HASH_HEX);
BinaryData BtcUtils::GenesisTxHash_ = BinaryData::CreateFromHex(GENESIS_TX_HASH_HEX);
BinaryData BtcUtils::EmptyHash_     = BinaryData::CreateFromHex("0000000000000000000000000000000000000000000000000000000000000000");
BinaryData BtcUtils::MagicBytes_    = BinaryData::CreateFromHex(MAGIC_BYTES);

