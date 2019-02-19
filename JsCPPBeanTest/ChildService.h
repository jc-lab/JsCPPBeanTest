#pragma once

#include <JsCPPBean\Bean.h>

class ParentService;
class ChildService : public JsCPPBean::BeanInitializer
{
	JSCPPBEAN_OBJECT_DECL();

private:
	ParentService *m_parent;

public:
	ChildService();
	~ChildService();

	void jcbPostConstruct() override;
	void jcbPreDestroy() override;
};

