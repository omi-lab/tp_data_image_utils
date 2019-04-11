#ifndef tp_data_image_utils_ByteMapMember_h
#define tp_data_image_utils_ByteMapMember_h

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/ByteMap.h"

#include "tp_data/AbstractMember.h"

namespace tp_data_image_utils
{

//##################################################################################################
class ByteMapMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  ByteMapMember(const std::string& name);

  tp_image_utils::ByteMap data;
};

}

#endif
