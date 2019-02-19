#include <stdio.h>

#include <JsCPPBean/BeanFactory.h>

#include "MainProcess.h"

class TestClass {
public:
	int a;
	int b;
};

int main() {
	MainProcess *mainProcess;
	JsCPPBean::BeanFactory *beanFactory = JsCPPBean::BeanFactory::getInstance();
	beanFactory->start();

	printf("[main] TestClass : %s / %d\n", typeid(TestClass).name(), typeid(TestClass).hash_code());

	mainProcess = beanFactory->autowire<MainProcess>();
	mainProcess->run();

	return 0;
}
