#include "tp_data_image_utils/members/ColorMapFMember.h"

namespace tp_data_image_utils
{

const std::string ColorMapFMember::extension{"bin"};

//##################################################################################################
ColorMapFMember::ColorMapFMember(const tp_utils::StringID& name):
  tp_data::AbstractMember(name, colorMapFSID())
{

}

//##################################################################################################
ColorMapFMember* ColorMapFMember::fromData(std::string& error, const std::string& data)
{
  TP_UNUSED(error);
  TP_UNUSED(data);
  return nullptr;
}

//##################################################################################################
std::string ColorMapFMember::toData() const
{
  return {};
}

}
