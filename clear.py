from pathlib import Path

directory =[r"EASY",
            r"HARD",
            r"MEDIUM",
            r"LEARNING",
            r"SLIGHTLY ABOVE MEDIUM",
            r"Miscaleneous"
]

keep_extensions = {".cpp", ".obj", ".py"}

for element in directory:
    for file_path in Path(element).iterdir():
        if file_path.is_file():
            if file_path.suffix not in keep_extensions:
                print(f"Deleting: {file_path}")
                file_path.unlink()