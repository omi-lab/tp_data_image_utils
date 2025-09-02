#include "tp_data_image_utils/members/LineCollectionMember.h"

namespace tp_data_image_utils
{

const std::string LineCollectionMember::extension{"json"};

//##################################################################################################
LineCollectionMember::LineCollectionMember(const tp_utils::StringID& name):
  tp_data::AbstractMember(name, lineCollectionSID())
{

}

//##################################################################################################
LineCollectionMember* LineCollectionMember::fromData(std::string& error, const std::string& data)
{
  return nullptr;
}

//##################################################################################################
std::string LineCollectionMember::toData() const
{
  return {};
}

}
