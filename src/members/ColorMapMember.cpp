#include "tp_data_image_utils/members/ColorMapMember.h"

#include "tp_image_utils/SaveImages.h"
#include "tp_image_utils/LoadImages.h"

namespace tp_data_image_utils
{

const std::string ColorMapMember::extension{"png"};

//##################################################################################################
ColorMapMember::ColorMapMember(const tp_utils::StringID& name, const tp_image_utils::ColorMap& data_):
  tp_data::AbstractMember(name, colorMapSID()),
  data(data_)
{

}

//##################################################################################################
void ColorMapMember::setImage(const tp_image_utils::ColorMap& img)
{
  data = img;
}

//##################################################################################################
ColorMapMember* ColorMapMember::fromData(std::string& error, const std::string& data)
{
  auto n = new ColorMapMember();
  n->data = tp_image_utils::loadImageFromData(data);
  return n;
}

//##################################################################################################
std::string ColorMapMember::toData() const
{
  return tp_image_utils::saveImageToData(data);
}

}
