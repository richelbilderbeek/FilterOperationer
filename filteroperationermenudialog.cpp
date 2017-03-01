#include "filteroperationermenudialog.h"

#include <cassert>
#include <iostream>

int ribi::FilterOperationerMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 0;
  }
  assert(!"TODO");
  return 1;
}

ribi::About ribi::FilterOperationerMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "FilterOperationer",
    "tool to perform image filter operations",
    "on the 29th of November 2013",
    "2008-2015",
    "http://www.richelbilderbeek.nl/ToolFilterOperationer.htm",
    GetVersion(),
    GetVersionHistory());
  a.AddLibrary("Test image from http://sipi.usc.edu");

  return a;
}

ribi::Help ribi::FilterOperationerMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {

    },
    {

    }
  );
}

std::string ribi::FilterOperationerMenuDialog::GetVersion() const noexcept
{
  return "3.0";
}

std::vector<std::string> ribi::FilterOperationerMenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2008-xx-17: version 1.0: initial Windows-only version",
    "2013-11-29: version 2.0: port to Qt",
    "2013-12-19: version 2.1: allowed saving of images in desktop version",
    "2016-01-10: version 3.0: moved to own GitHub",
  };
}
