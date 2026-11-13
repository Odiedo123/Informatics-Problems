from pathlib import Path

parent_folder = Path(__file__).resolve().parent.parent

keep_extensions = {".cpp", ".obj", ".py"}

for file_path in parent_folder.rglob("*"):
    if file_path.is_file():
        if file_path.resolve() == Path(__file__).resolve():
            continue
            
        if file_path.suffix.lower() not in keep_extensions:
            print(f"Deleting: {file_path}")
            file_path.unlink()
