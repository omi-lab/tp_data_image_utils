#pragma once

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/ColorMapF.h"

#include "tp_data/AbstractMember.h"
#include "tp_data/AbstractMemberFactory.h"

namespace tp_data_image_utils
{

//##################################################################################################
class TP_DATA_IMAGE_UTILS_SHARED_EXPORT ColorMapFMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  ColorMapFMember(const tp_utils::StringID& name=tp_utils::StringID());

  //################################################################################################
  void setImage(const tp_image_utils::ColorMapF& img);

  //################################################################################################
  static ColorMapFMember* fromData(std::string& error, const std::string& data);

  //################################################################################################
  std::string toData() const;

  tp_image_utils::ColorMapF data;
  static const std::string extension;
};

//##################################################################################################
using ColorMapFMemberFactory = tp_data::MultiDataMemberFactoryTemplate<ColorMapFMember, colorMapFSID>;

}
