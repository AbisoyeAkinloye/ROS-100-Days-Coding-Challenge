# Launch file to locate URDF

## How To

- Goto the `setup.py` file in the package directory
- Add `glob` and `os` module
  ```py
  from glob import glob
  import os
  ```
- In the `setup()` add the following
  ```py
  data_files = [
    (os.path.join('share', package_name, 'urdf'), glob("urdf/*")),
    (os.path.join('share', package_name, 'meshes'), glob("meshes/*"))
  ]

- make sure you have folder named `urdf` and `meshes` in the package folder.