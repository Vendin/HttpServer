#ifndef HTTPSERVER_UTILS_H
#define HTTPSERVER_UTILS_H

#pragma once

#include <vector>
#include <string>
#include <memory>

std::vector<std::shared_ptr<std::string>> SplitString(unsigned char *, size_t length);
std::string GetMimeType(std::string fileName);
std::string UriDecode(const std::string & sSrc);
bool IsDirectoryOutOfRoot(std::string &fileName);


#endif //HTTPSERVER_UTILS_H
