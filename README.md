# Build my world
A first project from Udacity Robotics Nanodegree. 
Main tasks:
* Build single floor structure in Gazebo
* Model simple robot (with joints)
* Import a least one model from Gazebo Online Library
* **Write C++ plugin** to display "Welcome to my World" message

## How to use
* Get and compile the code
```sh
mkdir path_to_project
cd path_to_project
git init
git remote add origin url_of_thi_project
git pull
git checkout master
mkdir build
cd build/
cmake ../
make
export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:`pwd`
```
* Run the code:
```sh
cd path_to_project/build
gazebo my_world
```
## License
The contents of this repository are covered under the [MIT License](./LICENSE.txt)
