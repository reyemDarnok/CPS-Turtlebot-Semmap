from setuptools import find_packages, setup

package_name = 'semmap'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rosuser',
    maintainer_email='rosuser@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'emergency_stop = semmap.emergency_stop:main',
            'logs = semmap.logs:main',
            'object_detection = semmap.object_detection:main',
            'pathfinding = semmap.pathfinding:main',
            'position_history = semmap.position_history:main',
            'semantic_map = semmap.semantic_map:main',
            'pathfinder_direct = semmap.pathfinding_direct:main',

        ],
    },
)
