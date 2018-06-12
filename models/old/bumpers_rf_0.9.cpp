#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[2];
    
    if (features[5] <= 10.2609224319458) {
        if (features[2] <= -3.555555582046509) {
            if (features[0] <= -0.24444445967674255) {
                if (features[6] <= 13.839058876037598) {
                    classes[0] = 29; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[7] <= 0.9712646007537842) {
                    if (features[4] <= 3.760058879852295) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[15] <= 63.5) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            if (features[1] <= -4.800000190734863) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[0] <= 5.44444465637207) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        } else {
            if (features[8] <= 84.0) {
                if (features[7] <= 0.23791547119617462) {
                    if (features[1] <= -1.4666666984558105) {
                        if (features[6] <= 6.913321018218994) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[3] <= 2.5) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 23; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 53; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[7] <= 2.1506223678588867) {
            if (features[2] <= 21.929824829101562) {
                if (features[8] <= 54.0) {
                    if (features[8] <= 30.0) {
                        if (features[14] <= -42.0) {
                            if (features[6] <= 5.056036949157715) {
                                if (features[12] <= -18.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            }
                        } else {
                            if (features[15] <= 13.5) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[3] <= 5.5) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 26; 
                }
            } else {
                if (features[0] <= 4.111111164093018) {
                    classes[0] = 6; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 36; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_1(float features[]) {
    int classes[2];
    
    if (features[6] <= 9.517576217651367) {
        if (features[1] <= -1.5777778625488281) {
            if (features[15] <= 1.0) {
                if (features[13] <= -36.0) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[4] <= 1.9968823194503784) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                }
            } else {
                if (features[1] <= -3.0222222805023193) {
                    if (features[6] <= 6.895750045776367) {
                        classes[0] = 17; 
                        classes[1] = 0; 
                    } else {
                        if (features[8] <= 30.0) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[2] <= -31.066665649414062) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            if (features[5] <= 17.985307693481445) {
                if (features[2] <= -38.622222900390625) {
                    if (features[1] <= 7.318840980529785) {
                        if (features[0] <= -0.20000004768371582) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    } else {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[11] <= 62.0) {
                        if (features[15] <= 0.5) {
                            if (features[13] <= -18.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 13; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 47; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[9] <= 18.0) {
                            if (features[12] <= -30.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        }
    } else {
        if (features[7] <= 1.542572021484375) {
            if (features[12] <= -78.0) {
                classes[0] = 0; 
                classes[1] = 18; 
            } else {
                if (features[0] <= 1.3333333730697632) {
                    if (features[10] <= 30.0) {
                        if (features[12] <= -6.0) {
                            if (features[7] <= 0.7477811574935913) {
                                if (features[8] <= 42.0) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[15] <= 2.5) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[11] <= 66.5) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[14] <= 18.0) {
                classes[0] = 0; 
                classes[1] = 51; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_2(float features[]) {
    int classes[2];
    
    if (features[13] <= -30.0) {
        if (features[1] <= -13.333333969116211) {
            if (features[4] <= 15.2189302444458) {
                if (features[11] <= 3.0) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    if (features[8] <= 18.0) {
                        if (features[14] <= -6.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[9] <= 6.0) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 7; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 9; 
            }
        } else {
            if (features[6] <= 15.669052124023438) {
                if (features[5] <= 21.93796157836914) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[6] <= 11.294486999511719) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 30; 
            }
        }
    } else {
        if (features[4] <= 22.94793701171875) {
            if (features[9] <= 42.0) {
                if (features[6] <= 18.880638122558594) {
                    if (features[13] <= -18.0) {
                        if (features[3] <= 2.6666667461395264) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            if (features[5] <= 7.63240909576416) {
                                classes[0] = 18; 
                                classes[1] = 0; 
                            } else {
                                if (features[1] <= 0.0) {
                                    if (features[10] <= -12.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[12] <= -18.0) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[2] <= -48.82221984863281) {
                            if (features[7] <= 0.757042407989502) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[5] <= 8.089099884033203) {
                                classes[0] = 77; 
                                classes[1] = 0; 
                            } else {
                                if (features[11] <= 35.5) {
                                    if (features[0] <= -0.40000009536743164) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[14] <= -12.0) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[5] <= 15.277511596679688) {
                    if (features[11] <= 14.5) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 12; 
                }
            }
        } else {
            if (features[2] <= 5.3333330154418945) {
                classes[0] = 0; 
                classes[1] = 19; 
            } else {
                if (features[5] <= 10.445268630981445) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_3(float features[]) {
    int classes[2];
    
    if (features[5] <= 11.579689025878906) {
        if (features[4] <= 25.044300079345703) {
            if (features[1] <= -0.35555556416511536) {
                if (features[11] <= 0.5) {
                    if (features[0] <= 0.1111111119389534) {
                        if (features[10] <= 36.0) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 10; 
                    }
                } else {
                    if (features[2] <= 11.733333587646484) {
                        if (features[10] <= -30.0) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[4] <= 10.91057014465332) {
                                if (features[4] <= 8.289457321166992) {
                                    if (features[15] <= 28.5) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                }
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[5] <= 8.045951843261719) {
                            classes[0] = 21; 
                            classes[1] = 0; 
                        } else {
                            if (features[7] <= 3.0003857612609863) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                }
            } else {
                if (features[14] <= -30.0) {
                    if (features[1] <= 8.11111068725586) {
                        if (features[12] <= -18.0) {
                            if (features[10] <= -18.0) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        if (features[12] <= -18.0) {
                            classes[0] = 16; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[11] <= 0.5) {
                        if (features[2] <= 22.133333206176758) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 51; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 5; 
        }
    } else {
        if (features[10] <= -30.0) {
            classes[0] = 1; 
            classes[1] = 0; 
        } else {
            if (features[1] <= 30.289308547973633) {
                if (features[14] <= 18.0) {
                    if (features[9] <= 18.0) {
                        if (features[6] <= 12.666183471679688) {
                            if (features[7] <= 0.9516618847846985) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        if (features[2] <= 21.663158416748047) {
                            classes[0] = 0; 
                            classes[1] = 66; 
                        } else {
                            if (features[13] <= -108.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_4(float features[]) {
    int classes[2];
    
    if (features[4] <= 23.04978370666504) {
        if (features[5] <= 16.431604385375977) {
            if (features[2] <= 14.266666412353516) {
                if (features[0] <= -3.3333334922790527) {
                    if (features[4] <= 15.761472702026367) {
                        classes[0] = 38; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[6] <= 15.285930633544922) {
                        if (features[2] <= 10.399999618530273) {
                            if (features[10] <= -30.0) {
                                if (features[2] <= -53.666664123535156) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            } else {
                                if (features[1] <= -0.1111111119389534) {
                                    if (features[7] <= 0.24771684408187866) {
                                        if (features[0] <= 0.1111111119389534) {
                                            classes[0] = 4; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 6; 
                                        }
                                    } else {
                                        if (features[7] <= 1.9435930252075195) {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[11] <= 0.5) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[4] <= 16.776273727416992) {
                                            classes[0] = 26; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    }
                }
            } else {
                if (features[13] <= -18.0) {
                    if (features[15] <= 1.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[3] <= 12.25) {
                            if (features[4] <= 6.33200740814209) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 43; 
                    classes[1] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 12; 
        }
    } else {
        if (features[10] <= 54.0) {
            classes[0] = 0; 
            classes[1] = 44; 
        } else {
            if (features[12] <= -96.0) {
                classes[0] = 0; 
                classes[1] = 7; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_5(float features[]) {
    int classes[2];
    
    if (features[7] <= 2.5200083255767822) {
        if (features[13] <= -18.0) {
            if (features[12] <= -54.0) {
                if (features[9] <= 54.0) {
                    classes[0] = 0; 
                    classes[1] = 27; 
                } else {
                    if (features[5] <= 24.883638381958008) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[7] <= 0.2518726885318756) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[7] <= 0.7281783819198608) {
                    if (features[12] <= -30.0) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 6.0) {
                            if (features[1] <= -11.022222518920898) {
                                if (features[15] <= 1.0) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 18; 
                        }
                    }
                } else {
                    if (features[9] <= 30.0) {
                        if (features[0] <= 5.0) {
                            classes[0] = 25; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 29.064815521240234) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[6] <= 13.238336563110352) {
                if (features[3] <= 62.75) {
                    if (features[15] <= 6.5) {
                        if (features[6] <= 6.637857913970947) {
                            classes[0] = 25; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        if (features[3] <= 58.5) {
                            classes[0] = 53; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 60.25) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[14] <= -6.0) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
            }
        }
    } else {
        if (features[3] <= 15.0) {
            if (features[7] <= 3.8752570152282715) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        } else {
            if (features[8] <= 6.0) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 47; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_6(float features[]) {
    int classes[2];
    
    if (features[14] <= -66.0) {
        if (features[13] <= 12.0) {
            classes[0] = 0; 
            classes[1] = 32; 
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    } else {
        if (features[8] <= 54.0) {
            if (features[11] <= 65.5) {
                if (features[5] <= 7.619655609130859) {
                    if (features[3] <= 0.25) {
                        if (features[6] <= 6.522713661193848) {
                            if (features[0] <= 1.1111111640930176) {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[4] <= 4.419110298156738) {
                            if (features[1] <= 0.0) {
                                if (features[14] <= -24.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 15; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 47; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[11] <= 15.5) {
                        if (features[11] <= 3.0) {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        } else {
                            if (features[2] <= 24.77777862548828) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[5] <= 18.10232925415039) {
                            if (features[1] <= 3.3333334922790527) {
                                if (features[0] <= 2.5333333015441895) {
                                    if (features[1] <= 2.222222328186035) {
                                        if (features[5] <= 8.18954086303711) {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            } else {
                                classes[0] = 24; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                }
            } else {
                if (features[15] <= 71.5) {
                    if (features[15] <= 68.0) {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    } else {
                        if (features[0] <= 0.8888888955116272) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[9] <= 42.0) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        } else {
            if (features[2] <= 22.040935516357422) {
                classes[0] = 0; 
                classes[1] = 23; 
            } else {
                if (features[1] <= -49.213623046875) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_7(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        classes[0] = 0; 
        classes[1] = 67; 
    } else {
        if (features[14] <= -30.0) {
            if (features[0] <= -7.1666669845581055) {
                classes[0] = 19; 
                classes[1] = 0; 
            } else {
                if (features[3] <= 18.54347801208496) {
                    if (features[5] <= 7.0277605056762695) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 16; 
                    }
                } else {
                    if (features[11] <= 65.0) {
                        if (features[6] <= 19.359649658203125) {
                            if (features[15] <= 12.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[9] <= 30.0) {
                                    if (features[0] <= 4.244444370269775) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    }
                }
            }
        } else {
            if (features[4] <= 25.044300079345703) {
                if (features[14] <= 6.0) {
                    if (features[9] <= 30.0) {
                        if (features[2] <= -0.24444445967674255) {
                            if (features[15] <= 47.5) {
                                if (features[9] <= -12.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[0] <= 1.7333333492279053) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                if (features[15] <= 63.5) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 31; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[3] <= 30.399999618530273) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 51; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_8(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        classes[0] = 0; 
        classes[1] = 62; 
    } else {
        if (features[5] <= 10.207597732543945) {
            if (features[11] <= 0.5) {
                if (features[9] <= -12.0) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[0] <= 0.35555556416511536) {
                        if (features[4] <= 6.42152214050293) {
                            classes[0] = 15; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                }
            } else {
                if (features[10] <= -18.0) {
                    if (features[5] <= 8.044594764709473) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                } else {
                    if (features[6] <= 22.815853118896484) {
                        if (features[3] <= 37.333335876464844) {
                            classes[0] = 58; 
                            classes[1] = 0; 
                        } else {
                            if (features[0] <= 0.24444445967674255) {
                                classes[0] = 17; 
                                classes[1] = 0; 
                            } else {
                                if (features[6] <= 6.544161319732666) {
                                    if (features[5] <= 8.772806167602539) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[12] <= -18.0) {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[8] <= 30.0) {
                                            classes[0] = 6; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[14] <= -18.0) {
                if (features[7] <= 2.4956908226013184) {
                    if (features[14] <= -42.0) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[7] <= 0.24891066551208496) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 19; 
                }
            } else {
                if (features[3] <= 5.653846263885498) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[6] <= 13.140052795410156) {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_9(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        if (features[4] <= 38.453819274902344) {
            if (features[4] <= 34.987091064453125) {
                classes[0] = 0; 
                classes[1] = 8; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 48; 
        }
    } else {
        if (features[5] <= 16.31458282470703) {
            if (features[7] <= 2.5200083255767822) {
                if (features[6] <= 15.131206512451172) {
                    if (features[15] <= 0.5) {
                        if (features[6] <= 6.758803367614746) {
                            if (features[8] <= 18.0) {
                                if (features[1] <= -22.740741729736328) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 24; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        if (features[7] <= 0.4401754140853882) {
                            if (features[1] <= -0.800000011920929) {
                                if (features[4] <= 10.953817367553711) {
                                    if (features[15] <= 35.5) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[2] <= -12.666666984558105) {
                                    if (features[2] <= -45.02222442626953) {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 13; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[8] <= 42.0) {
                                if (features[6] <= 6.732936859130859) {
                                    if (features[2] <= -48.55555725097656) {
                                        if (features[8] <= 18.0) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[11] <= 53.0) {
                                            classes[0] = 36; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    classes[0] = 36; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[0] <= 5.0) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            } else {
                if (features[2] <= -0.9444441795349121) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[7] <= 3.6553239822387695) {
                        if (features[15] <= 28.5) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[4] <= 8.350926399230957) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 14; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_10(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        if (features[13] <= -54.0) {
            if (features[10] <= 42.0) {
                classes[0] = 0; 
                classes[1] = 4; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 42; 
        }
    } else {
        if (features[7] <= 2.5200083255767822) {
            if (features[0] <= 0.18518519401550293) {
                if (features[2] <= 44.53333282470703) {
                    if (features[6] <= 16.62552833557129) {
                        if (features[5] <= 19.067916870117188) {
                            if (features[3] <= 70.0) {
                                classes[0] = 88; 
                                classes[1] = 0; 
                            } else {
                                if (features[7] <= 0.24771684408187866) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                if (features[2] <= 11.866666793823242) {
                    if (features[1] <= -1.4666666984558105) {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    } else {
                        if (features[5] <= 2.4080021381378174) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[2] <= -38.42222213745117) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[8] <= 18.0) {
                                    classes[0] = 14; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[3] <= 60.900001525878906) {
                                        if (features[11] <= 6.5) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[11] <= 5.5) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 30; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[4] <= 5.46121883392334) {
                if (features[5] <= 7.65737771987915) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 19; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_11(float features[]) {
    int classes[2];
    
    if (features[9] <= 30.0) {
        if (features[5] <= 7.510794162750244) {
            if (features[13] <= -36.0) {
                if (features[4] <= 5.272327899932861) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[4] <= 7.114285469055176) {
                    classes[0] = 52; 
                    classes[1] = 0; 
                } else {
                    if (features[1] <= -1.4434782266616821) {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    } else {
                        if (features[1] <= -0.2222222238779068) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[15] <= 11.0) {
                classes[0] = 0; 
                classes[1] = 15; 
            } else {
                if (features[2] <= 17.666667938232422) {
                    if (features[12] <= -48.0) {
                        classes[0] = 0; 
                        classes[1] = 10; 
                    } else {
                        if (features[7] <= 2.500321626663208) {
                            if (features[2] <= -35.866668701171875) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[6] <= 5.722433090209961) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[1] <= -0.24444445967674255) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[8] <= 42.0) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        }
                    }
                } else {
                    if (features[13] <= -84.0) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[1] <= -18.77777862548828) {
                            if (features[3] <= 40.333335876464844) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 26; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[7] <= 1.08258056640625) {
            if (features[12] <= -54.0) {
                if (features[0] <= 1.1111111640930176) {
                    if (features[15] <= 7.0) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
                }
            } else {
                classes[0] = 16; 
                classes[1] = 0; 
            }
        } else {
            if (features[1] <= 32.88888931274414) {
                if (features[0] <= 1.644444465637207) {
                    classes[0] = 0; 
                    classes[1] = 41; 
                } else {
                    if (features[0] <= 2.5129804611206055) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            } else {
                if (features[15] <= 9.5) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_12(float features[]) {
    int classes[2];
    
    if (features[7] <= 2.500321626663208) {
        if (features[12] <= -54.0) {
            if (features[2] <= 21.929824829101562) {
                classes[0] = 0; 
                classes[1] = 41; 
            } else {
                if (features[4] <= 48.913414001464844) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[10] <= 26.0) {
                if (features[6] <= 9.17898178100586) {
                    if (features[7] <= 0.18808870017528534) {
                        if (features[11] <= 53.5) {
                            if (features[10] <= 18.0) {
                                if (features[8] <= 18.0) {
                                    if (features[5] <= 9.576424598693848) {
                                        classes[0] = 12; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[13] <= -12.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[3] <= 53.29999923706055) {
                            classes[0] = 46; 
                            classes[1] = 0; 
                        } else {
                            if (features[0] <= 2.133333444595337) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                } else {
                    if (features[11] <= 16.5) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[11] <= 65.0) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                if (features[11] <= 0.5) {
                    if (features[10] <= 48.0) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[14] <= -18.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 58; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[5] <= 7.348470687866211) {
            if (features[4] <= 7.826312065124512) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[0] <= 1.4222222566604614) {
                classes[0] = 0; 
                classes[1] = 37; 
            } else {
                if (features[14] <= -18.0) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[12] <= -18.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_13(float features[]) {
    int classes[2];
    
    if (features[6] <= 15.669052124023438) {
        if (features[13] <= -18.0) {
            if (features[7] <= 0.18808870017528534) {
                if (features[15] <= 2.5) {
                    if (features[9] <= 6.0) {
                        if (features[13] <= -36.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 19; 
                    }
                } else {
                    if (features[6] <= 7.007017612457275) {
                        if (features[6] <= 6.005457401275635) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[7] <= 1.509397268295288) {
                    if (features[8] <= 126.0) {
                        if (features[11] <= 2.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 27; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[9] <= -36.0) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[11] <= 41.0) {
                            if (features[12] <= -18.0) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[9] <= 18.0) {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    }
                }
            }
        } else {
            if (features[11] <= 81.0) {
                if (features[10] <= 18.0) {
                    if (features[5] <= 8.062589645385742) {
                        if (features[0] <= 0.5333333611488342) {
                            classes[0] = 37; 
                            classes[1] = 0; 
                        } else {
                            if (features[4] <= 6.687231063842773) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[5] <= 5.564749717712402) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    } else {
                        if (features[15] <= 20.5) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 50; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        }
    } else {
        if (features[14] <= 0.0) {
            classes[0] = 0; 
            classes[1] = 51; 
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_14(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        classes[0] = 0; 
        classes[1] = 68; 
    } else {
        if (features[5] <= 14.163500785827637) {
            if (features[5] <= 8.095041275024414) {
                if (features[11] <= 58.5) {
                    if (features[13] <= -8.0) {
                        if (features[11] <= 1.0) {
                            if (features[1] <= -3.2666666507720947) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[2] <= -17.733333587646484) {
                                if (features[6] <= 11.749364852905273) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 27; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 47; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[15] <= 66.5) {
                        if (features[0] <= -2.777777910232544) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[4] <= 6.817312240600586) {
                    if (features[15] <= 56.0) {
                        if (features[6] <= 14.792226791381836) {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        } else {
                            if (features[3] <= 8.25) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[15] <= 8.5) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[9] <= -18.0) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[2] <= -6.133333206176758) {
                                if (features[0] <= 3.799999952316284) {
                                    classes[0] = 14; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[15] <= 44.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[9] <= 30.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 22; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[2] <= 24.799999237060547) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_15(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        if (features[3] <= 16.9632568359375) {
            if (features[2] <= 20.040935516357422) {
                classes[0] = 0; 
                classes[1] = 11; 
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 49; 
        }
    } else {
        if (features[11] <= 0.5) {
            if (features[4] <= 6.169227123260498) {
                if (features[4] <= 2.8913094997406006) {
                    classes[0] = 9; 
                    classes[1] = 0; 
                } else {
                    if (features[5] <= 6.046110153198242) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 18.0) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 15; 
            }
        } else {
            if (features[9] <= 42.0) {
                if (features[0] <= -0.49743592739105225) {
                    if (features[1] <= -0.4000000059604645) {
                        if (features[13] <= -18.0) {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        } else {
                            if (features[7] <= 0.8965191841125488) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[2] <= -0.8000001907348633) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 36; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[14] <= -42.0) {
                        if (features[4] <= 12.236506462097168) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[1] <= -0.1111111119389534) {
                            if (features[11] <= 13.5) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                if (features[11] <= 47.5) {
                                    if (features[6] <= 8.162871360778809) {
                                        if (features[7] <= 1.514084815979004) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        classes[0] = 13; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[10] <= 30.0) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        if (features[3] <= 50.833335876464844) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 39; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[5] <= 15.99951171875) {
                    if (features[2] <= -45.57777786254883) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        if (features[5] <= 11.856829643249512) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_16(float features[]) {
    int classes[2];
    
    if (features[5] <= 8.760156631469727) {
        if (features[5] <= 6.204883575439453) {
            if (features[15] <= 59.5) {
                if (features[3] <= 22.5) {
                    classes[0] = 39; 
                    classes[1] = 0; 
                } else {
                    if (features[3] <= 26.933334350585938) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[11] <= 2.0) {
                if (features[1] <= 2.0) {
                    classes[0] = 0; 
                    classes[1] = 12; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[2] <= 12.933333396911621) {
                    if (features[13] <= -6.0) {
                        if (features[1] <= -5.615686416625977) {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        } else {
                            if (features[4] <= 5.969057083129883) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[6] <= 6.878596782684326) {
                                    classes[0] = 0; 
                                    classes[1] = 12; 
                                } else {
                                    if (features[3] <= 58.625) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 34; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[6] <= 6.575568199157715) {
            if (features[1] <= 24.844444274902344) {
                classes[0] = 10; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[12] <= -78.0) {
                classes[0] = 0; 
                classes[1] = 47; 
            } else {
                if (features[0] <= -1.6666667461395264) {
                    classes[0] = 0; 
                    classes[1] = 20; 
                } else {
                    if (features[7] <= 1.982798457145691) {
                        if (features[11] <= 14.0) {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        } else {
                            if (features[14] <= -48.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 10; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[9] <= 18.0) {
                            if (features[2] <= -31.066665649414062) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_17(float features[]) {
    int classes[2];
    
    if (features[4] <= 22.94793701171875) {
        if (features[11] <= 74.5) {
            if (features[7] <= 3.4763927459716797) {
                if (features[11] <= 0.5) {
                    if (features[8] <= 6.0) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    } else {
                        if (features[5] <= 5.000402450561523) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    }
                } else {
                    if (features[10] <= 18.0) {
                        if (features[3] <= 58.0) {
                            if (features[4] <= 10.558948516845703) {
                                if (features[14] <= -42.0) {
                                    if (features[10] <= -42.0) {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                    }
                                } else {
                                    classes[0] = 18; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[0] <= 1.2000000476837158) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[0] <= 1.7124183177947998) {
                            classes[0] = 55; 
                            classes[1] = 0; 
                        } else {
                            if (features[13] <= -30.0) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[2] <= 13.200000762939453) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[4] <= 9.14984130859375) {
                    if (features[12] <= -18.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
                }
            }
        } else {
            if (features[4] <= 8.175793647766113) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 12; 
            }
        }
    } else {
        if (features[2] <= 22.040935516357422) {
            classes[0] = 0; 
            classes[1] = 62; 
        } else {
            if (features[4] <= 48.913414001464844) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_18(float features[]) {
    int classes[2];
    
    if (features[9] <= 30.0) {
        if (features[11] <= 73.5) {
            if (features[5] <= 11.676761627197266) {
                if (features[5] <= 8.080222129821777) {
                    if (features[1] <= -34.333335876464844) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[6] <= 16.861289978027344) {
                            if (features[7] <= 0.4401754140853882) {
                                if (features[4] <= 6.05809211730957) {
                                    classes[0] = 26; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[1] <= -7.121739387512207) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        if (features[12] <= -18.0) {
                                            classes[0] = 14; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 59; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[7] <= 0.23791547119617462) {
                        if (features[10] <= 42.0) {
                            if (features[2] <= -41.31111145019531) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            }
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[12] <= -18.0) {
                            if (features[6] <= 9.571395874023438) {
                                classes[0] = 17; 
                                classes[1] = 0; 
                            } else {
                                if (features[4] <= 15.058273315429688) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            if (features[1] <= -6.111111164093018) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[1] <= 5.222222328186035) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[7] <= 1.8878092765808105) {
                    if (features[1] <= -34.133331298828125) {
                        if (features[0] <= 0.5555555820465088) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                } else {
                    if (features[15] <= 23.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[5] <= 7.7245330810546875) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[1] <= -25.05555534362793) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[5] <= 9.869827270507812) {
            classes[0] = 9; 
            classes[1] = 0; 
        } else {
            if (features[4] <= 7.661288261413574) {
                if (features[15] <= 2.5) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[2] <= 21.663158416748047) {
                    if (features[15] <= 62.5) {
                        classes[0] = 0; 
                        classes[1] = 45; 
                    } else {
                        if (features[5] <= 14.646036148071289) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    }
                } else {
                    if (features[13] <= -108.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_19(float features[]) {
    int classes[2];
    
    if (features[7] <= 2.9932942390441895) {
        if (features[12] <= -54.0) {
            classes[0] = 0; 
            classes[1] = 27; 
        } else {
            if (features[10] <= 30.0) {
                if (features[6] <= 9.40328598022461) {
                    if (features[7] <= 0.18808870017528534) {
                        if (features[13] <= -18.0) {
                            if (features[6] <= 5.839968681335449) {
                                if (features[1] <= -6.244444847106934) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            }
                        } else {
                            if (features[3] <= 0.5) {
                                classes[0] = 13; 
                                classes[1] = 0; 
                            } else {
                                if (features[0] <= -3.066666841506958) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[11] <= 16.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[1] <= -0.35555556416511536) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[4] <= 18.22101593017578) {
                            if (features[7] <= 2.744572162628174) {
                                if (features[2] <= 9.666666984558105) {
                                    if (features[1] <= 6.111111164093018) {
                                        classes[0] = 26; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[1] <= 7.3333330154418945) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 22; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[10] <= 18.0) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        if (features[13] <= -18.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[8] <= 90.0) {
                    if (features[5] <= 12.358114242553711) {
                        classes[0] = 66; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= 24.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        }
    } else {
        if (features[9] <= 18.0) {
            if (features[3] <= 38.5) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 45; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_20(float features[]) {
    int classes[2];
    
    if (features[9] <= 30.0) {
        if (features[6] <= 15.375020027160645) {
            if (features[3] <= 0.3205128312110901) {
                if (features[8] <= 6.0) {
                    classes[0] = 11; 
                    classes[1] = 0; 
                } else {
                    if (features[12] <= -6.0) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[13] <= -96.0) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[14] <= -54.0) {
                        if (features[0] <= -4.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[5] <= 7.6656999588012695) {
                            classes[0] = 58; 
                            classes[1] = 0; 
                        } else {
                            if (features[2] <= 13.200000762939453) {
                                if (features[7] <= 0.24771684408187866) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    if (features[2] <= 8.777777671813965) {
                                        if (features[6] <= 6.928886413574219) {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[4] <= 4.5465216636657715) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 26; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[2] <= 24.22222137451172) {
                classes[0] = 0; 
                classes[1] = 14; 
            } else {
                if (features[5] <= 14.30978775024414) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        }
    } else {
        if (features[6] <= 6.5816450119018555) {
            if (features[11] <= 3.0) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 16; 
                classes[1] = 0; 
            }
        } else {
            if (features[10] <= -30.0) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                if (features[5] <= 8.920174598693848) {
                    if (features[1] <= 6.3111114501953125) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[10] <= 54.0) {
                        classes[0] = 0; 
                        classes[1] = 60; 
                    } else {
                        if (features[6] <= 19.4383544921875) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_21(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        if (features[1] <= -7.128654956817627) {
            if (features[11] <= 22.5) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 42; 
        }
    } else {
        if (features[6] <= 14.237678527832031) {
            if (features[2] <= 17.666667938232422) {
                if (features[12] <= -18.0) {
                    if (features[10] <= -30.0) {
                        classes[0] = 29; 
                        classes[1] = 0; 
                    } else {
                        if (features[15] <= 0.5) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[7] <= 0.23791547119617462) {
                                if (features[1] <= -1.0666667222976685) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[1] <= 0.5555555820465088) {
                                    if (features[6] <= 7.720903396606445) {
                                        if (features[15] <= 33.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 25; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[4] <= 7.036719799041748) {
                        if (features[1] <= -2.5999999046325684) {
                            if (features[11] <= 41.5) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 21; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[7] <= 0.9454104900360107) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            if (features[5] <= 6.293708324432373) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                }
            } else {
                if (features[7] <= 2.271127223968506) {
                    if (features[6] <= 3.607079029083252) {
                        if (features[13] <= -14.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 62; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[2] <= 41.19999694824219) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[10] <= 60.0) {
                if (features[6] <= 14.927045822143555) {
                    if (features[6] <= 14.588066101074219) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 13; 
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_22(float features[]) {
    int classes[2];
    
    if (features[7] <= 1.542572021484375) {
        if (features[2] <= 14.644444465637207) {
            if (features[5] <= 10.15257453918457) {
                if (features[4] <= 27.974533081054688) {
                    if (features[14] <= -42.0) {
                        if (features[10] <= -24.0) {
                            if (features[8] <= 18.0) {
                                classes[0] = 24; 
                                classes[1] = 0; 
                            } else {
                                if (features[10] <= -42.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    } else {
                        if (features[3] <= 59.833335876464844) {
                            if (features[0] <= 0.35555556416511536) {
                                classes[0] = 24; 
                                classes[1] = 0; 
                            } else {
                                if (features[0] <= 1.0261437892913818) {
                                    if (features[14] <= -18.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[3] <= 63.70000076293945) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                if (features[11] <= 3.0) {
                    classes[0] = 0; 
                    classes[1] = 19; 
                } else {
                    if (features[0] <= 1.7333333492279053) {
                        if (features[1] <= 6.488888740539551) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                }
            }
        } else {
            if (features[2] <= 47.22222137451172) {
                if (features[2] <= 17.288888931274414) {
                    if (features[5] <= 18.679975509643555) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 56; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[4] <= 18.22101593017578) {
            if (features[7] <= 7.149204730987549) {
                if (features[14] <= -96.0) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[6] <= 7.561395645141602) {
                        if (features[6] <= 6.938051223754883) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 11; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 9; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 40; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_23(float features[]) {
    int classes[2];
    
    if (features[8] <= 54.0) {
        if (features[2] <= -3.2525253295898438) {
            if (features[11] <= 53.5) {
                if (features[10] <= -42.0) {
                    classes[0] = 29; 
                    classes[1] = 0; 
                } else {
                    if (features[5] <= 7.369845867156982) {
                        if (features[2] <= -10.133333206176758) {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[15] <= 23.0) {
                            classes[0] = 0; 
                            classes[1] = 13; 
                        } else {
                            if (features[14] <= -54.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[4] <= 18.22101593017578) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 24; 
            }
        } else {
            if (features[12] <= -60.0) {
                classes[0] = 0; 
                classes[1] = 4; 
            } else {
                if (features[6] <= 15.131206512451172) {
                    if (features[13] <= -18.0) {
                        if (features[3] <= 1.25) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[6] <= 5.494494438171387) {
                                if (features[7] <= 0.24771684408187866) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[7] <= 3.0003857612609863) {
                                    classes[0] = 26; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[1] <= -40.44444274902344) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 60; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[4] <= 5.985787391662598) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        }
    } else {
        if (features[3] <= 16.23684310913086) {
            if (features[4] <= 36.48872375488281) {
                if (features[2] <= -2.870175361633301) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 13; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 40; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_24(float features[]) {
    int classes[2];
    
    if (features[6] <= 9.517576217651367) {
        if (features[4] <= 25.044300079345703) {
            if (features[1] <= -2.110145092010498) {
                if (features[15] <= 6.5) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    if (features[0] <= 2.555555582046509) {
                        if (features[1] <= -3.7712416648864746) {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 26.75) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    } else {
                        if (features[14] <= -42.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 19.950000762939453) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            } else {
                if (features[13] <= -36.0) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[0] <= 5.44444465637207) {
                        if (features[5] <= 10.409765243530273) {
                            if (features[14] <= -66.0) {
                                if (features[11] <= 28.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 84; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[11] <= 3.0) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 4; 
        }
    } else {
        if (features[2] <= 10.028204917907715) {
            if (features[2] <= 1.1111111640930176) {
                if (features[8] <= 18.0) {
                    if (features[6] <= 15.986681938171387) {
                        if (features[10] <= 0.0) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 76; 
                }
            } else {
                if (features[1] <= -18.760684967041016) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[15] <= 12.0) {
                classes[0] = 0; 
                classes[1] = 3; 
            } else {
                if (features[7] <= 6.012261867523193) {
                    classes[0] = 18; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_25(float features[]) {
    int classes[2];
    
    if (features[9] <= 30.0) {
        if (features[6] <= 14.927045822143555) {
            if (features[4] <= 25.044300079345703) {
                if (features[1] <= -14.844444274902344) {
                    if (features[5] <= 19.500009536743164) {
                        if (features[3] <= 6.666666507720947) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[15] <= 20.5) {
                                if (features[10] <= 6.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[10] <= -6.0) {
                        if (features[2] <= -47.758453369140625) {
                            if (features[6] <= 8.259466171264648) {
                                classes[0] = 23; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            if (features[2] <= -34.5111083984375) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[11] <= 0.5) {
                            if (features[1] <= -3.48888897895813) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[3] <= 59.909088134765625) {
                                classes[0] = 75; 
                                classes[1] = 0; 
                            } else {
                                if (features[2] <= 6.266666889190674) {
                                    if (features[0] <= 1.2000000476837158) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 10; 
            }
        } else {
            if (features[2] <= 27.88888931274414) {
                classes[0] = 0; 
                classes[1] = 10; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[6] <= 7.1333699226379395) {
            if (features[11] <= 3.0) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 22; 
                classes[1] = 0; 
            }
        } else {
            if (features[8] <= 18.0) {
                if (features[4] <= 10.674945831298828) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[5] <= 7.994941711425781) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[1] <= 30.06708526611328) {
                        if (features[14] <= -30.0) {
                            classes[0] = 0; 
                            classes[1] = 42; 
                        } else {
                            if (features[8] <= 144.0) {
                                if (features[15] <= 38.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        }
                    } else {
                        if (features[1] <= 36.022640228271484) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_26(float features[]) {
    int classes[2];
    
    if (features[13] <= -18.0) {
        if (features[8] <= 54.0) {
            if (features[2] <= 19.200000762939453) {
                if (features[7] <= 0.18808870017528534) {
                    if (features[8] <= 6.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 17; 
                    }
                } else {
                    if (features[5] <= 9.031120300292969) {
                        if (features[3] <= 59.0) {
                            if (features[5] <= 6.601297378540039) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[4] <= 17.157241821289062) {
                            if (features[7] <= 2.271127223968506) {
                                if (features[10] <= 0.0) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[7] <= 0.966093897819519) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        } else {
                            if (features[5] <= 10.23729133605957) {
                                if (features[1] <= 4.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            }
                        }
                    }
                }
            } else {
                if (features[10] <= 54.0) {
                    if (features[4] <= 4.5465216636657715) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            }
        } else {
            if (features[5] <= 10.166662216186523) {
                if (features[5] <= 9.295181274414062) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 45; 
            }
        }
    } else {
        if (features[7] <= 3.000645637512207) {
            if (features[4] <= 36.95480728149414) {
                if (features[6] <= 13.921160697937012) {
                    if (features[2] <= 2.555555582046509) {
                        if (features[11] <= 60.0) {
                            if (features[1] <= -2.6434783935546875) {
                                if (features[6] <= 5.692792892456055) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                }
                            } else {
                                if (features[5] <= 14.559271812438965) {
                                    if (features[8] <= 30.0) {
                                        classes[0] = 41; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[0] <= 3.9111111164093018) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        classes[0] = 58; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 9; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_27(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        if (features[4] <= 36.450618743896484) {
            if (features[13] <= -54.0) {
                if (features[6] <= 14.398603439331055) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 11; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 50; 
        }
    } else {
        if (features[13] <= -6.0) {
            if (features[5] <= 16.431604385375977) {
                if (features[14] <= -54.0) {
                    if (features[0] <= -7.5) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                } else {
                    if (features[11] <= 0.5) {
                        if (features[5] <= 5.847836494445801) {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    } else {
                        if (features[0] <= 3.4666666984558105) {
                            if (features[10] <= 30.0) {
                                if (features[10] <= 18.0) {
                                    if (features[3] <= 12.300000190734863) {
                                        if (features[11] <= 4.5) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 18; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[5] <= 8.215861320495605) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[6] <= 20.362064361572266) {
                                    classes[0] = 56; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[11] <= 12.5) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[5] <= 10.433858871459961) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[3] <= 62.46666717529297) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 13; 
            }
        } else {
            if (features[6] <= 9.38644790649414) {
                classes[0] = 40; 
                classes[1] = 0; 
            } else {
                if (features[6] <= 10.456216812133789) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_28(float features[]) {
    int classes[2];
    
    if (features[8] <= 18.0) {
        if (features[6] <= 10.323939323425293) {
            if (features[0] <= 0.35555556416511536) {
                classes[0] = 64; 
                classes[1] = 0; 
            } else {
                if (features[15] <= 6.5) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 7; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[14] <= -18.0) {
                classes[0] = 0; 
                classes[1] = 10; 
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[8] <= 54.0) {
            if (features[2] <= 17.288888931274414) {
                if (features[6] <= 9.53001880645752) {
                    if (features[3] <= 10.94565200805664) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    } else {
                        if (features[4] <= 11.115289688110352) {
                            if (features[7] <= 0.24771684408187866) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                            } else {
                                if (features[9] <= 42.0) {
                                    if (features[0] <= 2.133333444595337) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[4] <= 7.839478969573975) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            classes[0] = 18; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 32; 
                }
            } else {
                if (features[13] <= -78.0) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 17; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[7] <= 0.5042201280593872) {
                if (features[4] <= 25.119972229003906) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[5] <= 22.453296661376953) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        if (features[12] <= -108.0) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 47; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_29(float features[]) {
    int classes[2];
    
    if (features[8] <= 54.0) {
        if (features[6] <= 15.131206512451172) {
            if (features[5] <= 16.504114151000977) {
                if (features[2] <= 14.533332824707031) {
                    if (features[5] <= 7.834104537963867) {
                        if (features[5] <= 6.631562232971191) {
                            classes[0] = 23; 
                            classes[1] = 0; 
                        } else {
                            if (features[15] <= 0.5) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[11] <= 59.0) {
                                    classes[0] = 16; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[6] <= 9.317404747009277) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[1] <= 7.541062831878662) {
                            if (features[7] <= 0.24771684408187866) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                if (features[1] <= 1.5777778625488281) {
                                    if (features[7] <= 1.9435930252075195) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[15] <= 33.0) {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[5] <= 10.898948669433594) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        if (features[3] <= 56.79999923706055) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[15] <= 2.5) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 16; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 73; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        } else {
            if (features[9] <= 18.0) {
                if (features[2] <= 27.88888931274414) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 18; 
            }
        }
    } else {
        if (features[10] <= 54.0) {
            classes[0] = 0; 
            classes[1] = 44; 
        } else {
            if (features[0] <= 4.395424842834473) {
                if (features[6] <= 17.539012908935547) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_30(float features[]) {
    int classes[2];
    
    if (features[11] <= 73.5) {
        if (features[2] <= 17.666667938232422) {
            if (features[8] <= 54.0) {
                if (features[5] <= 10.207597732543945) {
                    if (features[1] <= -0.1111111119389534) {
                        if (features[0] <= -5.44444465637207) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            if (features[0] <= 4.0) {
                                if (features[1] <= -6.740740776062012) {
                                    if (features[11] <= 10.0) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[11] <= 41.5) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 2.8913094997406006) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[9] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 13; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                        }
                                    }
                                }
                            } else {
                                if (features[1] <= -0.3777777850627899) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[13] <= -6.0) {
                            if (features[14] <= -42.0) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 15; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 18; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[7] <= 0.18808870017528534) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        if (features[9] <= 42.0) {
                            if (features[5] <= 10.433858871459961) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[10] <= 30.0) {
                                    if (features[2] <= -58.11111068725586) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 12; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 48; 
            }
        } else {
            if (features[4] <= 48.913414001464844) {
                if (features[6] <= 3.6879992485046387) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[0] <= 0.35555556416511536) {
                        classes[0] = 33; 
                        classes[1] = 0; 
                    } else {
                        if (features[3] <= 11.550000190734863) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[7] <= 3.0003857612609863) {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
            }
        }
    } else {
        classes[0] = 0; 
        classes[1] = 27; 
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_31(float features[]) {
    int classes[2];
    
    if (features[6] <= 12.245941162109375) {
        if (features[5] <= 7.510794162750244) {
            if (features[13] <= -6.0) {
                if (features[15] <= 59.5) {
                    if (features[10] <= 54.0) {
                        classes[0] = 35; 
                        classes[1] = 0; 
                    } else {
                        if (features[3] <= 7.25) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[7] <= 0.23791547119617462) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 43; 
                classes[1] = 0; 
            }
        } else {
            if (features[2] <= 14.377777099609375) {
                if (features[6] <= 8.97004508972168) {
                    if (features[3] <= 10.94565200805664) {
                        if (features[10] <= -42.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    } else {
                        if (features[6] <= 7.043270111083984) {
                            if (features[6] <= 6.55143404006958) {
                                if (features[7] <= 0.18808870017528534) {
                                    if (features[13] <= -18.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[7] <= 1.8921053409576416) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        if (features[6] <= 12.011245727539062) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 25; 
                classes[1] = 0; 
            }
        }
    } else {
        if (features[8] <= 18.0) {
            if (features[10] <= 42.0) {
                classes[0] = 0; 
                classes[1] = 5; 
            } else {
                if (features[2] <= 32.22222137451172) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                } else {
                    if (features[15] <= 34.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[14] <= -42.0) {
                classes[0] = 0; 
                classes[1] = 49; 
            } else {
                if (features[1] <= 30.06708526611328) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_32(float features[]) {
    int classes[2];
    
    if (features[5] <= 8.653282165527344) {
        if (features[13] <= -8.0) {
            if (features[2] <= -18.96666717529297) {
                if (features[12] <= -18.0) {
                    if (features[14] <= -54.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
                }
            } else {
                if (features[10] <= 54.0) {
                    if (features[3] <= 52.0) {
                        if (features[11] <= 1.0) {
                            if (features[5] <= 5.847836494445801) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 29; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[6] <= 6.636375427246094) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[0] <= -5.722222328186035) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 19; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[7] <= 2.477168560028076) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[0] <= 0.4000000059604645) {
                classes[0] = 47; 
                classes[1] = 0; 
            } else {
                if (features[10] <= 24.0) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        if (features[5] <= 13.906667709350586) {
            if (features[3] <= 25.099998474121094) {
                if (features[13] <= -48.0) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[2] <= 2.9111111164093018) {
                        classes[0] = 0; 
                        classes[1] = 16; 
                    } else {
                        if (features[8] <= 78.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            } else {
                if (features[4] <= 17.157241821289062) {
                    classes[0] = 16; 
                    classes[1] = 0; 
                } else {
                    if (features[2] <= -20.66666603088379) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                }
            }
        } else {
            if (features[11] <= 18.5) {
                if (features[0] <= -8.533333778381348) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[7] <= 0.9516618847846985) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[3] <= 12.566666603088379) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 57; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_33(float features[]) {
    int classes[2];
    
    if (features[5] <= 10.398416519165039) {
        if (features[4] <= 22.94793701171875) {
            if (features[13] <= -8.0) {
                if (features[14] <= -54.0) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    if (features[0] <= -0.4444444477558136) {
                        classes[0] = 33; 
                        classes[1] = 0; 
                    } else {
                        if (features[14] <= -42.0) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[1] <= -2.6666667461395264) {
                                if (features[0] <= 2.8000001907348633) {
                                    if (features[2] <= 3.444444417953491) {
                                        if (features[5] <= 7.4605889320373535) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[11] <= 0.5) {
                                    if (features[1] <= 0.8222222328186035) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[0] <= -0.1111111119389534) {
                                        if (features[6] <= 5.885939598083496) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 26; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 58; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 7; 
        }
    } else {
        if (features[8] <= 120.0) {
            if (features[0] <= -0.46464645862579346) {
                if (features[14] <= 12.0) {
                    if (features[4] <= 7.030747890472412) {
                        if (features[14] <= -54.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 25; 
                    }
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[15] <= 11.5) {
                    classes[0] = 0; 
                    classes[1] = 12; 
                } else {
                    if (features[11] <= 66.5) {
                        classes[0] = 14; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 39; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_34(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        classes[0] = 0; 
        classes[1] = 64; 
    } else {
        if (features[6] <= 15.131206512451172) {
            if (features[0] <= -1.2789115905761719) {
                if (features[3] <= 0.3068181872367859) {
                    if (features[9] <= 30.0) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 48; 
                    classes[1] = 0; 
                }
            } else {
                if (features[7] <= 2.500321626663208) {
                    if (features[3] <= 0.3205128312110901) {
                        if (features[5] <= 5.847836494445801) {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 15; 
                        }
                    } else {
                        if (features[6] <= 6.833078384399414) {
                            if (features[6] <= 6.366394996643066) {
                                if (features[2] <= -37.02222442626953) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[0] <= 2.2666666507720947) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[7] <= 0.5000643134117126) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[5] <= 9.673019409179688) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[14] <= -72.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[13] <= -6.0) {
                                    classes[0] = 27; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[15] <= 53.0) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[0] <= 1.2235294580459595) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[13] <= -18.0) {
                        if (features[15] <= 24.5) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[6] <= 12.294763565063477) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            }
        } else {
            if (features[10] <= 60.0) {
                classes[0] = 0; 
                classes[1] = 22; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_35(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        if (features[4] <= 36.48872375488281) {
            if (features[2] <= 9.863157272338867) {
                classes[0] = 0; 
                classes[1] = 13; 
            } else {
                if (features[0] <= -4.44444465637207) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 50; 
        }
    } else {
        if (features[6] <= 15.131206512451172) {
            if (features[5] <= 16.504114151000977) {
                if (features[3] <= 0.550000011920929) {
                    if (features[5] <= 6.0856733322143555) {
                        classes[0] = 20; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                } else {
                    if (features[14] <= -66.0) {
                        if (features[12] <= -18.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        if (features[8] <= 84.0) {
                            if (features[7] <= 3.0003857612609863) {
                                if (features[1] <= 29.066665649414062) {
                                    if (features[15] <= 38.5) {
                                        classes[0] = 72; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[10] <= 18.0) {
                                            classes[0] = 9; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 26; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 6.537147521972656) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[7] <= 4.121529579162598) {
                                    if (features[4] <= 12.64601993560791) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        } else {
            if (features[10] <= 60.0) {
                classes[0] = 0; 
                classes[1] = 13; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_36(float features[]) {
    int classes[2];
    
    if (features[5] <= 15.169201850891113) {
        if (features[5] <= 8.080222129821777) {
            if (features[1] <= -0.7222222089767456) {
                if (features[7] <= 0.24771684408187866) {
                    if (features[12] <= -10.0) {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[11] <= 1.5) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[1] <= -2.277777671813965) {
                            classes[0] = 16; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[3] <= 58.625) {
                    classes[0] = 64; 
                    classes[1] = 0; 
                } else {
                    if (features[3] <= 64.125) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[8] <= 78.0) {
                if (features[10] <= 30.0) {
                    if (features[3] <= 11.94565200805664) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        if (features[3] <= 49.75) {
                            if (features[4] <= 16.1302490234375) {
                                if (features[5] <= 8.33690357208252) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[14] <= -54.0) {
                                        if (features[7] <= 0.9018351435661316) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    } else {
                                        if (features[15] <= 20.5) {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            }
                        } else {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[6] <= 15.131206512451172) {
                        if (features[2] <= 8.711111068725586) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[4] <= 4.5465216636657715) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 22; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 12; 
            }
        }
    } else {
        if (features[4] <= 7.030747890472412) {
            classes[0] = 2; 
            classes[1] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 66; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_37(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        if (features[10] <= 54.0) {
            classes[0] = 0; 
            classes[1] = 52; 
        } else {
            if (features[10] <= 66.0) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        }
    } else {
        if (features[11] <= 80.0) {
            if (features[14] <= -42.0) {
                if (features[15] <= 58.0) {
                    if (features[2] <= -42.24444580078125) {
                        classes[0] = 31; 
                        classes[1] = 0; 
                    } else {
                        if (features[1] <= -7.3333330154418945) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[0] <= 1.2000000476837158) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                            } else {
                                if (features[7] <= 1.9523307085037231) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            } else {
                if (features[13] <= -18.0) {
                    if (features[3] <= 2.5) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[15] <= 4.0) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[3] <= 24.87963104248047) {
                                classes[0] = 12; 
                                classes[1] = 0; 
                            } else {
                                if (features[4] <= 5.292614936828613) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[11] <= 30.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[2] <= -11.955554962158203) {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[1] <= -0.35555556416511536) {
                        if (features[3] <= 45.5) {
                            classes[0] = 13; 
                            classes[1] = 0; 
                        } else {
                            if (features[14] <= -6.0) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 74; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 8; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_38(float features[]) {
    int classes[2];
    
    if (features[2] <= 4.55555534362793) {
        if (features[6] <= 9.02664852142334) {
            if (features[2] <= -43.844444274902344) {
                if (features[12] <= -18.0) {
                    classes[0] = 23; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[13] <= -18.0) {
                    if (features[10] <= 6.0) {
                        if (features[14] <= -42.0) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            if (features[8] <= 36.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[7] <= 0.23791547119617462) {
                        if (features[8] <= 18.0) {
                            if (features[0] <= -0.4000000059604645) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        }
                    } else {
                        classes[0] = 15; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[9] <= 30.0) {
                if (features[2] <= -3.222222328186035) {
                    if (features[5] <= 9.177327156066895) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    } else {
                        if (features[15] <= 18.0) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[8] <= 66.0) {
                        if (features[4] <= 16.52669334411621) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                if (features[5] <= 13.906667709350586) {
                    if (features[2] <= -3.5828094482421875) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 53; 
                }
            }
        }
    } else {
        if (features[12] <= -78.0) {
            classes[0] = 0; 
            classes[1] = 9; 
        } else {
            if (features[3] <= 0.25) {
                if (features[13] <= -18.0) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                if (features[7] <= 2.271127223968506) {
                    if (features[0] <= 0.915032684803009) {
                        classes[0] = 56; 
                        classes[1] = 0; 
                    } else {
                        if (features[2] <= 27.509803771972656) {
                            if (features[2] <= 7.091503143310547) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                if (features[0] <= 1.8222222328186035) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[9] <= -36.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_39(float features[]) {
    int classes[2];
    
    if (features[6] <= 11.238510131835938) {
        if (features[12] <= -54.0) {
            classes[0] = 0; 
            classes[1] = 12; 
        } else {
            if (features[7] <= 0.4401754140853882) {
                if (features[13] <= -18.0) {
                    if (features[0] <= 0.1111111119389534) {
                        if (features[15] <= 2.0) {
                            if (features[0] <= -0.2666666805744171) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[1] <= -13.55555534362793) {
                            if (features[10] <= 12.0) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    }
                } else {
                    if (features[1] <= -1.4666666984558105) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[0] <= 3.6888887882232666) {
                            if (features[3] <= 61.400001525878906) {
                                classes[0] = 35; 
                                classes[1] = 0; 
                            } else {
                                if (features[1] <= 6.588235378265381) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            } else {
                if (features[7] <= 14.11233139038086) {
                    if (features[0] <= 5.777777671813965) {
                        classes[0] = 84; 
                        classes[1] = 0; 
                    } else {
                        if (features[12] <= -24.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        }
    } else {
        if (features[8] <= 78.0) {
            if (features[14] <= -42.0) {
                classes[0] = 0; 
                classes[1] = 30; 
            } else {
                if (features[5] <= 18.858793258666992) {
                    if (features[4] <= 7.317755699157715) {
                        if (features[0] <= 0.2222222238779068) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            if (features[5] <= 6.930129051208496) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        }
                    } else {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 33; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_40(float features[]) {
    int classes[2];
    
    if (features[5] <= 13.906667709350586) {
        if (features[4] <= 25.044300079345703) {
            if (features[5] <= 8.095041275024414) {
                if (features[3] <= 60.034088134765625) {
                    if (features[5] <= 2.1004724502563477) {
                        if (features[10] <= 18.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[7] <= 18.85444450378418) {
                            classes[0] = 81; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[14] <= -6.0) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[2] <= -35.0) {
                    if (features[3] <= 29.549999237060547) {
                        classes[0] = 0; 
                        classes[1] = 15; 
                    } else {
                        if (features[12] <= -30.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                } else {
                    if (features[4] <= 7.3252387046813965) {
                        if (features[6] <= 7.021318435668945) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[13] <= -30.0) {
                                if (features[15] <= 24.0) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            }
                        }
                    } else {
                        if (features[11] <= 4.5) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[12] <= -54.0) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[6] <= 6.928335189819336) {
                                    if (features[2] <= -20.77777862548828) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[2] <= 7.333333969116211) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 36; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 10; 
        }
    } else {
        if (features[2] <= 8.55555534362793) {
            if (features[6] <= 5.559383869171143) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 54; 
            }
        } else {
            if (features[10] <= 66.0) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_41(float features[]) {
    int classes[2];
    
    if (features[5] <= 11.782848358154297) {
        if (features[1] <= -38.50724792480469) {
            classes[0] = 0; 
            classes[1] = 4; 
        } else {
            if (features[12] <= -54.0) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[7] <= 3.0003857612609863) {
                    if (features[3] <= 0.550000011920929) {
                        if (features[5] <= 6.539764404296875) {
                            classes[0] = 18; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 13; 
                        }
                    } else {
                        if (features[6] <= 15.490091323852539) {
                            if (features[1] <= -7.622221946716309) {
                                if (features[2] <= -48.55555725097656) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[7] <= 0.4401754140853882) {
                                    if (features[11] <= 64.5) {
                                        classes[0] = 16; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[10] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 94; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[13] <= -18.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[12] <= -18.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[0] <= 0.2222222238779068) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[14] <= -30.0) {
            classes[0] = 0; 
            classes[1] = 50; 
        } else {
            if (features[9] <= 0.0) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                if (features[2] <= 19.46666717529297) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    if (features[2] <= 34.8187141418457) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_42(float features[]) {
    int classes[2];
    
    if (features[4] <= 23.04978370666504) {
        if (features[13] <= -8.0) {
            if (features[7] <= 3.0003857612609863) {
                if (features[3] <= 0.3205128312110901) {
                    if (features[5] <= 5.885772228240967) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                } else {
                    if (features[10] <= 30.0) {
                        if (features[14] <= -66.0) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[9] <= 6.0) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                            } else {
                                if (features[1] <= 3.933333396911621) {
                                    if (features[8] <= 18.0) {
                                        if (features[14] <= -54.0) {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[13] <= -36.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 10; 
                                        }
                                    }
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 39; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[0] <= 1.6888889074325562) {
                    classes[0] = 0; 
                    classes[1] = 24; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[7] <= 10.23194694519043) {
                if (features[5] <= 9.920504570007324) {
                    if (features[0] <= 0.5132075548171997) {
                        classes[0] = 42; 
                        classes[1] = 0; 
                    } else {
                        if (features[0] <= 0.8444444537162781) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[3] <= 16.9632568359375) {
            if (features[15] <= 11.5) {
                if (features[4] <= 27.053499221801758) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 15; 
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 53; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_43(float features[]) {
    int classes[2];
    
    if (features[5] <= 13.381540298461914) {
        if (features[5] <= 7.708248138427734) {
            if (features[2] <= 45.31111145019531) {
                if (features[1] <= -0.13333334028720856) {
                    if (features[1] <= -1.7333333492279053) {
                        if (features[15] <= 1.0) {
                            if (features[9] <= 6.0) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 17; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[5] <= 4.461416721343994) {
                            if (features[0] <= 0.4888889193534851) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    classes[0] = 58; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[12] <= -54.0) {
                classes[0] = 0; 
                classes[1] = 15; 
            } else {
                if (features[15] <= 13.5) {
                    if (features[4] <= 17.917524337768555) {
                        if (features[0] <= -1.399999976158142) {
                            if (features[9] <= 18.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[9] <= -12.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[8] <= 78.0) {
                            if (features[1] <= 0.1111111119389534) {
                                if (features[12] <= -18.0) {
                                    if (features[13] <= -30.0) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[14] <= 6.0) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 42; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[6] <= 6.091170310974121) {
            classes[0] = 3; 
            classes[1] = 0; 
        } else {
            if (features[1] <= -19.688888549804688) {
                if (features[6] <= 12.666183471679688) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 51; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_44(float features[]) {
    int classes[2];
    
    if (features[12] <= -54.0) {
        classes[0] = 0; 
        classes[1] = 61; 
    } else {
        if (features[7] <= 2.5200083255767822) {
            if (features[10] <= 30.0) {
                if (features[0] <= 0.1111111119389534) {
                    if (features[6] <= 9.495516777038574) {
                        if (features[11] <= 57.0) {
                            classes[0] = 34; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[4] <= 15.877518653869629) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[1] <= -1.5777778625488281) {
                        if (features[5] <= 8.576459884643555) {
                            classes[0] = 0; 
                            classes[1] = 13; 
                        } else {
                            if (features[6] <= 9.145981788635254) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[2] <= -38.400001525878906) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[5] <= 19.78997230529785) {
                                if (features[13] <= -6.0) {
                                    if (features[4] <= 18.22101593017578) {
                                        classes[0] = 20; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[5] <= 9.95162582397461) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 7.7823076248168945) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            } else {
                if (features[5] <= 11.993917465209961) {
                    classes[0] = 66; 
                    classes[1] = 0; 
                } else {
                    if (features[6] <= 10.274239540100098) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            }
        } else {
            if (features[10] <= 42.0) {
                if (features[9] <= -36.0) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 19; 
                }
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_45(float features[]) {
    int classes[2];
    
    if (features[4] <= 22.94793701171875) {
        if (features[6] <= 14.237678527832031) {
            if (features[11] <= 0.5) {
                if (features[0] <= 0.35555556416511536) {
                    if (features[6] <= 6.603815078735352) {
                        classes[0] = 15; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 14; 
                }
            } else {
                if (features[13] <= -18.0) {
                    if (features[7] <= 1.9435930252075195) {
                        if (features[3] <= 70.25) {
                            if (features[1] <= -4.6823530197143555) {
                                classes[0] = 14; 
                                classes[1] = 0; 
                            } else {
                                if (features[1] <= -2.133333444595337) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[7] <= 0.23791547119617462) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[4] <= 18.203166961669922) {
                            if (features[2] <= 20.77777671813965) {
                                if (features[4] <= 12.185495376586914) {
                                    if (features[0] <= 4.777777671813965) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                } else {
                    if (features[4] <= 7.510992050170898) {
                        classes[0] = 37; 
                        classes[1] = 0; 
                    } else {
                        if (features[7] <= 3.000645637512207) {
                            if (features[0] <= 5.4666666984558105) {
                                if (features[4] <= 9.218626022338867) {
                                    if (features[8] <= 18.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[0] <= 0.5777778029441833) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[12] <= -18.0) {
                                        classes[0] = 43; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[1] <= 6.888888835906982) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            }
        } else {
            if (features[4] <= 8.97209644317627) {
                if (features[6] <= 14.588066101074219) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[9] <= 18.0) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 20; 
            }
        }
    } else {
        if (features[12] <= -54.0) {
            if (features[12] <= -78.0) {
                classes[0] = 0; 
                classes[1] = 41; 
            } else {
                if (features[1] <= -5.684210777282715) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_46(float features[]) {
    int classes[2];
    
    if (features[5] <= 14.133922576904297) {
        if (features[6] <= 9.212865829467773) {
            if (features[4] <= 7.702320575714111) {
                if (features[1] <= -11.333333969116211) {
                    if (features[8] <= 6.0) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 49; 
                    classes[1] = 0; 
                }
            } else {
                if (features[1] <= 7.541062831878662) {
                    if (features[3] <= 10.94565200805664) {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    } else {
                        if (features[3] <= 33.833335876464844) {
                            classes[0] = 25; 
                            classes[1] = 0; 
                        } else {
                            if (features[14] <= 6.0) {
                                if (features[3] <= 72.19999694824219) {
                                    if (features[13] <= -48.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[5] <= 10.253339767456055) {
                                            classes[0] = 0; 
                                            classes[1] = 11; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 24; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[14] <= -6.0) {
                if (features[8] <= 54.0) {
                    if (features[5] <= 5.530928134918213) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[2] <= -41.33333206176758) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[4] <= 17.157241821289062) {
                                if (features[6] <= 10.247390747070312) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 15; 
                }
            } else {
                if (features[8] <= 18.0) {
                    if (features[1] <= -15.311111450195312) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 8; 
                    classes[1] = 0; 
                }
            }
        }
    } else {
        classes[0] = 0; 
        classes[1] = 65; 
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_47(float features[]) {
    int classes[2];
    
    if (features[2] <= 7.861111164093018) {
        if (features[3] <= 52.19999694824219) {
            if (features[5] <= 8.035717010498047) {
                if (features[6] <= 10.197725296020508) {
                    if (features[9] <= -12.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[2] <= 1.0) {
                            classes[0] = 34; 
                            classes[1] = 0; 
                        } else {
                            if (features[3] <= 0.4000000059604645) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[3] <= 30.700000762939453) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[9] <= 6.0) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    if (features[12] <= -48.0) {
                        classes[0] = 0; 
                        classes[1] = 27; 
                    } else {
                        if (features[7] <= 0.18808870017528534) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        } else {
                            if (features[15] <= 17.0) {
                                if (features[8] <= 6.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                }
                            } else {
                                if (features[14] <= -54.0) {
                                    if (features[0] <= -6.630302906036377) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[2] <= -5.622222423553467) {
                classes[0] = 0; 
                classes[1] = 40; 
            } else {
                if (features[3] <= 59.833335876464844) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    if (features[2] <= -4.511111259460449) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                }
            }
        }
    } else {
        if (features[8] <= 90.0) {
            if (features[12] <= -60.0) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[13] <= -30.0) {
                    if (features[2] <= 30.0) {
                        if (features[1] <= -6.733333587646484) {
                            if (features[7] <= 1.2524760961532593) {
                                classes[0] = 15; 
                                classes[1] = 0; 
                            } else {
                                if (features[13] <= -54.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[2] <= 12.933333396911621) {
                        if (features[8] <= 30.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 59; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 5; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_48(float features[]) {
    int classes[2];
    
    if (features[2] <= 17.77777862548828) {
        if (features[12] <= -54.0) {
            classes[0] = 0; 
            classes[1] = 53; 
        } else {
            if (features[5] <= 14.163500785827637) {
                if (features[1] <= 7.318840980529785) {
                    if (features[3] <= 10.94565200805664) {
                        if (features[0] <= 0.40000003576278687) {
                            if (features[12] <= -18.0) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[2] <= -28.755556106567383) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        }
                    } else {
                        if (features[1] <= -1.4666666984558105) {
                            if (features[1] <= -5.615686416625977) {
                                if (features[7] <= 2.271127223968506) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[3] <= 27.149999618530273) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[8] <= 18.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                }
                            }
                        } else {
                            if (features[11] <= 76.0) {
                                if (features[0] <= 5.022222518920898) {
                                    classes[0] = 21; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[5] <= 9.59675121307373) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                } else {
                    classes[0] = 33; 
                    classes[1] = 0; 
                }
            } else {
                if (features[2] <= -42.55555725097656) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[14] <= -30.0) {
                        classes[0] = 0; 
                        classes[1] = 19; 
                    } else {
                        if (features[11] <= 8.5) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[7] <= 3.0003857612609863) {
            if (features[10] <= 90.0) {
                if (features[2] <= 45.31111145019531) {
                    classes[0] = 53; 
                    classes[1] = 0; 
                } else {
                    if (features[10] <= 66.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[5] <= 7.65737771987915) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_49(float features[]) {
    int classes[2];
    
    if (features[14] <= -18.0) {
        if (features[5] <= 7.947175979614258) {
            if (features[11] <= 59.0) {
                if (features[6] <= 10.413570404052734) {
                    classes[0] = 34; 
                    classes[1] = 0; 
                } else {
                    if (features[5] <= 6.6094207763671875) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            if (features[6] <= 9.544048309326172) {
                if (features[12] <= -18.0) {
                    if (features[15] <= 14.0) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        if (features[5] <= 8.388494491577148) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[0] <= 4.244444370269775) {
                                classes[0] = 13; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                } else {
                    if (features[2] <= -30.22222137451172) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[2] <= -3.168667793273926) {
                    classes[0] = 0; 
                    classes[1] = 68; 
                } else {
                    if (features[10] <= 30.0) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            }
        }
    } else {
        if (features[5] <= 10.87028694152832) {
            if (features[4] <= 30.89788818359375) {
                if (features[13] <= -18.0) {
                    if (features[11] <= 1.5) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[5] <= 7.510042190551758) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                        } else {
                            if (features[6] <= 6.544161319732666) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[5] <= 8.18954086303711) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[11] <= 62.5) {
                        classes[0] = 52; 
                        classes[1] = 0; 
                    } else {
                        if (features[6] <= 7.096175193786621) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 11; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        } else {
            if (features[14] <= 6.0) {
                classes[0] = 0; 
                classes[1] = 7; 
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict (float features[]) {
    int n_classes = 2;
    int classes[n_classes];
    int i;
    for (i = 0; i < n_classes; i++) {
        classes[i] = 0;
    }

    classes[predict_0(features)]++;
    classes[predict_1(features)]++;
    classes[predict_2(features)]++;
    classes[predict_3(features)]++;
    classes[predict_4(features)]++;
    classes[predict_5(features)]++;
    classes[predict_6(features)]++;
    classes[predict_7(features)]++;
    classes[predict_8(features)]++;
    classes[predict_9(features)]++;
    classes[predict_10(features)]++;
    classes[predict_11(features)]++;
    classes[predict_12(features)]++;
    classes[predict_13(features)]++;
    classes[predict_14(features)]++;
    classes[predict_15(features)]++;
    classes[predict_16(features)]++;
    classes[predict_17(features)]++;
    classes[predict_18(features)]++;
    classes[predict_19(features)]++;
    classes[predict_20(features)]++;
    classes[predict_21(features)]++;
    classes[predict_22(features)]++;
    classes[predict_23(features)]++;
    classes[predict_24(features)]++;
    classes[predict_25(features)]++;
    classes[predict_26(features)]++;
    classes[predict_27(features)]++;
    classes[predict_28(features)]++;
    classes[predict_29(features)]++;
    classes[predict_30(features)]++;
    classes[predict_31(features)]++;
    classes[predict_32(features)]++;
    classes[predict_33(features)]++;
    classes[predict_34(features)]++;
    classes[predict_35(features)]++;
    classes[predict_36(features)]++;
    classes[predict_37(features)]++;
    classes[predict_38(features)]++;
    classes[predict_39(features)]++;
    classes[predict_40(features)]++;
    classes[predict_41(features)]++;
    classes[predict_42(features)]++;
    classes[predict_43(features)]++;
    classes[predict_44(features)]++;
    classes[predict_45(features)]++;
    classes[predict_46(features)]++;
    classes[predict_47(features)]++;
    classes[predict_48(features)]++;
    classes[predict_49(features)]++;

    int class_idx = 0;
    int class_val = classes[0];
    for (i = 1; i < n_classes; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int main(int argc, const char * argv[]) {
    float features[argc-1];
    int i;
    for (i = 1; i < argc; i++) {
        features[i-1] = atof(argv[i]);
    }
    printf("%d", predict(features));
    return 0;
}