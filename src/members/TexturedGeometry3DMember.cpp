#include "tp_data_image_utils/members/TexturedGeometry3DMember.h"

namespace tp_data_image_utils
{

const std::string TexturedGeometry3DMember::extension{"json"};

//##################################################################################################
TexturedGeometry3DMember::TexturedGeometry3DMember(const tp_utils::StringID& name):
  tp_data::AbstractMember(name, texturedGeometry3DSID())
{

}

//##################################################################################################
TexturedGeometry3DMember* TexturedGeometry3DMember::fromData(std::string& error, const std::string& data)
{
  TP_UNUSED(error);
  TP_UNUSED(data);
  return nullptr;
}

//##################################################################################################
std::string TexturedGeometry3DMember::toData() const
{
  return {};
}

}
