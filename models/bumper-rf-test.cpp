#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[2];
    
    if (features[33] <= -42.0) {
        if (features[7] <= -7.9748430252075195) {
            if (features[45] <= 54.5) {
                classes[0] = 9; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        } else {
            if (features[41] <= -54.0) {
                classes[0] = 0; 
                classes[1] = 26; 
            } else {
                if (features[9] <= -30.0) {
                    if (features[44] <= 54.0) {
                        if (features[27] <= 7.667924880981445) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[41] <= -42.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 21; 
                    }
                }
            }
        }
    } else {
        if (features[1] <= -54.0) {
            if (features[45] <= 81.0) {
                if (features[28] <= 1.5) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 21; 
                }
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            if (features[16] <= 30.0) {
                if (features[29] <= 65.5) {
                    if (features[5] <= 18.0) {
                        if (features[3] <= -12.222222328186035) {
                            if (features[38] <= 3.742954730987549) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 101; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[12] <= 11.5) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[14] <= 0.23791547119617462) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[29] <= 72.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[6] <= 18.317947387695312) {
                    if (features[37] <= 6.0) {
                        if (features[19] <= -3.866666793823242) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[5] <= 30.0) {
                                classes[0] = 19; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        }
                    } else {
                        if (features[14] <= 0.18808870017528534) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
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

int predict_1(float features[]) {
    int classes[2];
    
    if (features[26] <= 6.364188194274902) {
        if (features[0] <= 150.0) {
            if (features[41] <= -90.0) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[18] <= 2.702284336090088) {
                    if (features[11] <= -43.22222137451172) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 62; 
                    classes[1] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 6; 
        }
    } else {
        if (features[31] <= 7.699999809265137) {
            if (features[11] <= -8.44444465637207) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 9; 
                classes[1] = 0; 
            }
        } else {
            if (features[29] <= 16.5) {
                classes[0] = 0; 
                classes[1] = 27; 
            } else {
                if (features[1] <= -108.0) {
                    classes[0] = 0; 
                    classes[1] = 27; 
                } else {
                    if (features[41] <= -6.0) {
                        if (features[22] <= 17.98588752746582) {
                            if (features[19] <= 4.0) {
                                if (features[9] <= 8.0) {
                                    if (features[19] <= -11.066666603088379) {
                                        if (features[11] <= -22.656564712524414) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        }
                                    } else {
                                        if (features[28] <= 69.5) {
                                            classes[0] = 24; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                }
                            } else {
                                if (features[13] <= 31.0) {
                                    classes[0] = 0; 
                                    classes[1] = 12; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[10] <= 21.044044494628906) {
                                classes[0] = 0; 
                                classes[1] = 27; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 16; 
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

int predict_2(float features[]) {
    int classes[2];
    
    if (features[29] <= 5.0) {
        if (features[34] <= 0.6039701104164124) {
            if (features[11] <= -33.44444274902344) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                classes[0] = 8; 
                classes[1] = 0; 
            }
        } else {
            classes[0] = 62; 
            classes[1] = 0; 
        }
    } else {
        if (features[4] <= 30.0) {
            if (features[47] <= 50.69444274902344) {
                if (features[15] <= 80.25) {
                    if (features[29] <= 10.0) {
                        if (features[15] <= 8.600000381469727) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 33; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[3] <= -2.3333332538604736) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[11] <= -10.733333587646484) {
                    classes[0] = 7; 
                    classes[1] = 0; 
                } else {
                    if (features[35] <= 1.2222222089767456) {
                        classes[0] = 0; 
                        classes[1] = 24; 
                    } else {
                        if (features[27] <= -43.24242401123047) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[0] <= 132.0) {
                if (features[14] <= 0.6137670278549194) {
                    if (features[18] <= 70.29346466064453) {
                        if (features[47] <= 20.833332061767578) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[44] <= 64.0) {
                                if (features[26] <= 18.47379493713379) {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[36] <= 150.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                if (features[40] <= 30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                } else {
                    if (features[27] <= -50.77777862548828) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    } else {
                        if (features[6] <= 5.759566783905029) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[11] <= 10.022222518920898) {
                                if (features[23] <= -25.733333587646484) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 32; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 28; 
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
        if (features[28] <= 63.0) {
            if (features[43] <= -4.133333206176758) {
                if (features[18] <= 14.828033447265625) {
                    classes[0] = 64; 
                    classes[1] = 0; 
                } else {
                    if (features[12] <= 59.5) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[2] <= 47.65715789794922) {
                    if (features[3] <= -8.44444465637207) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[5] <= 12.0) {
                            classes[0] = 36; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 16; 
                }
            }
        } else {
            if (features[7] <= -0.444444477558136) {
                if (features[22] <= 11.120185852050781) {
                    if (features[45] <= 90.0) {
                        classes[0] = 7; 
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
                if (features[21] <= -54.0) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[24] <= 18.0) {
                        classes[0] = 0; 
                        classes[1] = 15; 
                    } else {
                        if (features[29] <= 76.5) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[34] <= 10.07638931274414) {
            if (features[33] <= -30.0) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                classes[0] = 7; 
                classes[1] = 0; 
            }
        } else {
            if (features[43] <= 2.344654083251953) {
                if (features[25] <= -6.0) {
                    if (features[11] <= -12.800000190734863) {
                        if (features[15] <= 20.799999237060547) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[3] <= 6.066666603088379) {
                            classes[0] = 0; 
                            classes[1] = 64; 
                        } else {
                            if (features[30] <= 0.3886314630508423) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            }
                        }
                    }
                } else {
                    classes[0] = 2; 
                    classes[1] = 0; 
                }
            } else {
                if (features[27] <= -3.8911566734313965) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    classes[0] = 6; 
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

int predict_4(float features[]) {
    int classes[2];
    
    if (features[4] <= 42.0) {
        if (features[26] <= 11.977655410766602) {
            if (features[33] <= -132.0) {
                classes[0] = 0; 
                classes[1] = 9; 
            } else {
                if (features[16] <= 42.0) {
                    if (features[43] <= 30.133333206176758) {
                        if (features[15] <= 79.75) {
                            if (features[45] <= 80.0) {
                                if (features[21] <= 18.0) {
                                    classes[0] = 104; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[0] <= 12.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                if (features[47] <= 84.19999694824219) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[3] <= -3.555555582046509) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[7] <= 4.799999237060547) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    if (features[15] <= 23.200000762939453) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[43] <= -1.3899370431900024) {
                if (features[1] <= -6.0) {
                    classes[0] = 0; 
                    classes[1] = 18; 
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
        if (features[36] <= 30.0) {
            classes[0] = 0; 
            classes[1] = 28; 
        } else {
            if (features[37] <= -18.0) {
                if (features[5] <= -72.0) {
                    if (features[9] <= -84.0) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 20; 
                }
            } else {
                if (features[22] <= 20.71692657470703) {
                    if (features[39] <= 69.71110534667969) {
                        if (features[45] <= 72.0) {
                            classes[0] = 18; 
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
                    if (features[45] <= 45.0) {
                        classes[0] = 0; 
                        classes[1] = 9; 
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