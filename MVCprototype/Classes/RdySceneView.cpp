//
//  RdySceneView.cpp
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#include <iostream>
#include "RdySceneView.h"

bool RdySceneView::init(RdySceneViewDelegate* pDelegate, RdySceneModel* pModel)
{
  if ( !CCLayer::init() )
	{
		return false;
	}
  
  CCSize winSize = CCDirector::sharedDirector()->getWinSize();
  CCSprite* pSprite = CCSprite::spriteWithFile("Icon-72.png");
  pSprite->setPosition(ccp(winSize.width/2, winSize.height/2));
  addChild(pSprite);
  
  ObserverDelegate_ = pDelegate;
  
  pModel->init(this);

  return true;
}

void RdySceneView::testModelDelegate()
{
  CCLog("TestModelDelegate!!");
}

void RdySceneView::update()
{
//  CCLog("View ref count: %d", retainCount());
  ObserverDelegate_->testViewDelegate();
}
