#include "tp_data_image_utils/Globals.h"
#include "tp_data_image_utils/members/ByteMapMember.h"
#include "tp_data_image_utils/members/ColorMapMember.h"
#include "tp_data_image_utils/members/ColorMapFMember.h"
#include "tp_data_image_utils/members/GridMember.h"
#include "tp_data_image_utils/members/LineCollectionMember.h"

#include "tp_data/CollectionFactory.h"

//##################################################################################################
namespace tp_data_image_utils
{
TP_DEFINE_ID(                     colorMapSID,                        "Color map");
TP_DEFINE_ID(                    colorMapFSID,                      "Color map f");
TP_DEFINE_ID(                      byteMapSID,                         "Byte map");
TP_DEFINE_ID(               lineCollectionSID,                  "Line collection");
TP_DEFINE_ID(                         gridSID,                             "Grid");

//##################################################################################################
void createCollectionFactories(tp_data::CollectionFactory& collectionFactory)
{
  collectionFactory.addMemberFactory(new ByteMapMemberFactory        ({184, 130, 137}));
  collectionFactory.addMemberFactory(new ColorMapFMemberFactory      ({209,  13,  38}));
  collectionFactory.addMemberFactory(new ColorMapMemberFactory       ({227,  64,  85}));
  collectionFactory.addMemberFactory(new GridMemberFactory           ({235, 135,  35}));
  collectionFactory.addMemberFactory(new LineCollectionMemberFactory ({184,  99,  15}));
}

REGISTER_CREATE_COLLECTION_FACTORIES;

//##################################################################################################
int staticInit()
{
  return 0;
}

}
