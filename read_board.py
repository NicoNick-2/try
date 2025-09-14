import xml.etree.ElementTree as ET

with open("board_file.txt") as infile, open("taxi.txt", "w") as taxifile, open("bus.txt", "w") as busfile, open("metro.txt", "w") as metrofile, open("boat.txt", "w") as boatfile:
    content = infile.read()
    
    root = ET.fromstring(content)
    print(root)

    for position in root.findall("boardPosition"):
        id = position.attrib["id"]
        for action in position.findall("action"):
            destination = int(action.find("destination").text)
            transport = action.find("transportation").text

            if transport == "taxi":
                print(id, destination, file=taxifile)
            elif transport == "bus":
                print(id, destination, file=busfile)
            elif transport == "underground":
                print(id, destination, file=metrofile)
            elif transport == "boat":
                print(id, destination, file=boatfile)

