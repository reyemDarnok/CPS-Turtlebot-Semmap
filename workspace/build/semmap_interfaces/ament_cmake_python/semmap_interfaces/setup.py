from setuptools import find_packages
from setuptools import setup

setup(
    name='semmap_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('semmap_interfaces', 'semmap_interfaces.*')),
)
