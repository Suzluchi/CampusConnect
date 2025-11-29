# CampusConnect

## Overview
CampusConnect is a C++ console application designed to manage students, courses, and course registrations in an educational environment. The application allows users to add new students and courses, register students for courses, display registered courses for a student, and save/load data from files.

## Folder Structure
The project is organized into the following folders:

- **core/**: Contains core classes such as `Student`, `Course`, and `Registration`.
- **services/**: Contains management classes that handle student lists, course lists, and verifying registrations.
- **io/**: Handles file input/output and any output formatting.
- **app/**: Contains the main application logic and user interaction.
- **utils/**: Contains helper functions such as string utilities and ID generators.

## Features
- Add new students and courses.
- Register students for courses.
- Display all courses a given student is registered for.
- Save all data to files and load the data back when the program starts.
- Graceful handling of invalid input.

## Compilation
To compile the project, use the provided Makefile. Run the following command in the terminal:

```
make
```

## Usage
After compiling, run the executable to start the application. Follow the on-screen prompts to interact with the system.

## Contributing
Contributions to the CampusConnect project are welcome. Please feel free to submit issues or pull requests.

## License
This project is open-source and available under the MIT License.