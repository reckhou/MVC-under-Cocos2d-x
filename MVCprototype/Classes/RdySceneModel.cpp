//
//  RdySceneModel.cpp
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#include "RdySceneModel.h"
#include "RdySceneView.h"

RdySceneModel* RdySceneModel::model()
{
  RdySceneModel* pModel = new RdySceneModel();
  pModel->autorelease();
  pModel->retain();
  
  return pModel;
}

void RdySceneModel::init(RdySceneModelDelegate* pDelegate)
{
  ObserverDelegate_ = pDelegate;
}

void RdySceneModel::update()
{
//  CCLog("Model ref count: %d", retainCount());
  ObserverDelegate_->testModelDelegate();
}

void RdySceneModel::cleanUp()
{
  
}
