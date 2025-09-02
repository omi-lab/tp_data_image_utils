#include "tp_data_image_utils/members/ByteMapMember.h"

namespace tp_data_image_utils
{

const std::string ByteMapMember::extension{"bin"};

//##################################################################################################
ByteMapMember::ByteMapMember(const tp_utils::StringID& name):
  tp_data::AbstractMember(name, byteMapSID())
{

}

//##################################################################################################
ByteMapMember* ByteMapMember::fromData(std::string& error, const std::string& data)
{
  return nullptr;
}

//##################################################################################################
std::string ByteMapMember::toData() const
{
  return {};
}

}
