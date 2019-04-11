#ifndef tp_data_image_utils_Globals_h
#define tp_data_image_utils_Globals_h

#include "tp_utils/StringID.h"

namespace tp_data
{
class CollectionFactory;
}

//##################################################################################################
//! Pipeline step delegates for processing images using tp_image_utils
namespace tp_data_image_utils
{
TDP_DECLARE_ID(                     colorMapSID,                        "Color map")
TDP_DECLARE_ID(                      byteMapSID,                         "Byte map")

//##################################################################################################
//! Add the collection factories that this module provides to the StepDelegateMap
void createCollectionFactories(tp_data::CollectionFactory& collectionFactory);

}

#endif
