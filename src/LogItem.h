#pragma once

#include <string>
#include "datetime.h"

enum LogLevel { LOG_LEVEL_ERR, LOG_LEVEL_WARN, LOG_LEVEL_INFO };

class LogItem
{
public:
	LogItem();
	LogItem(const wchar_t* text, LogLevel level, const wchar_t* source);
	LogItem(std::wstring& text, LogLevel level, std::wstring& source);
	virtual ~LogItem();

	std::wstring GetText() const;
	const wchar_t* GetCText() const;
	DateTime GetTime() const;
	LogLevel GetLogLevel() const;
	std::wstring GetSource() const;
	const wchar_t* GetCSource() const;

protected:
	std::wstring text;
	std::wstring source;
	DateTime time;
	LogLevel level;
};
