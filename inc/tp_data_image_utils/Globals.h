#pragma once

#include "tp_utils/StringID.h"


#if defined(TP_DATA_IMAGE_UTILS_LIBRARY)
#  define TP_DATA_IMAGE_UTILS_SHARED_EXPORT TP_EXPORT
#else
#  define TP_DATA_IMAGE_UTILS_SHARED_EXPORT TP_IMPORT
#endif

namespace tp_data
{
class CollectionFactory;
}

//##################################################################################################
//! Pipeline step delegates for processing images using tp_image_utils
namespace tp_data_image_utils
{
TP_DECLARE_ID(                     colorMapSID,                        "Color map");
TP_DECLARE_ID(                    colorMapFSID,                      "Color map f");
TP_DECLARE_ID(                      byteMapSID,                         "Byte map");
TP_DECLARE_ID(               lineCollectionSID,                  "Line collection");
TP_DECLARE_ID(                         gridSID,                             "Grid");

//##################################################################################################
//! Add the collection factories that this module provides to the CollectionFactory
void createCollectionFactories(tp_data::CollectionFactory& collectionFactory);

//##################################################################################################
//! Static initialization of this module, see TP_STATIC_INIT in dependencies.pri
int staticInit();

}
