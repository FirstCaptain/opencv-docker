docker run -it --rm -e DISPLAY=$DISPLAY \
   -v /tmp/.X11-unix:/tmp/.X11-unix \
   --network=host --volume=/data/vision/app:/app --user=$(id -u $USER) --workdir=/app opencv /bin/bash
