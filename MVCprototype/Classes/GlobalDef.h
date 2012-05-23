//
//  GlobalDef.h
//  MVCprototype
//
//  Created by Hou Shuaiying on 12-5-23.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#ifndef MVCprototype_GlobalDef_h
#define MVCprototype_GlobalDef_h

#include "cocos2d.h"

USING_NS_CC;

#define MODEL_CREATE_FUNCTION(modelName) \
static modelName* model() \
{ \
modelName* pModel = new modelName(); \
pModel->autorelease(); \
return pModel; \
};

#define LAYER_NODE_FUNC_DOUBLE_PARAM(layer,__PARAMTYPE1__,__PARAM1__,__PARAMTYPE2__,__PARAM2__) \
static layer* node(__PARAMTYPE1__ __PARAM1__,__PARAMTYPE2__ __PARAM2__) \
{ \
layer *pRet = new layer(); \
if (pRet && pRet->init(__PARAM1__,__PARAM2__)) \
{ \
pRet->autorelease(); \
return pRet; \
} \
else \
{ \
delete pRet; \
pRet = NULL; \
return NULL; \
} \
}; 

#define VIEW_FUNC_ONEXIT \
virtual void onExit() { \
CCSpriteFrameCache::sharedSpriteFrameCache()->purgeSharedSpriteFrameCache(); \
CCSpriteFrameCache::sharedSpriteFrameCache()->removeSpriteFrames(); \
CCLayer::onExit(); \
}; 

#endif
