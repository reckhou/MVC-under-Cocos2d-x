//
//  RdySceneView.h
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#ifndef MVCprototype_RdySceneView_h
#define MVCprototype_RdySceneView_h

#include "RdySceneModel.h"
#include "RdySceneViewDelegate.h"
#include "RdySceneModelDelegate.h"
#include "GlobalDef.h"

// Have to inherit CCLayer here because of C++'s lack of type (id)
class RdySceneView : public CCLayer, public RdySceneModelDelegate
{
  
public:
	LAYER_NODE_FUNC_DOUBLE_PARAM(RdySceneView, RdySceneViewDelegate*, pDelegate,
                               RdySceneModel*, pModel);
  
  VIEW_FUNC_ONEXIT;
  
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
