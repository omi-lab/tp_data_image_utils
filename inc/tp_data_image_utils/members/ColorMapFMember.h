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
  ColorMapFMember(const tp_utils::StringID& name=tp_utils::StringID());

  //################################################################################################
  void setImage(const tp_image_utils::ColorMapF& img);

  tp_image_utils::ColorMapF data;
};

}

#endif
