import json

with open("patches.json", "r") as f:
    patch_json = json.loads(f.read())


with open(patch_json["input_file"], "rb") as f:
    b = bytearray(f.read())

for x in patch_json["patches"]:
    for idx, item in enumerate(x["patches"]):
        if x["enabled"]:
            print(f"{x['name']} Patched")
            b[int(x["offset"], 16) + idx] = int(item, 16)

with open("libcocos2dcpp.so", "wb") as f:
    f.write(b)
