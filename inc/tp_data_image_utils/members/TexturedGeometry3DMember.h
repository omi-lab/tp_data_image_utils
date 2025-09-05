#pragma once

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/ColorMap.h"

#include "tp_math_utils/Geometry3D.h"

#include "tp_data/AbstractMember.h"
#include "tp_data/AbstractMemberFactory.h"

namespace tp_data_image_utils
{

//##################################################################################################
struct TexturedGeometry3D
{
  std::vector<tp_math_utils::Geometry3D> geometry;
  std::unordered_map<tp_utils::StringID, tp_image_utils::ColorMap> textures;
};

//##################################################################################################
class TP_DATA_IMAGE_UTILS_SHARED_EXPORT TexturedGeometry3DMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  TexturedGeometry3DMember(const tp_utils::StringID& name=tp_utils::StringID());

  //################################################################################################
  static TexturedGeometry3DMember* fromData(std::string& error, const std::string& data);

  //################################################################################################
  std::string toData() const;

  TexturedGeometry3D data;
  static const std::string extension;
};

//##################################################################################################
using TexturedGeometry3DMemberFactory = tp_data::MultiDataMemberFactoryTemplate<TexturedGeometry3DMember, texturedGeometry3DSID>;

}
