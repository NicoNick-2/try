# CODE JOURNEY
In this file I explain what I did in order to finish this project.

<br>

## Set up board

### Retrieve data
The first step in building this project was to gather the game board data for Scotland Yard. The only available source I found was an XML file, but since it was compatible with my version of the game, it served as a solid foundation.

### Format data
The raw XML format wasn't ideal for my needs, so I wrote a Python script to parse and reorganize the data. The script automatically extracts and splits the information into separate files based on transportation types — taxis, buses, undergrounds, and ferries — making it easier to work with later in the project.
