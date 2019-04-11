#ifndef tp_data_image_utils_ColorMapMemberFactory_h
#define tp_data_image_utils_ColorMapMemberFactory_h

#include "tp_data_image_utils/Globals.h"


#include "tp_data/AbstractMemberFactory.h"

namespace tp_data_image_utils
{

//##################################################################################################
class ColorMapMemberFactory : public tp_data::AbstractMemberFactory
{
public:
  //################################################################################################
  ColorMapMemberFactory();

  //################################################################################################
  tp_data::AbstractMember* clone(std::string& error, const tp_data::AbstractMember& member) const override;

  //################################################################################################
  void save(std::string& error, const tp_data::AbstractMember& member, std::string& data) const override;

  //################################################################################################
  tp_data::AbstractMember* load(std::string& error, const std::string& data) const override;
};

}

#endif
