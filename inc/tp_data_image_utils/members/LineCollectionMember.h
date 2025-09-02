#pragma once

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/Point.h"

#include "tp_data/AbstractMember.h"
#include "tp_data/AbstractMemberFactory.h"

namespace tp_data_image_utils
{

//##################################################################################################
class TP_DATA_IMAGE_UTILS_SHARED_EXPORT LineCollectionMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  LineCollectionMember(const tp_utils::StringID& name=tp_utils::StringID());

  //################################################################################################
  static LineCollectionMember* fromData(std::string& error, const std::string& data);

  //################################################################################################
  std::string toData() const;

  tp_image_utils::LineCollection data;
  static const std::string extension;
};

//##################################################################################################
using LineCollectionMemberFactory = tp_data::MultiDataMemberFactoryTemplate<LineCollectionMember, lineCollectionSID>;

}
