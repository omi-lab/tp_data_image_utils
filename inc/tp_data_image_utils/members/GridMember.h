#pragma once

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/Grid.h"

#include "tp_data/AbstractMember.h"
#include "tp_data/AbstractMemberFactory.h"

namespace tp_data_image_utils
{

//##################################################################################################
class TP_DATA_IMAGE_UTILS_SHARED_EXPORT GridMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  GridMember(const tp_utils::StringID& name=tp_utils::StringID());

  //################################################################################################
  static GridMember* fromData(std::string& error, const std::string& data);

  //################################################################################################
  std::string toData() const;

  tp_image_utils::Grid data;
  static const std::string extension;
};

//##################################################################################################
using GridMemberFactory = tp_data::MultiDataMemberFactoryTemplate<GridMember, gridSID>;

}
