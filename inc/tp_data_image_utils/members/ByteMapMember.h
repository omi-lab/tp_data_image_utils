#pragma once

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/ByteMap.h"

#include "tp_data/AbstractMember.h"
#include "tp_data/AbstractMemberFactory.h"

namespace tp_data_image_utils
{

//##################################################################################################
class TP_DATA_IMAGE_UTILS_SHARED_EXPORT ByteMapMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  ByteMapMember(const tp_utils::StringID& name=tp_utils::StringID());

  //################################################################################################
  static ByteMapMember* fromData(std::string& error, const std::string& data);

  //################################################################################################
  std::string toData() const;

  tp_image_utils::ByteMap data;
  static const std::string extension;
};

//##################################################################################################
using ByteMapMemberFactory = tp_data::MultiDataMemberFactoryTemplate<ByteMapMember, byteMapSID>;

}
