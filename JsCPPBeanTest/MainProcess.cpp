#include "MainProcess.h"

#include <stdio.h>

JSCPPBEAN_BEAN_BEGIN(MainProcess)
JSCPPBEAN_BEAN_AUTOWIRED(MainProcess, ChildService, m_child)
JSCPPBEAN_BEAN_AUTOWIRED(MainProcess, ParentService, m_parent)
JSCPPBEAN_BEAN_END()

class TestClass {
public:
	int b;
};

void MainProcess::run()
{
	printf("[MainProcess] TestClass : %s / %d\n", typeid(TestClass).name(), typeid(TestClass).hash_code());

	printf("ChildProcess[MainProcess] : %s\n", typeid(ChildService).raw_name());
	printf("ChildProcess[MainProcess] : %s\n", typeid(ChildService).name());
	printf("ChildProcess[MainProcess] : %d\n", typeid(ChildService).hash_code());

	printf("MainProcess::run\n");
}
