from setuptools import setup

package_name = 'motion_types_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='loye',
    maintainer_email='abisoyeakinloye@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "linear=motion_types_py.linear:main",
            "rotation=motion_types_py.rotation:main",
            "spiral=motion_types_py.spiral:main",
            "goto_goal=motion_types_py.go_to_goal:main"
        ],
    },
)
