# RoadTrackACC

using libraries:
  * SKlearn, extensively
  * Detect_peaks

## 12.6 models (models/x.cpp)
1. Driving model
* Used: ignition = on
2. Bumper model
3. Slight Towing model


## Data
1. Data Files - in google drive, excel format
2. Annotation File
3. Log file - for organized load of data
4. categories: 0 - driving, 1 - stand-still, 2- zigzag, 3 - dirt road, 4 - bumper, 5 - hard stop, 6 - tow 
## Notebooks
1. Main notebook - experiments
2. NewAnnotationFormat
3. New...1
4. Towing
## Deploy/convert
* use library *sklearn_porter*
## General 
* feature list: ['Vertical(mean)', 'Radial(mean)', 'Forward(mean)', 'Speed', 'Vertical_std', 'Radial_std', 'Forward_std', 'Speed_std', 'Vertical_max', 'Radial_max', 'Forward_max', 'Speed_max', 'Vertical_min', 'Radial_min', 'Forward_min', 'Speed_min']
* class list: 0 - standstill, 1 - zigzag, 2- dirty road
* model (predict function) is fed with list of the above feutures, calculated every second, Vertical acceleration is added with 240 units.
