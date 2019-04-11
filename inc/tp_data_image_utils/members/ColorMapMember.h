#ifndef tp_data_image_utils_ColorMapMember_h
#define tp_data_image_utils_ColorMapMember_h

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/ColorMap.h"

#include "tp_data/AbstractMember.h"

namespace tp_data_image_utils
{

//##################################################################################################
class ColorMapMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  ColorMapMember(const std::string& name=std::string());

  tp_image_utils::ColorMap data;
};

}

#endif
