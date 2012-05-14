//
//  RdySceneController.cpp
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#include <iostream>
#include "RdySceneController.h"
#include "RdySceneModel.h"

static int gCount = 0; // used for mem leak test

bool RdySceneController::init()
{
  RdySceneModel_ = RdySceneModel::model();
  RdySceneView_ = RdySceneView::node(this, RdySceneModel_);
  addChild(RdySceneView_);
  
  schedule(schedule_selector(RdySceneController::update));
  
  return true;
}

RdySceneController::~RdySceneController()
{
  RdySceneModel_->cleanUp();
  RdySceneModel_->release();
}

void RdySceneController::testViewDelegate()
{
  CCLog("testViewDelegate!!!");
}

void RdySceneController::update()
{
//  CCLog("Ctrler ref count: %d", retainCount());
  RdySceneModel_->update();
  RdySceneView_->update();
  
  // mem leak test
  gCount++;
  if (gCount == 100)
  {
    gCount = 0;
    CCLog("replace!");
    CCDirector::sharedDirector()->replaceScene(RdySceneController::node());
  }
}

