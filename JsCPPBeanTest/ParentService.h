#pragma once

#include <JsCPPBean/Bean.h>

class ChildService;

class ParentService
{
	JSCPPBEAN_OBJECT_DECL();

public:
	ChildService *m_child;

	ParentService();
	~ParentService();
};

