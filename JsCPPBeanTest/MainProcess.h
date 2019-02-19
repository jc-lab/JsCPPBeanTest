#pragma once

#include <JsCPPBean\Bean.h>

class ParentService;
class ChildService;

class MainProcess {
	JSCPPBEAN_OBJECT_DECL();

private:
	ParentService *m_parent;
	ChildService *m_child;

public:
	void run();
};
