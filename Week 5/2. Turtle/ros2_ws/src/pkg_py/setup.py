from setuptools import setup

package_name = 'pkg_py'

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
            "eds=pkg_py.euclidean_distance_server:main",
            "edc=pkg_py.euclidean_distance_client:main"
        ],
    },
)
