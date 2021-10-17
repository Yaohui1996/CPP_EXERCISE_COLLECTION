#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    vector<filesystem::path> to_create_dir;
    map<string, int> mapping{{"02", 42}, {"03", 45}, {"04", 38}, {"05", 25},
                             {"06", 56}, {"07", 58}, {"08", 14}, {"09", 22},
                             {"12", 1},  {"13", 4}};
    for (auto it = mapping.begin(); it != mapping.end(); ++it) {
        // 在上级CMakeLists.txt文件中写入子项目
        stringstream oss_0;
        oss_0 << "project(Chapter-" << it->first << ")\n";

        for (int j = 1; j <= it->second; ++j) {
            string i_str = it->first;
            string j_str;
            if (j < 10) {
                j_str = "0" + to_string(j);
            } else {
                j_str = to_string(j);
            }
            string path_str =
                "../Chapter-" + i_str + "/" + i_str + "-" + j_str + "/";
            filesystem::path file_path_str = path_str;
            if (!filesystem::exists(path_str)) {
                filesystem::create_directories(file_path_str);
            }

            // 复制源文件
            filesystem::path src = "../_" + i_str + "_" + j_str + ".cpp";
            filesystem::path dest = path_str + i_str + "-" + j_str + ".cpp";
            if (filesystem::exists(dest)) {
                filesystem::remove(dest);
            }
            filesystem::copy_file(src, dest);

            // 写CMakeLists.txt文件
            stringstream oss;
            oss << "project(" << i_str << "-" << j_str << ")\n";
            oss << "add_executable(" << i_str << "-" << j_str << " " << i_str
                << "-" << j_str << ".cpp)\n";

            fstream cmake_file;
            cmake_file.open(path_str + "CMakeLists.txt", ios::out);
            cmake_file << oss.str();
            cmake_file.close();
            // 写入上级目录
            oss_0 << "add_subdirectory(" + i_str + "-" + j_str + ")\n";
        }

        fstream cmake_file_0;
        cmake_file_0.open("../Chapter-" + it->first + "/CMakeLists.txt",
                          ios::out);
        cmake_file_0 << oss_0.str();
        cmake_file_0.close();
    }

    return 0;
}
// project(Chapter-1)

// add_subdirectory(1-1)
// add_subdirectory(1-2)
// add_subdirectory(1-3)
// add_subdirectory(1-4)
// add_subdirectory(1-5)
// add_subdirectory(1-6)
// add_subdirectory(1-7)
// add_subdirectory(1-8)
// add_subdirectory(1-9)
// add_subdirectory(1-10)
// add_subdirectory(1-11)
// add_subdirectory(1-12)
// add_subdirectory(1-13)
// add_subdirectory(1-14)
// add_subdirectory(1-15)
// add_subdirectory(1-16)
// add_subdirectory(1-17)
// add_subdirectory(1-18)
// add_subdirectory(1-19)
// add_subdirectory(1-20)
// add_subdirectory(1-21)
// add_subdirectory(1-22)
// add_subdirectory(1-23)
// add_subdirectory(1-24)
// add_subdirectory(1-25)