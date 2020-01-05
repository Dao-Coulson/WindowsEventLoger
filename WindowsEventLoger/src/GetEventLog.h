#pragma once
#include <windows.h>
#include <string>
#include <winevt.h>
//�ο����ӣ�https://docs.microsoft.com/zh-cn/windows/win32/wes/using-windows-event-log

class GetEventLog
{
public:
	//ö������ָ������־(XML �ַ�����Ϊɸѡ��)
	void GetSpecifyEvents(const std::wstring& event_channel = L"");
	// Enumerate all the events in the result set.
	DWORD PrintResults(EVT_HANDLE hResults);

private:
	//��ӡԭʼXML��ʽ���¼���Ϣ
	DWORD PrintEvent(EVT_HANDLE hEvent);
	DWORD PrintEventValues(EVT_HANDLE hEvent);
	void GetCreationTime(LPWSTR creationTime, DWORD creationTimeSize, DWORD serialNumber, PEVT_VARIANT valArray, DWORD sysPropertyCount);

};

