#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[2];
    
    if (features[17] <= -78.0) {
        if (features[41] <= -6.0) {
            if (features[38] <= 35.294700622558594) {
                if (features[23] <= 5.5010480880737305) {
                    if (features[18] <= 49.91895294189453) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                } else {
                    if (features[22] <= 16.986160278320312) {
                        if (features[4] <= 12.0) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 38; 
                    }
                }
            } else {
                if (features[41] <= -246.0) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            }
        } else {
            classes[0] = 2; 
            classes[1] = 0; 
        }
    } else {
        if (features[1] <= -78.0) {
            if (features[27] <= -11.222221374511719) {
                if (features[28] <= 57.5) {
                    classes[0] = 4; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                if (features[16] <= 96.0) {
                    if (features[35] <= 12.096435546875) {
                        classes[0] = 0; 
                        classes[1] = 37; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[47] <= 83.18333435058594) {
                if (features[34] <= 48.54555130004883) {
                    if (features[38] <= 37.054054260253906) {
                        if (features[12] <= 73.5) {
                            if (features[42] <= 7.672245025634766) {
                                if (features[47] <= 74.41667175292969) {
                                    if (features[9] <= -66.0) {
                                        if (features[1] <= -48.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 406; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[5] <= -18.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[5] <= 42.0) {
                                    if (features[44] <= 11.0) {
                                        if (features[18] <= 20.290462493896484) {
                                            classes[0] = 19; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        if (features[3] <= -10.48888874053955) {
                                            classes[0] = 14; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 188; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[42] <= 18.284469604492188) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[31] <= 69.75) {
                                if (features[13] <= 88.0) {
                                    if (features[22] <= 5.901510238647461) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                    }
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 22; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[34] <= 51.12580871582031) {
                        if (features[21] <= -6.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                }
            } else {
                if (features[46] <= 0.6835224032402039) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
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

int predict_1(float features[]) {
    int classes[2];
    
    if (features[18] <= 40.28963851928711) {
        if (features[2] <= 32.672027587890625) {
            if (features[29] <= 84.5) {
                if (features[27] <= -9.466667175292969) {
                    if (features[44] <= 77.5) {
                        classes[0] = 374; 
                        classes[1] = 0; 
                    } else {
                        if (features[15] <= 77.5) {
                            if (features[14] <= 2.52347469329834) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[34] <= 42.832435607910156) {
                        if (features[31] <= 8.0) {
                            classes[0] = 132; 
                            classes[1] = 0; 
                        } else {
                            if (features[9] <= -54.0) {
                                if (features[8] <= -12.0) {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[32] <= 42.0) {
                                    if (features[18] <= 27.605588912963867) {
                                        if (features[36] <= 90.0) {
                                            classes[0] = 139; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[11] <= -16.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    }
                                } else {
                                    if (features[28] <= 23.0) {
                                        if (features[33] <= -42.0) {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        }
                                    } else {
                                        classes[0] = 16; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[44] <= 53.0) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        } else {
                            if (features[20] <= 30.0) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    }
                }
            } else {
                if (features[11] <= -23.600000381469727) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            }
        } else {
            if (features[38] <= 23.2670841217041) {
                classes[0] = 0; 
                classes[1] = 29; 
            } else {
                if (features[3] <= -1.433962345123291) {
                    if (features[28] <= 34.5) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            }
        }
    } else {
        if (features[42] <= 21.441513061523438) {
            if (features[34] <= 27.822635650634766) {
                classes[0] = 0; 
                classes[1] = 34; 
            } else {
                if (features[7] <= 25.55555534362793) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        } else {
            classes[0] = 6; 
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

int predict_2(float features[]) {
    int classes[2];
    
    if (features[29] <= 70.5) {
        if (features[38] <= 11.66610336303711) {
            if (features[2] <= 32.04316329956055) {
                if (features[16] <= 144.0) {
                    if (features[13] <= 76.0) {
                        if (features[18] <= 39.88862991333008) {
                            if (features[29] <= 68.5) {
                                if (features[5] <= 30.0) {
                                    if (features[12] <= 57.0) {
                                        classes[0] = 433; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[3] <= -8.266666412353516) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 62; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[41] <= -18.0) {
                                        classes[0] = 21; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[12] <= 58.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        if (features[18] <= 2.865307331085205) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[29] <= 42.5) {
                                classes[0] = 14; 
                                classes[1] = 0; 
                            } else {
                                if (features[44] <= 58.5) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 12; 
            }
        } else {
            if (features[15] <= 22.890565872192383) {
                if (features[41] <= -42.0) {
                    if (features[45] <= 36.0) {
                        classes[0] = 15; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    if (features[23] <= -0.2666666805744171) {
                        if (features[20] <= 30.0) {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[11] <= 19.0) {
                            classes[0] = 0; 
                            classes[1] = 39; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[33] <= -198.0) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    if (features[11] <= -38.44444274902344) {
                        if (features[23] <= 17.55555534362793) {
                            if (features[30] <= 1.5001928806304932) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[19] <= -26.799999237060547) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[7] <= 89.80000305175781) {
                                if (features[44] <= 24.0) {
                                    if (features[1] <= -30.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[22] <= 62.949073791503906) {
                                        classes[0] = 74; 
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
                }
            }
        }
    } else {
        if (features[18] <= 16.432262420654297) {
            if (features[34] <= 43.76368713378906) {
                if (features[6] <= 26.769039154052734) {
                    if (features[10] <= 5.845610618591309) {
                        if (features[5] <= 18.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 23; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
            }
        } else {
            if (features[13] <= 75.0) {
                classes[0] = 0; 
                classes[1] = 28; 
            } else {
                if (features[47] <= 74.0) {
                    classes[0] = 0; 
                    classes[1] = 2; 
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

int predict_3(float features[]) {
    int classes[2];
    
    if (features[20] <= 42.0) {
        if (features[15] <= 68.80142211914062) {
            if (features[41] <= -162.0) {
                classes[0] = 0; 
                classes[1] = 4; 
            } else {
                if (features[0] <= 180.0) {
                    if (features[29] <= 74.0) {
                        if (features[34] <= 46.38512420654297) {
                            if (features[3] <= -19.200000762939453) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[5] <= 30.0) {
                                    if (features[37] <= 42.0) {
                                        if (features[22] <= 22.924007415771484) {
                                            classes[0] = 480; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    if (features[45] <= 15.5) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[21] <= -36.0) {
                                classes[0] = 1; 
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
                } else {
                    classes[0] = 0; 
                    classes[1] = 11; 
                }
            }
        } else {
            if (features[2] <= 23.172935485839844) {
                if (features[9] <= -54.0) {
                    if (features[34] <= 9.995110511779785) {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[33] <= -150.0) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 69; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 17; 
            }
        }
    } else {
        if (features[43] <= 4.0) {
            if (features[9] <= -42.0) {
                if (features[35] <= -16.155555725097656) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    classes[0] = 27; 
                    classes[1] = 0; 
                }
            } else {
                if (features[17] <= -54.0) {
                    if (features[3] <= -13.333333969116211) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[7] <= 25.555557250976562) {
                            classes[0] = 0; 
                            classes[1] = 45; 
                        } else {
                            if (features[46] <= 3.310741901397705) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                } else {
                    if (features[15] <= 23.333332061767578) {
                        if (features[4] <= 24.0) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 20; 
                        }
                    } else {
                        if (features[11] <= 3.6666665077209473) {
                            if (features[46] <= 1.9313108921051025) {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            } else {
                                if (features[14] <= 0.743150532245636) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[5] <= -6.0) {
                                if (features[33] <= -30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[36] <= 90.0) {
                classes[0] = 43; 
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

int predict_4(float features[]) {
    int classes[2];
    
    if (features[4] <= 114.0) {
        if (features[2] <= 19.871139526367188) {
            if (features[33] <= -42.0) {
                if (features[16] <= 72.0) {
                    if (features[32] <= 78.0) {
                        if (features[17] <= -54.0) {
                            if (features[26] <= 16.419113159179688) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 29; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[22] <= 15.45620346069336) {
                            if (features[16] <= 6.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            }
                        } else {
                            if (features[47] <= 41.79090881347656) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 15; 
                }
            } else {
                if (features[35] <= 4.733333587646484) {
                    if (features[17] <= -90.0) {
                        if (features[43] <= 7.777778148651123) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[5] <= 18.0) {
                            if (features[22] <= 22.879779815673828) {
                                if (features[28] <= 66.5) {
                                    if (features[38] <= 2.936655044555664) {
                                        if (features[9] <= -54.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 32; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 483; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[5] <= 6.0) {
                                        if (features[38] <= 6.235997200012207) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 25; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[39] <= 28.53333282470703) {
                                if (features[26] <= 7.160360336303711) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[41] <= -18.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                }
                            } else {
                                classes[0] = 27; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[46] <= 0.8520083427429199) {
                        if (features[11] <= 1.8666667938232422) {
                            if (features[22] <= 9.221541404724121) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                            }
                        } else {
                            if (features[36] <= 66.0) {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 17; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[15] <= 15.141304016113281) {
                classes[0] = 0; 
                classes[1] = 24; 
            } else {
                if (features[18] <= 11.772279739379883) {
                    if (features[27] <= -8.088889122009277) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 16; 
                    }
                } else {
                    if (features[34] <= 82.57276916503906) {
                        classes[0] = 51; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                }
            }
        }
    } else {
        if (features[32] <= 186.0) {
            classes[0] = 0; 
            classes[1] = 20; 
        } else {
            if (features[27] <= 29.60869598388672) {
                classes[0] = 0; 
                classes[1] = 2; 
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