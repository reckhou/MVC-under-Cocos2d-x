//
//  RdySceneController.h
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#ifndef MVCprototype_RdySceneController_h
#define MVCprototype_RdySceneController_h

#include "RdySceneView.h"
#include "RdySceneModel.h"
#include "RdySceneViewDelegate.h"

using namespace cocos2d;

// Have to inherit CCScene here because of C++'s lack of type (id)
class RdySceneController : public CCScene, public RdySceneViewDelegate
{
private:
  virtual bool init();
  void update();
  ~RdySceneController();
  
private:
  // need to save "view" & "model"'s object pointer here 'cause the "controller" is the entry point.
  RdySceneView* RdySceneView_;
  RdySceneModel* RdySceneModel_;

public:
  // implement delegate method here, treat "view" as its observer.
  virtual void testViewDelegate(); 
  SCENE_NODE_FUNC(RdySceneController);
  
};


#endif
