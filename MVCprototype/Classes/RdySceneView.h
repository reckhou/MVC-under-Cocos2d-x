//
//  RdySceneView.h
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#ifndef MVCprototype_RdySceneView_h
#define MVCprototype_RdySceneView_h

#include "cocos2d.h"
#include "RdySceneModel.h"
#include "RdySceneViewDelegate.h"
#include "RdySceneModelDelegate.h"

USING_NS_CC;

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

// Have to inherit CCLayer here because of C++'s lack of type (id)
class RdySceneView : public CCLayer, public RdySceneModelDelegate
{
  
public:
	LAYER_NODE_FUNC_DOUBLE_PARAM(RdySceneView, RdySceneViewDelegate*, pDelegate,
                               RdySceneModel*, pModel);
  RdySceneViewDelegate* getObserver(); // not necessary, just a shortcut.
  
  // implement delegate method here, treat "model" as its observer.
  virtual void testModelDelegate(); 
  
  void update();
  
private:
  virtual bool init(RdySceneViewDelegate* pDelegate, RdySceneModel* pModel);
  
private:
  // treat "model" as its observer.
  RdySceneViewDelegate* ObserverDelegate_;
};

#endif
