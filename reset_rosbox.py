import os
from pathlib import Path
import docker

def main():
    image_name = "rosbox"
    container_name = "roscontainer"
    dclient = docker.from_env()
    cwd = Path.cwd().absolute()
    dclient.images.build(path=(cwd / "docker").absolute().__str__(), tag=image_name, pull=True)
    try:
        dclient.containers.get(container_name).remove(force=True)
    except docker.errors.NotFound:
        pass
    dclient.containers.run(image=image_name,
                           detach=True,
                           name=container_name,
                           volumes=[
                               "/tmp/.X11-unix:/tmp/.X11-unix",
                                f"{str(cwd)}/workspace:/home/rosuser/workspace"
                           ],
                           environment={"DISPLAY": os.environ.get("DISPLAY")},
                           )


if __name__ == "__main__":
    main()