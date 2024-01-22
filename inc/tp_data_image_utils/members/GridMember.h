#ifndef tp_data_image_utils_GridMember_h
#define tp_data_image_utils_GridMember_h

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/Grid.h"

#include "tp_data/AbstractMember.h"

namespace tp_data_image_utils
{

//##################################################################################################
class GridMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  GridMember(const tp_utils::StringID& name=tp_utils::StringID());

  tp_image_utils::Grid data;
};

}

#endif
