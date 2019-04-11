#ifndef tp_data_image_utils_LineCollectionMember_h
#define tp_data_image_utils_LineCollectionMember_h

#include "tp_data_image_utils/Globals.h"

#include "tp_image_utils/Point.h"

#include "tp_data/AbstractMember.h"

namespace tp_data_image_utils
{

//##################################################################################################
class LineCollectionMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  LineCollectionMember(const std::string& name);

  tp_image_utils::LineCollection data;
};

}

#endif
