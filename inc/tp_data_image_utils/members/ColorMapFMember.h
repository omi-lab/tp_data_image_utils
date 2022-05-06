#ifndef tp_data_image_utils_ColorMapFMember_h
#define tp_data_image_utils_ColorMapFMember_h

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/ColorMapF.h"

#include "tp_data/AbstractMember.h"

namespace tp_data_image_utils
{

//##################################################################################################
class ColorMapFMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  ColorMapFMember(const std::string& name=std::string());

  tp_image_utils::ColorMapF data;
};

}

#endif
