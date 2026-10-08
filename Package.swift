// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "kmastodon",
    platforms: [
        .iOS(.v15),
.macOS(.v12.0)
    ],
    products: [
        .library(
            name: "kmastodon",
            targets: ["kmastodon"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "kmastodon",
            path: "./kmastodon.xcframework"
        ),
    ]
)
