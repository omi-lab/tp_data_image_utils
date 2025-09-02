#pragma once

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/ColorMap.h"

#include "tp_data/AbstractMember.h"
#include "tp_data/AbstractMemberFactory.h"

namespace tp_data_image_utils
{

//##################################################################################################
class TP_DATA_IMAGE_UTILS_SHARED_EXPORT ColorMapMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  ColorMapMember(const tp_utils::StringID& name={}, const tp_image_utils::ColorMap& data_={});

  //################################################################################################
  void setImage(const tp_image_utils::ColorMap& img);

  //################################################################################################
  static ColorMapMember* fromData(std::string& error, const std::string& data);

  //################################################################################################
  std::string toData() const;

  //################################################################################################
  tp_image_utils::ColorMap data;
  static const std::string extension;
};

//##################################################################################################
using ColorMapMemberFactory = tp_data::MultiDataMemberFactoryTemplate<ColorMapMember, colorMapSID>;


}
