#include "tp_data_image_utils/members/ColorMapMember.h"

namespace tp_data_image_utils
{
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


}
