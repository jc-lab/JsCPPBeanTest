#include "ParentService.h"

JSCPPBEAN_BEAN_BEGIN(ParentService, "parentService") // Named Bean
JSCPPBEAN_BEAN_AUTOWIRED_LAZY(ParentService, ChildService, m_child) // Avoid circular dependency
JSCPPBEAN_BEAN_END()

ParentService::ParentService()
{
}


ParentService::~ParentService()
{
}
