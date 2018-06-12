#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[2];
    
    if (features[37] <= -10.0) {
        if (features[11] <= 35.33333206176758) {
            if (features[35] <= 1.7333333492279053) {
                classes[0] = 0; 
                classes[1] = 54; 
            } else {
                if (features[2] <= 5.432435035705566) {
                    if (features[10] <= 4.586605548858643) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            }
        } else {
            classes[0] = 7; 
            classes[1] = 0; 
        }
    } else {
        if (features[9] <= -30.0) {
            classes[0] = 0; 
            classes[1] = 23; 
        } else {
            if (features[27] <= 8.911110877990723) {
                if (features[4] <= 30.0) {
                    if (features[2] <= 7.812899589538574) {
                        if (features[6] <= 6.340639114379883) {
                            classes[0] = 142; 
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
                    if (features[3] <= 2.555555582046509) {
                        classes[0] = 28; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                }
            } else {
                if (features[26] <= 2.2510504722595215) {
                    if (features[24] <= 30.0) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 23; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[43] <= 35.488887786865234) {
                        classes[0] = 0; 
                        classes[1] = 25; 
                    } else {
                        classes[0] = 1; 
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

int predict_1(float features[]) {
    int classes[2];
    
    if (features[11] <= -19.46410369873047) {
        classes[0] = 0; 
        classes[1] = 45; 
    } else {
        if (features[7] <= -6.748147964477539) {
            classes[0] = 0; 
            classes[1] = 33; 
        } else {
            if (features[26] <= 5.175013542175293) {
                if (features[2] <= 5.936614990234375) {
                    if (features[42] <= 5.893129348754883) {
                        if (features[22] <= 6.474167823791504) {
                            if (features[7] <= -6.629629611968994) {
                                if (features[22] <= 2.2204818725585938) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 195; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[42] <= 4.629815101623535) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                } else {
                    if (features[9] <= -14.0) {
                        if (features[34] <= 5.777096748352051) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[37] <= 8.0) {
                    classes[0] = 0; 
                    classes[1] = 22; 
                } else {
                    if (features[40] <= 12.0) {
                        if (features[11] <= -14.666666030883789) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
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

int predict_2(float features[]) {
    int classes[2];
    
    if (features[43] <= -13.733333587646484) {
        if (features[41] <= -22.0) {
            if (features[25] <= -22.0) {
                if (features[23] <= 6.1054887771606445) {
                    if (features[9] <= -10.0) {
                        classes[0] = 0; 
                        classes[1] = 17; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 61; 
                }
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 11; 
            classes[1] = 0; 
        }
    } else {
        if (features[40] <= 16.0) {
            if (features[1] <= -14.0) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 152; 
                classes[1] = 0; 
            }
        } else {
            if (features[11] <= 35.06666564941406) {
                classes[0] = 0; 
                classes[1] = 61; 
            } else {
                classes[0] = 25; 
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

int predict_3(float features[]) {
    int classes[2];
    
    if (features[27] <= 9.66451644897461) {
        if (features[25] <= -30.0) {
            classes[0] = 0; 
            classes[1] = 28; 
        } else {
            if (features[23] <= 23.622222900390625) {
                if (features[40] <= -6.0) {
                    if (features[10] <= 4.585279941558838) {
                        classes[0] = 35; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                    }
                } else {
                    if (features[32] <= 48.0) {
                        if (features[0] <= 6.0) {
                            classes[0] = 79; 
                            classes[1] = 0; 
                        } else {
                            if (features[43] <= 1.3703703880310059) {
                                classes[0] = 75; 
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
            } else {
                classes[0] = 0; 
                classes[1] = 12; 
            }
        }
    } else {
        if (features[11] <= 35.74073791503906) {
            classes[0] = 0; 
            classes[1] = 69; 
        } else {
            classes[0] = 24; 
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

int predict_4(float features[]) {
    int classes[2];
    
    if (features[9] <= -30.0) {
        classes[0] = 0; 
        classes[1] = 38; 
    } else {
        if (features[28] <= 2.5) {
            if (features[24] <= 14.0) {
                if (features[26] <= 5.715373516082764) {
                    if (features[3] <= 3.0444445610046387) {
                        classes[0] = 191; 
                        classes[1] = 0; 
                    } else {
                        if (features[19] <= 2.2666666507720947) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    if (features[42] <= 4.528904438018799) {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 13; 
                    }
                }
            } else {
                if (features[25] <= 30.0) {
                    classes[0] = 0; 
                    classes[1] = 54; 
                } else {
                    classes[0] = 25; 
                    classes[1] = 0; 
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