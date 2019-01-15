// dllmain.h : Declaration of module class.

class CCalculatorServerModule : public ATL::CAtlDllModuleT< CCalculatorServerModule >
{
public :
	DECLARE_LIBID(LIBID_CalculatorServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CALCULATORSERVER, "{f4029868-444b-4881-88ad-4219580ac157}")
};

extern class CCalculatorServerModule _AtlModule;
