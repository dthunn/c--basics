FROM ubuntu:24.04 AS build

RUN apt-get update && apt-get install -y \
    build-essential cmake git curl zip unzip tar pkg-config \
    && rm -rf /var/lib/apt/lists/*

# Install vcpkg
RUN git clone https://github.com/microsoft/vcpkg.git /vcpkg \
    && /vcpkg/bootstrap-vcpkg.sh
ENV VCPKG_ROOT=/vcpkg

# Copy project files
WORKDIR /app
COPY vcpkg.json CMakeLists.txt main.cpp ./

# Build
RUN cmake -B build -DCMAKE_TOOLCHAIN_FILE=$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake \
    && cmake --build build

# Runtime stage (smaller final image)
FROM ubuntu:24.04
COPY --from=build /app/build/basics /usr/local/bin/basics
CMD ["basics"]
