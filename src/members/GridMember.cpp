#include "tp_data_image_utils/members/GridMember.h"

namespace tp_data_image_utils
{

const std::string GridMember::extension{"json"};

//##################################################################################################
GridMember::GridMember(const tp_utils::StringID& name):
  tp_data::AbstractMember(name, gridSID())
{

}

//##################################################################################################
GridMember* GridMember::fromData(std::string& error, const std::string& data)
{
  return nullptr;
}

//##################################################################################################
std::string GridMember::toData() const
{
  return {};
}

}
