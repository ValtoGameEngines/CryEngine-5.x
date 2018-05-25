// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

STRUCT_INFO_BEGIN(SVisAreaChunk)
STRUCT_VAR_INFO(nChunkVersion, TYPE_INFO(int))
STRUCT_VAR_INFO(boxArea, TYPE_INFO(AABB))
STRUCT_VAR_INFO(boxStatics, TYPE_INFO(AABB))
STRUCT_VAR_INFO(sName, TYPE_ARRAY(32, TYPE_INFO(char)))
STRUCT_VAR_INFO(nObjectsBlockSize, TYPE_INFO(int))
STRUCT_VAR_INFO(arrConnectionsId, TYPE_ARRAY(30, TYPE_INFO(int)))
STRUCT_VAR_INFO(dwFlags, TYPE_INFO(uint32))
STRUCT_VAR_INFO(fPortalBlending, TYPE_INFO(float))
STRUCT_VAR_INFO(vConnNormals, TYPE_ARRAY(2, TYPE_INFO(Vec3)))
STRUCT_VAR_INFO(fHeight, TYPE_INFO(float))
STRUCT_VAR_INFO(vAmbColor, TYPE_INFO(Vec3))
STRUCT_VAR_INFO(fViewDistRatio, TYPE_INFO(float))
STRUCT_INFO_END(SVisAreaChunk)
