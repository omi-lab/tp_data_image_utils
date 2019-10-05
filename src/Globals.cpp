#include "tp_data_image_utils/Globals.h"
#include "tp_data_image_utils/member_factories/ColorMapMemberFactory.h"

#include "tp_data/CollectionFactory.h"

//##################################################################################################
namespace tp_data_image_utils
{
TP_DEFINE_ID(                     colorMapSID,                        "Color map");
TP_DEFINE_ID(                      byteMapSID,                         "Byte map");

//##################################################################################################
void createCollectionFactories(tp_data::CollectionFactory& collectionFactory)
{
  collectionFactory.addMemberFactory(new ColorMapMemberFactory());
}

REGISTER_CREATE_COLLECTION_FACTORIES;

//##################################################################################################
int staticInit()
{
  return 0;
}

}
