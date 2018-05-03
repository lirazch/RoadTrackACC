# RoadTrackACC

using libraries:
  * SKlearn, extensively
  * detect_peaks
  
## 3.5 models (models/x.cpp)
* feature list: ['Vertical(mean)', 'Radial(mean)', 'Forward(mean)', 'Speed', 'Vertical_std', 'Radial_std', 'Forward_std', 'Speed_std', 'Vertical_max', 'Radial_max', 'Forward_max', 'Speed_max', 'Vertical_min', 'Radial_min', 'Forward_min', 'Speed_min']
* class list: 0 - standstill, 1 - zigzag, 2- dirty road
* model (predict function) is fed with list of the above feutures, calculated every second, Vertical acceleration is added with 240 units.
