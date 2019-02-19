#include "ChildService.h"

JSCPPBEAN_BEAN_BEGIN(ChildService)
JSCPPBEAN_BEAN_AUTOWIRED(ChildService, ParentService, m_parent, "parentService") // Named bean
JSCPPBEAN_BEAN_END()

ChildService::ChildService()
{
}

ChildService::~ChildService()
{
}

void ChildService::jcbPostConstruct()
{
	printf("ChildService::jcbPostConstruct\n");
	printf("m_parent : %p\n", m_parent);
}

void ChildService::jcbPreDestroy()
{
	printf("ChildService::jcbPreDestroy\n");
	printf("m_parent : %p\n", m_parent);
}
