#pragma once

#include <fakeit_instance.hpp>
#include <fakeit/UsingFunctor.hpp>
#include <fakeit/VerifyFunctor.hpp>
#include <fakeit/VerifyNoOtherInvocationsFunctor.hpp>
#include <fakeit/SpyFunctor.hpp>
#include <fakeit/FakeFunctor.hpp>
#include <fakeit/WhenFunctor.hpp>

namespace fakeit {

	static UsingFunctor Using(Fakeit);
	static VerifyFunctor Verify(Fakeit);
	static VerifyNoOtherInvocationsFunctor VerifyNoOtherInvocations(Fakeit);
	static SpyFunctor Spy;
	static FakeFunctor Fake;
	static WhenFunctor When;

	template<class T>
	class SilenceUnusedVariableWarnings {

		void use(void *) {
		}

		SilenceUnusedVariableWarnings() {
			use(&Fake);
			use(&When);
			use(&Spy);
			use(&Using);
			use(&Verify);
			use(&VerifyNoOtherInvocations);
			use(&_);
		}
	};

}
