TARGET = tp_data_image_utils
TEMPLATE = lib

DEFINES += TP_DATA_IMAGE_UTILS_LIBRARY

SOURCES += src/Globals.cpp
HEADERS += inc/tp_data_image_utils/Globals.h

#-- Members ----------------------------------------------------------------------------------------
SOURCES += src/members/ColorMapMember.cpp
HEADERS += inc/tp_data_image_utils/members/ColorMapMember.h

SOURCES += src/members/ColorMapFMember.cpp
HEADERS += inc/tp_data_image_utils/members/ColorMapFMember.h

SOURCES += src/members/ByteMapMember.cpp
HEADERS += inc/tp_data_image_utils/members/ByteMapMember.h

SOURCES += src/members/LineCollectionMember.cpp
HEADERS += inc/tp_data_image_utils/members/LineCollectionMember.h

SOURCES += src/members/GridMember.cpp
HEADERS += inc/tp_data_image_utils/members/GridMember.h

SOURCES += src/members/TexturedGeometry3DMember.cpp
HEADERS += inc/tp_data_image_utils/members/TexturedGeometry3DMember.h
