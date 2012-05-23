//
//  RdySceneModel.h
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#ifndef MVCprototype_RdySceneModel_h
#define MVCprototype_RdySceneModel_h

#include "RdySceneModelDelegate.h"
#include "GlobalDef.h"

class RdySceneViewDelegate;

class RdySceneModel : public CCObject
{
public:
  static RdySceneModel* model();
  void init(RdySceneModelDelegate* pDelegate);
  void update();
  void cleanUp();
  
private:
  RdySceneModelDelegate* ObserverDelegate_;
};

#endif
