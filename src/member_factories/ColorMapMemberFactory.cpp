#include "tp_data_image_utils/member_factories/ColorMapMemberFactory.h"
#include "tp_data_image_utils/members/ColorMapMember.h"

#include "tp_image_utils/SaveImages.h"
#include "tp_image_utils/LoadImages.h"

namespace tp_data_image_utils
{

//##################################################################################################
ColorMapMemberFactory::ColorMapMemberFactory():
  tp_data::AbstractMemberFactory(colorMapSID(), "png")
{

}

//##################################################################################################
std::shared_ptr<tp_data::AbstractMember> ColorMapMemberFactory::clone(std::string& error, const tp_data::AbstractMember& member) const
{
  auto m = dynamic_cast<const ColorMapMember*>(&member);
  if(!m)
  {
    error = "Failed to cast color map.";
    return nullptr;
  }

  auto n = new ColorMapMember(m->name());
  n->data = m->data;
  return std::shared_ptr<tp_data::AbstractMember>(n);
}

//##################################################################################################
void ColorMapMemberFactory::save(std::string& error, const tp_data::AbstractMember& member, std::string& data) const
{
  auto m = dynamic_cast<const ColorMapMember*>(&member);
  if(!m)
  {
    error = "Failed to cast color map.";
    return;
  }

  data = tp_image_utils::saveImageToData(m->data);
}

//##################################################################################################
std::shared_ptr<tp_data::AbstractMember> ColorMapMemberFactory::load(std::string& error, const std::string& data) const
{
  TP_UNUSED(error);
  auto n = new ColorMapMember();
  n->data = tp_image_utils::loadImageFromData(data);
  return std::shared_ptr<tp_data::AbstractMember>(n);
}

}
